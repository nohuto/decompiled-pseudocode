/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x140797E20
 * Callers:
 *     sub_14061B7D0 @ 0x14061B7D0 (sub_14061B7D0.c)
 *     sub_140797CE4 @ 0x140797CE4 (sub_140797CE4.c)
 * Callees:
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // esi
  ULONG *PoolWithTag; // rdi
  int v13; // ebx
  ULONG v14; // eax
  ULONG v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0;
  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = ValueLength + 16;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, Length, 0x6D6C7472u);
  if ( !PoolWithTag )
    return -1073741801;
  v13 = -1073741772;
  if ( PrimaryHandle )
  {
    v13 = ZwQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v16);
    if ( v13 != -1073741772 )
      goto LABEL_8;
  }
  if ( FallbackHandle )
  {
    v13 = ZwQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v16);
LABEL_8:
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
    {
      if ( ValueType )
        *ValueType = PoolWithTag[1];
      if ( v13 >= 0 )
      {
        v14 = PoolWithTag[2];
        if ( ValueLength < v14 )
          v13 = -2147483643;
        else
          memmove(ValueData, PoolWithTag + 3, v14);
      }
      *ResultLength = PoolWithTag[2];
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return v13;
}
