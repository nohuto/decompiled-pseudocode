/*
 * XREFs of sub_1403A60FC @ 0x1403A60FC
 * Callers:
 *     sub_1403A5C60 @ 0x1403A5C60 (sub_1403A5C60.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1403A60FC(UNICODE_STRING *a1, UNICODE_STRING *a2, ULONG *a3, PVOID *a4, _BYTE *a5)
{
  NTSTATUS result; // eax
  ULONG Length; // edi
  PVOID PoolWithTag; // rbx
  _BYTE *i; // r15
  NTSTATUS v12; // eax
  int v13; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      Length = *a3;
      PoolWithTag = *a4;
      for ( i = a5; ; *i = 1 )
      {
        v12 = ZwQueryValueKey(KeyHandle, a2, KeyValueFullInformation, PoolWithTag, Length, &ResultLength);
        v13 = v12;
        if ( v12 != -1073741789 && v12 != -2147483643 )
          break;
        if ( Length != *a3 )
          break;
        Length = ResultLength;
        if ( ResultLength > 0x40000
          || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x78666343u)) == 0LL )
        {
          v13 = -1073741670;
          break;
        }
        if ( *i )
          ExFreePoolWithTag(*a4, 0x78666343u);
        *a4 = PoolWithTag;
        *a3 = Length;
      }
      ZwClose(KeyHandle);
      if ( v13 >= 0 && !*((_DWORD *)*a4 + 3) )
        return -1073741772;
      return v13;
    }
    else
    {
      ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
