/*
 * XREFs of sub_1409913FC @ 0x1409913FC
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 */

__int64 __fastcall sub_1409913FC(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  REGHANDLE v6; // r14
  int v8; // [rsp+38h] [rbp-49h] BYREF
  int v9; // [rsp+40h] [rbp-41h] BYREF
  int v10; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-31h] BYREF
  int *v12; // [rsp+60h] [rbp-21h]
  int v13; // [rsp+68h] [rbp-19h]
  int v14; // [rsp+6Ch] [rbp-15h]
  int *v15; // [rsp+70h] [rbp-11h]
  int v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+7Ch] [rbp-5h]
  int *v18; // [rsp+80h] [rbp-1h] BYREF
  int v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+8Ch] [rbp+Bh]
  int *v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+9Ch] [rbp+1Bh]
  int *v24; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+ACh] [rbp+2Bh]
  int v27; // [rsp+E8h] [rbp+67h] BYREF
  int v28; // [rsp+F0h] [rbp+6Fh] BYREF
  int v29; // [rsp+F8h] [rbp+77h] BYREF

  v29 = a3;
  v28 = a2;
  v27 = a1;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( byte_140C5AE14 )
  {
    v6 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140038DC0) )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v27;
      UserData.Size = 4;
      v12 = &v28;
      v13 = 4;
      v15 = &v29;
      v16 = 4;
      EtwWrite(v6, &stru_140038DC0, 0LL, 3u, &UserData);
      v3 = v29;
      v4 = v28;
      v5 = v27;
    }
  }
  v20 = 0;
  v23 = 0;
  v26 = 0;
  v18 = &v8;
  v10 = v3;
  v21 = &v9;
  v24 = &v10;
  v9 = v4;
  v8 = v5;
  v19 = 4;
  v22 = 4;
  v25 = 4;
  return sub_140811238((__int64)qword_14003C0C8, 3u, (__int64)&v18);
}
