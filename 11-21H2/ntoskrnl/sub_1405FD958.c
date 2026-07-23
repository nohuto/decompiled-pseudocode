/*
 * XREFs of sub_1405FD958 @ 0x1405FD958
 * Callers:
 *     sub_1405FBC00 @ 0x1405FBC00 (sub_1405FBC00.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405FD958(REGHANDLE RegHandle, __int64 a2, __int64 a3, _DWORD *a4)
{
  char *v4; // rdx
  char *v6; // rcx
  unsigned int v8; // r10d
  _DWORD *v9; // r8
  int v10; // r9d
  __int64 *v11; // rax
  __int64 *v12; // r9
  __int64 v13; // rax
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  void *v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  int *v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  int *v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  char v26; // [rsp+A8h] [rbp-60h] BYREF
  char v27; // [rsp+C4h] [rbp-44h] BYREF

  v17 = 2;
  UserData.Ptr = (ULONGLONG)&v15;
  v4 = &v26;
  v16 = 6839;
  v20 = &unk_140C0D8B0;
  v15 = 11;
  v22 = &v16;
  LODWORD(v18) = 0;
  v24 = &v17;
  v6 = &v27;
  *(_QWORD *)&UserData.Size = 4LL;
  v21 = 16LL;
  v8 = 0;
  v23 = 4LL;
  v9 = a4;
  v25 = 4LL;
  do
  {
    v10 = *v9;
    v11 = (__int64 *)(v9 + 2);
    *(_QWORD *)v4 = v9;
    *(_QWORD *)(v6 - 20) = 4LL;
    if ( v10 != 1 )
      v11 = &v18;
    *(_QWORD *)(v6 - 12) = v11;
    *(_QWORD *)(v6 - 4) = 4LL;
    if ( v10 == 2 )
      v12 = *(__int64 **)&a4[4 * v8 + 2];
    else
      v12 = qword_140439C80;
    v13 = -1LL;
    do
      ++v13;
    while ( *((_WORD *)v12 + v13) );
    *(_QWORD *)(v6 + 4) = v12;
    *((_DWORD *)v6 + 3) = 2 * v13 + 2;
    ++v8;
    *((_DWORD *)v6 + 4) = 0;
    v9 += 4;
    v6 += 48;
    v4 += 48;
  }
  while ( v8 < 2 );
  return EtwWriteEx(RegHandle, &stru_1400384C8, 0LL, 0, 0LL, 0LL, (v4 - (char *)&UserData) >> 4, &UserData);
}
