/*
 * XREFs of sub_1406E6424 @ 0x1406E6424
 * Callers:
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 * Callees:
 *     sub_1402D1DA4 @ 0x1402D1DA4 (sub_1402D1DA4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_140697824 @ 0x140697824 (sub_140697824.c)
 *     sub_1406C94F8 @ 0x1406C94F8 (sub_1406C94F8.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140947190 @ 0x140947190 (sub_140947190.c)
 */

__int64 __fastcall sub_1406E6424(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // r15
  int v9; // ebx
  NTSTATUS v11; // eax
  _QWORD *v12; // r14
  int v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-A9h] BYREF
  HANDLE v18; // [rsp+40h] [rbp-99h] BYREF
  HANDLE v19; // [rsp+48h] [rbp-91h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-81h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-51h] BYREF
  __int64 v23; // [rsp+98h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-39h] BYREF
  void *v25; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-29h]
  __int128 v27; // [rsp+B8h] [rbp-21h]
  __int128 v28; // [rsp+C8h] [rbp-11h]
  __int64 v29; // [rsp+D8h] [rbp-1h]

  v4 = 0;
  v26 = a1;
  v25 = 0LL;
  KeyHandle = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v29 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  LODWORD(v23) = 0;
  v17 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_6;
  v9 = sub_14078014C(*(_QWORD *)&qword_140D00AC0, 4LL, &v25);
  if ( v9 >= 0 )
  {
    LODWORD(v17) = 3145774;
    *((_QWORD *)&v17 + 1) = L"Control\\DeviceLocations";
    ObjectAttributes.RootDirectory = v25;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v9 = v11;
    if ( v11 == -1073741772 )
      goto LABEL_6;
    if ( v11 < 0 )
      goto LABEL_7;
    v9 = sub_1407333B0(KeyHandle, (__int64)&v23);
    if ( v9 < 0 )
      goto LABEL_7;
    if ( !HIDWORD(v27) )
      goto LABEL_6;
    v9 = sub_140947190(*(PCWSTR *)(a2 + 64), &v19);
    if ( v9 == -1073741772 )
    {
      *((_QWORD *)&v17 + 1) = asc_140868930;
      ObjectAttributes.RootDirectory = KeyHandle;
      LODWORD(v17) = 262146;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      v19 = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwOpenKey(&v19, 0x20019u, &ObjectAttributes);
      if ( v9 == -1073741772 )
      {
LABEL_6:
        v9 = 0;
        goto LABEL_7;
      }
    }
    if ( v9 >= 0 )
    {
      v12 = (_QWORD *)(a2 + 32);
      do
      {
        if ( *v12 )
        {
          if ( Buffer )
            RtlFreeUnicodeString(&UnicodeString);
          if ( !sub_1402D1DA4((__int64)&UnicodeString, 16LL * v4 + a2 + 24) )
          {
            v9 = -1073741670;
            goto LABEL_7;
          }
          v13 = sub_1406C94F8((__int64)&UnicodeString, (__int16 *)&UnicodeString);
          Buffer = UnicodeString.Buffer;
          if ( v13 >= 0 )
          {
            v16 = sub_140947190(UnicodeString.Buffer, &v18);
            v9 = v16;
            if ( v16 == -1073741772 )
            {
              v9 = 0;
            }
            else if ( v16 < 0 )
            {
              goto LABEL_7;
            }
            if ( v18 )
              goto LABEL_33;
          }
          else
          {
            v9 = 0;
          }
        }
        ++v4;
        v12 += 2;
      }
      while ( v4 < 2 );
      if ( v9 < 0 )
        goto LABEL_7;
LABEL_33:
      if ( v18 )
        goto LABEL_36;
      LODWORD(v17) = 262146;
      *((_QWORD *)&v17 + 1) = asc_140868930;
      ObjectAttributes.RootDirectory = v19;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      v18 = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwOpenKey(&v18, 0x20019u, &ObjectAttributes);
      v9 = v14;
      if ( v14 == -1073741772 )
        goto LABEL_6;
      if ( v14 >= 0 )
      {
LABEL_36:
        LODWORD(v17) = 1835034;
        *((_QWORD *)&v17 + 1) = L"Configuration";
        ObjectAttributes.RootDirectory = v18;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v15 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        v9 = v15;
        if ( v15 == -1073741772 )
          goto LABEL_6;
        if ( v15 >= 0 )
          v9 = sub_140697824(v26, a2, Handle, -1, a3, a4);
      }
    }
  }
LABEL_7:
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( v19 )
    ZwClose(v19);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
