/*
 * XREFs of sub_14091D7D0 @ 0x14091D7D0
 * Callers:
 *     sub_14091D7D0 @ 0x14091D7D0 (sub_14091D7D0.c)
 *     sub_14091E6AC @ 0x14091E6AC (sub_14091E6AC.c)
 *     sub_140B183B4 @ 0x140B183B4 (sub_140B183B4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     sub_14091D7D0 @ 0x14091D7D0 (sub_14091D7D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_14091D7D0(void *a1, const WCHAR *a2, __int64 a3, __int64 a4, ULONG ResultLength)
{
  NTSTATUS result; // eax
  __int64 v8; // rdx
  wchar_t *PoolWithTag; // rax
  wchar_t *v10; // r14
  __int64 v11; // rdx
  NTSTATUS v12; // edi
  NTSTATUS v13; // ebx
  ULONG Length; // [rsp+20h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    do
    {
      v12 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)a3, 0xFEu, &ResultLength);
      if ( v12 < 0 )
        break;
      v8 = -1LL;
      *(_WORD *)(a3 + 2 * ((unsigned __int64)*(unsigned int *)(a3 + 12) >> 1) + 16) = 0;
      do
        ++v8;
      while ( *(_WORD *)(a3 + 2 * v8 + 16) );
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v8 + 2, 0x20204D43u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
        goto LABEL_14;
      }
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a3 + 2 * v11 + 16) );
      wcscpy_s(PoolWithTag, v11 + 1, (const wchar_t *)(a3 + 16));
      LOBYTE(Length) = 1;
      v12 = sub_14091D7D0((int)KeyHandle, (int)v10, a3, 256, Length);
      ExFreePoolWithTag(v10, 0);
    }
    while ( v12 >= 0 );
    v13 = 0;
    if ( v12 != -2147483622 )
      v13 = v12;
    if ( v13 >= 0 )
      v13 = ZwDeleteKey(KeyHandle);
LABEL_14:
    ZwClose(KeyHandle);
    return v13;
  }
  return result;
}
