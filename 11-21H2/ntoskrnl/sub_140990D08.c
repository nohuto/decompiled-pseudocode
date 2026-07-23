/*
 * XREFs of sub_140990D08 @ 0x140990D08
 * Callers:
 *     sub_1403699FC @ 0x1403699FC (sub_1403699FC.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 */

__int64 __fastcall sub_140990D08(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // esi
  BOOL v5; // ebx
  REGHANDLE v6; // r14
  BOOL v8; // [rsp+38h] [rbp-59h] BYREF
  BOOL v9; // [rsp+40h] [rbp-51h] BYREF
  int v10; // [rsp+48h] [rbp-49h] BYREF
  int v11; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  int *v13; // [rsp+68h] [rbp-29h]
  int v14; // [rsp+70h] [rbp-21h]
  int v15; // [rsp+74h] [rbp-1Dh]
  int *v16; // [rsp+78h] [rbp-19h]
  int v17; // [rsp+80h] [rbp-11h]
  int v18; // [rsp+84h] [rbp-Dh]
  BOOL *v19; // [rsp+88h] [rbp-9h] BYREF
  int v20; // [rsp+90h] [rbp-1h]
  int v21; // [rsp+94h] [rbp+3h]
  int *v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A4h] [rbp+13h]
  int *v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B4h] [rbp+23h]
  int v28; // [rsp+100h] [rbp+6Fh] BYREF
  int v29; // [rsp+108h] [rbp+77h] BYREF

  v29 = a3;
  v28 = a2;
  v3 = a3;
  v4 = a2;
  v5 = a1 == 0;
  v8 = v5;
  if ( byte_140C5AE14 )
  {
    v6 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039440) )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      v13 = &v28;
      v14 = 4;
      v16 = &v29;
      v17 = 4;
      EtwWrite(v6, &stru_140039440, 0LL, 3u, &UserData);
      v3 = v29;
      v4 = v28;
      v5 = v8;
    }
  }
  v21 = 0;
  v24 = 0;
  v27 = 0;
  v19 = &v9;
  v11 = v3;
  v22 = &v10;
  v25 = &v11;
  v10 = v4;
  v9 = v5;
  v20 = 4;
  v23 = 4;
  v26 = 4;
  return sub_140811238((__int64)qword_14003C0B8, 3u, (__int64)&v19);
}
