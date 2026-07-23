/*
 * XREFs of sub_140374708 @ 0x140374708
 * Callers:
 *     sub_1403744D8 @ 0x1403744D8 (sub_1403744D8.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     sub_1403747BC @ 0x1403747BC (sub_1403747BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140374708(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r11
  char v11; // al
  _QWORD *v12; // r9
  __int64 v13; // r10
  char v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  const CHAR *v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+80h] [rbp-80h] BYREF
  char *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  _BYTE v27[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  __int64 *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  __int64 *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  __int64 *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  const CHAR **v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]

  v16 = 0LL;
  v15 = 0;
  if ( *(_QWORD *)&qword_140C53448 )
  {
    sub_1403747BC(a1, &v15, &v16, *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)));
    if ( *v8 > 5u )
    {
      if ( sub_1402A2000((__int64)v8, 1LL) )
      {
        v11 = *(_BYTE *)(v10 + 184) & 7;
        v26 = v9;
        v14 = v11;
        v25 = &v14;
        sub_1403699D0((__int64)v27, v16);
        v28 = &v17;
        v17 = v15;
        v30 = &v19;
        v29 = 4LL;
        v32 = &v20;
        v21 = v12[2112];
        v34 = &v21;
        v22 = v12[2160];
        v36 = &v22;
        v23 = v12[2188];
        v38 = &v23;
        v40 = &v18;
        LODWORD(v16) = a5;
        v42 = &v16;
        v19 = a2;
        v31 = 8LL;
        v20 = a3;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 8LL;
        v39 = 8LL;
        v18 = a4;
        v41 = 4LL;
        v43 = 4LL;
        sub_14024A9B0(v13, (unsigned __int8 *)&byte_14002CDD7, 0LL, 1u, 0, 0, 0xCu, &v24);
      }
    }
  }
}
