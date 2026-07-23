/*
 * XREFs of sub_14099A514 @ 0x14099A514
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_14099A514()
{
  REGHANDLE v0; // rbx
  int v1; // ecx
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  int *v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  int *v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  int *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  int *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  int *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  int *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  int *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  int *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  int *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  char *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]

  if ( byte_140C5AE30 )
  {
    v0 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_1400386B0) )
    {
      v1 = dword_140D05044;
      UserData.Ptr = (ULONGLONG)&dword_140D06AB4;
      v2 = 0;
      v6 = &byte_140D05248;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = 4LL;
      if ( dword_140D05044 == -1 )
        v1 = dword_140D05068;
      v8 = &dword_140D050DC;
      v10 = &dword_140D05150;
      v12 = &dword_140D06AB8;
      v14 = &v2;
      v16 = &dword_140D05154;
      v18 = &dword_140D0515C;
      v20 = &dword_140D050C0;
      v22 = &v3;
      v24 = &dword_140D05254;
      v26 = &byte_140C1CF31;
      v4 = (unsigned __int8)byte_140C1CF30;
      v28 = &v4;
      v3 = v1;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 1LL;
      v29 = 4LL;
      EtwWrite(v0, &stru_1400386B0, 0LL, 0xDu, &UserData);
    }
  }
}
