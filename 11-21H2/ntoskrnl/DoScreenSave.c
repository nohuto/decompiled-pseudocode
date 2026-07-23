/*
 * XREFs of DoScreenSave @ 0x14094EA0C
 * Callers:
 *     sub_1409477A4 @ 0x1409477A4 (sub_1409477A4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140697824 @ 0x140697824 (sub_140697824.c)
 *     sub_1406E5528 @ 0x1406E5528 (sub_1406E5528.c)
 *     sub_1406E6424 @ 0x1406E6424 (sub_1406E6424.c)
 *     sub_1406E66F4 @ 0x1406E66F4 (sub_1406E66F4.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407448BC @ 0x1407448BC (sub_1407448BC.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_1407476FC @ 0x1407476FC (sub_1407476FC.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 */

__int64 __fastcall DoScreenSave(__int64 a1)
{
  wchar_t *Buffer; // r14
  int v3; // edi
  unsigned __int8 v4; // si
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdx
  int v9; // eax
  NTSTATUS v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24[10]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v25; // [rsp+108h] [rbp+0h] BYREF

  memset(v24, 0, 0x48uLL);
  Handle = 0LL;
  v23 = 0LL;
  KeyHandle = 0LL;
  Buffer = 0LL;
  v25 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v3 = 0;
  UnicodeString.Buffer = 0LL;
  v4 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0x100000000LL;
  if ( !dword_140D3B050 )
  {
    v5 = 0;
    goto LABEL_29;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    v5 = -1073741808;
    goto LABEL_29;
  }
  v5 = sub_1407448BC(v6, 0LL, v24);
  if ( v5 < 0 )
    goto LABEL_29;
  v7 = v24[2];
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&ObjectAttributes.Length = &stru_140010A18;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
  ObjectAttributes.RootDirectory = (HANDLE)13;
  *(_QWORD *)(&ObjectAttributes.Attributes + 1) = 0LL;
  HIDWORD(ObjectAttributes.SecurityDescriptor) = 0;
  ObjectAttributes.Attributes = 16;
  v5 = sub_140746CCC(1LL, v8, 1, v24[2], (__int64)&ObjectAttributes, 1u);
  if ( v5 < 0 )
    goto LABEL_29;
  if ( SLODWORD(ObjectAttributes.SecurityDescriptor) < 0 )
    goto LABEL_12;
  v5 = sub_1407454A8((unsigned int *)&v25, (__int64)&UnicodeString, 1);
  if ( v5 < 0 )
    goto LABEL_29;
  Buffer = UnicodeString.Buffer;
  v9 = sub_14077C924(*(__int64 *)&qword_140D00AC0, (__int64)UnicodeString.Buffer, 2, 131097, 0, (__int64)&Handle);
  v5 = v9;
  if ( v9 != -1073741772 )
  {
    if ( v9 < 0 )
      goto LABEL_29;
LABEL_12:
    if ( Handle )
    {
      ObjectAttributes.RootDirectory = Handle;
      *((_QWORD *)&v23 + 1) = L"Configuration";
      LODWORD(v23) = 1835034;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      v5 = v10;
      if ( v10 != -1073741772 )
      {
        if ( v10 < 0 )
          goto LABEL_29;
        v5 = sub_140697824(a1, (__int64)v24, KeyHandle, -1, &v16, &v17);
        if ( v5 < 0 )
          goto LABEL_29;
        v3 = v16;
        v4 = v17;
      }
    }
    goto LABEL_17;
  }
  Handle = 0LL;
LABEL_17:
  v5 = sub_1406E6424(a1, (__int64)v24, &v16, &v17);
  if ( v5 < 0 )
    goto LABEL_29;
  v11 = v16 | v3;
  if ( (((unsigned __int8)v17 | v4) & 2) == 0 && Buffer && Handle )
  {
    v5 = sub_1406E66F4((int)Buffer, (int)Handle, &v16);
    if ( v5 < 0 )
      goto LABEL_29;
    v11 |= v16;
  }
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    LODWORD(v18) = 4;
    if ( (int)sub_14077CD90(
                *(__int64 *)&qword_140D00AC0,
                v12,
                v7,
                11,
                (__int64)&v18 + 4,
                (__int64)&v16,
                (__int64)&v18,
                0) < 0
      || HIDWORD(v18) != 4
      || (v14 = v16, (_DWORD)v18 != 4) )
    {
      v14 = 0;
    }
    v16 = v11 | v14;
    sub_1406E5528(v13, (__int64)v24, 0xBu, 4, (__int64)&v16, 4);
  }
LABEL_29:
  RtlFreeUnicodeString(&UnicodeString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  sub_1407476FC((__int64)v24);
  return (unsigned int)v5;
}
