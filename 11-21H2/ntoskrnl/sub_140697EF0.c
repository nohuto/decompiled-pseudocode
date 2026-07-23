/*
 * XREFs of sub_140697EF0 @ 0x140697EF0
 * Callers:
 *     sub_140697824 @ 0x140697824 (sub_140697824.c)
 *     sub_14094DD74 @ 0x14094DD74 (sub_14094DD74.c)
 * Callees:
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406997B8 @ 0x1406997B8 (sub_1406997B8.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_140A22BF8 @ 0x140A22BF8 (sub_140A22BF8.c)
 */

__int64 __fastcall sub_140697EF0(__int64 a1, __int64 a2, void *a3, int a4, char a5, __int64 a6, __int64 a7)
{
  int *v7; // rbx
  unsigned int v10; // edi
  unsigned int v11; // esi
  int v12; // eax
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  WCHAR *v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE v27; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  void *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  WCHAR SourceString[40]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = &dword_140A3A53C;
  v33 = a6;
  v31 = a7;
  v30 = a3;
  v10 = 0;
  v32 = a1;
  v11 = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v27 = 0LL;
  v25 = 0;
  v26 = 0;
  while ( 1 )
  {
    if ( (a4 & *(v7 - 1)) == 0 )
      goto LABEL_4;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v7 - 3));
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v30;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v12 == -1073741772 )
      goto LABEL_4;
    if ( v12 < 0 )
      break;
    v14 = v7[1];
    if ( v14 )
    {
      v12 = sub_14077F2EC(qword_140D00AC0, *(_QWORD *)(a2 + 8), v14, 0, 983103, a5, (__int64)&Handle, 0LL);
LABEL_19:
      if ( v12 == -1073741772 )
        goto LABEL_35;
      if ( v12 < 0 )
        break;
LABEL_21:
      v19 = (int)Handle;
      goto LABEL_22;
    }
    if ( !sub_1402201F8() )
      goto LABEL_13;
    if ( v15 == 4 )
    {
      v15 = 4;
LABEL_13:
      v12 = sub_1406997B8(v16, v15, v17, 983103, (__int64)&Handle);
      goto LABEL_14;
    }
    if ( v15 == 6 )
      goto LABEL_35;
    v12 = sub_140A22BF8(v16, v15, v17, v15, v21, v22, (__int64)&Handle);
LABEL_14:
    if ( v12 < 0 )
      goto LABEL_19;
    if ( *v7 == 7 )
    {
      v20 = *(_QWORD *)(a2 + 8);
      v25 = 78;
      v12 = sub_14077CD90(qword_140D00AC0, v20, 0, 9, (__int64)&v26, (__int64)SourceString, (__int64)&v25, 0);
      if ( v12 < 0 )
        goto LABEL_19;
      if ( v26 != 1 )
      {
LABEL_35:
        ZwClose(KeyHandle);
        KeyHandle = 0LL;
        goto LABEL_4;
      }
      SourceString[38] = 0;
      v18 = SourceString;
    }
    else
    {
      v18 = *(WCHAR **)(v7 + 3);
      if ( !v18 )
        goto LABEL_21;
    }
    RtlInitUnicodeString(&DestinationString, v18);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    v27 = 0LL;
    ObjectAttributes.RootDirectory = Handle;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwOpenKey(&v27, 0xF003Fu, &ObjectAttributes);
    if ( v12 < 0 )
      goto LABEL_19;
    ZwClose(Handle);
    v19 = (int)v27;
    Handle = v27;
LABEL_22:
    v22 = v31;
    v21 = v19;
    v12 = sub_14042A5E0(v32, a2);
    if ( v12 == -1073741248 )
      goto LABEL_5;
    if ( v12 < 0 )
      break;
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
LABEL_4:
    ++v11;
    v7 += 8;
    if ( v11 >= 7 )
      goto LABEL_5;
  }
  v10 = v12;
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v10;
}
