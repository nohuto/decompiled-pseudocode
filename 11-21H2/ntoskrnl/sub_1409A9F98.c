/*
 * XREFs of sub_1409A9F98 @ 0x1409A9F98
 * Callers:
 *     sub_1409A4DA8 @ 0x1409A4DA8 (sub_1409A4DA8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1409A9F98()
{
  int *v0; // r9
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+44h] [rbp-BCh] BYREF
  int v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+4Ch] [rbp-B4h] BYREF
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-A0h] BYREF
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
  int *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]

  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140D3B908, 1LL) )
    {
      v1 = *v0;
      v13 = 4LL;
      v12 = &v1;
      v2 = v0[1];
      v14 = &v2;
      v3 = v0[2];
      v16 = &v3;
      v4 = v0[3];
      v18 = &v4;
      v5 = v0[4];
      v20 = &v5;
      v6 = v0[5];
      v22 = &v6;
      v7 = v0[6];
      v24 = &v7;
      v8 = v0[7];
      v26 = &v8;
      v9 = v0[8];
      v28 = &v9;
      v10 = v0[9];
      v30 = &v10;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)&dword_140033E94, 0LL, 0LL, 0xCu, &v11);
    }
  }
}
