/*
 * XREFs of sub_1406C89B8 @ 0x1406C89B8
 * Callers:
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14082CD48 @ 0x14082CD48 (sub_14082CD48.c)
 */

__int64 __fastcall sub_1406C89B8(PSID Sid, _DWORD *a2, _DWORD *a3)
{
  int v3; // r14d
  HANDLE v6; // rbx
  NTSTATUS v7; // ebx
  NTSTATUS v9; // eax
  signed __int64 v10; // rcx
  unsigned int v11; // r15d
  _DWORD *v12; // rdi
  int v13; // eax
  HANDLE Handle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-41h] BYREF
  _DWORD *v18; // [rsp+88h] [rbp-11h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-9h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+7h] BYREF
  int v21; // [rsp+B0h] [rbp+17h]

  v3 = 0;
  v18 = a2;
  ResultLength = 0;
  KeyHandle = 0LL;
  KeyValueInformation = 0LL;
  v21 = 0;
  *(_OWORD *)&ObjectAttributes.Length = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  *a2 = 1;
  v6 = (HANDLE)qword_140D3CF28;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  Handle = (HANDLE)qword_140D3CF28;
  *(_OWORD *)&ObjectAttributes.ObjectName = 0LL;
  UnicodeString = 0LL;
  if ( !qword_140D3CF28 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38670;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(&Handle, 9u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v10 = (signed __int64)Handle;
    if ( v9 < 0 )
      v10 = 1LL;
    Handle = (HANDLE)v10;
    v6 = (HANDLE)_InterlockedCompareExchange64(&qword_140D3CF28, v10, 0LL);
    if ( v6 )
    {
      if ( Handle != (HANDLE)1 )
        ZwClose(Handle);
      Handle = v6;
    }
    else
    {
      v6 = Handle;
    }
  }
  if ( v6 == (HANDLE)1 )
    return 0;
  v7 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v7 >= 0 )
  {
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v7 >= 0 )
    {
      v11 = 0;
      v12 = a3;
      do
      {
        v7 = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&asc_140A3A3E0[8 * v3],
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
        if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741772 )
        {
          ZwClose(KeyHandle);
          return (unsigned int)v7;
        }
        if ( v7 == -1073741772 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
        {
          v13 = *(_DWORD *)((char *)v12 + (char *)dword_140D3CD18 - (char *)a3);
          ++v11;
        }
        else
        {
          v13 = HIDWORD(KeyValueInformation);
        }
        *v12 = v13;
        ++v3;
        ++v12;
      }
      while ( v3 < 4 );
      ZwClose(KeyHandle);
      if ( v11 < 4 )
      {
        v7 = sub_14082CD48(a3, 0LL);
        if ( v7 < 0 )
          return (unsigned int)v7;
        *v18 = 0;
      }
      return 0;
    }
    if ( v7 == -1073741772 )
      return 0;
  }
  return (unsigned int)v7;
}
