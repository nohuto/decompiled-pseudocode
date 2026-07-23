/*
 * XREFs of sub_14083601C @ 0x14083601C
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

int __fastcall sub_14083601C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  _QWORD *v5; // rax
  char v6; // dl
  __int64 *v7; // r8
  __int64 *v8; // r9
  __int64 v9; // r10
  _DWORD *v10; // rcx
  int *v11; // r10
  char v12; // cl
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+70h] [rbp-90h] BYREF
  int *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  int *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  char *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  _BYTE v43[16]; // [rsp+110h] [rbp+10h] BYREF
  char *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  int *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  int *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  int *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]

  v5 = sub_140347DB0();
  v10 = (_DWORD *)v5[157];
  if ( (unsigned int)dword_140C06820 > 5 )
  {
    v17 = v10[250];
    v27 = &v17;
    v18 = v10[109];
    v29 = &v18;
    v19 = v10[108];
    v31 = &v19;
    v14 = dword_140D01460;
    v33 = &v14;
    v35 = &v15;
    v23 = *v7;
    v37 = &v23;
    v24 = *v8;
    v39 = &v24;
    v15 = v6;
    v28 = 4LL;
    v30 = 4LL;
    v25 = *a5;
    v32 = 4LL;
    v34 = 1LL;
    v36 = 1LL;
    v38 = 8LL;
    v40 = 8LL;
    v41 = &v25;
    v42 = 8LL;
    sub_1402A2094((__int64)v43, (const WCHAR *)(v9 + 172));
    v12 = *((_BYTE *)v11 + 428);
    v44 = &v16;
    v20 = *v11;
    v16 = v12;
    v46 = &v20;
    v21 = v11[21];
    v48 = &v21;
    v22 = v11[42];
    v50 = &v22;
    v52 = v11 + 17;
    v54 = v11 + 38;
    v45 = 1LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 16LL;
    v55 = 16LL;
    LODWORD(v5) = sub_14020A9C4((__int64)&dword_140C06820, (unsigned __int8 *)byte_1400360BD, 0LL, 0LL, 0x11u, &v26);
  }
  return (int)v5;
}
