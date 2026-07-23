/*
 * XREFs of sub_1407FE1F4 @ 0x1407FE1F4
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14038B488 @ 0x14038B488 (sub_14038B488.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1407FE1F4()
{
  int v0; // [rsp+30h] [rbp-59h] BYREF
  int v1; // [rsp+34h] [rbp-55h] BYREF
  int v2; // [rsp+38h] [rbp-51h] BYREF
  int v3; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v4; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v5[3]; // [rsp+44h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  int *v7; // [rsp+60h] [rbp-29h]
  __int64 v8; // [rsp+68h] [rbp-21h]
  __int64 *v9; // [rsp+70h] [rbp-19h]
  __int64 v10; // [rsp+78h] [rbp-11h]
  int *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  int *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  int *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  int *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  _DWORD *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  v4 = 0;
  v5[0] = 0;
  v2 = 0;
  v3 = 0;
  v1 = 0;
  v0 = 0;
  if ( byte_140C5AE14 )
  {
    if ( EtwEventEnabled(RegHandle, &stru_14000EFF8) )
    {
      sub_14038B488(&v0, &v1, &v2, &v3, (__int64)&v4, v5);
      UserData.Ptr = (ULONGLONG)&v0;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = &v1;
      v8 = 4LL;
      v9 = &qword_140C22EA8;
      v10 = 4LL;
      v11 = &v2;
      v13 = &v3;
      v15 = &dword_140C22EF0;
      v17 = &v4;
      v19 = v5;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      EtwWrite(RegHandle, &stru_14000EFF8, 0LL, 8u, &UserData);
    }
  }
}
