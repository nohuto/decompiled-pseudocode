/*
 * XREFs of sub_1C007DD78 @ 0x1C007DD78
 * Callers:
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C007D2D8 @ 0x1C007D2D8 (sub_1C007D2D8.c)
 */

__int64 __fastcall sub_1C007DD78(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  char *v4; // r15
  int v7; // esi
  bool v8; // zf
  char v10; // [rsp+20h] [rbp-E0h] BYREF
  char v11; // [rsp+21h] [rbp-DFh] BYREF
  unsigned int v12[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-D0h]
  int v14; // [rsp+38h] [rbp-C8h]
  int v15; // [rsp+3Ch] [rbp-C4h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+4Ch] [rbp-B4h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+58h] [rbp-A8h]
  int v21; // [rsp+5Ch] [rbp-A4h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+6Ch] [rbp-94h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h]
  char *v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  char *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DCh] [rbp-24h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  int v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+ECh] [rbp-14h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  __int64 v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  __int64 v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]

  v15 = 0;
  v3 = (_DWORD *)(a3 + 72);
  v12[0] = 0;
  v4 = (char *)(a3 + 88);
  v12[1] = 0;
  v13 = &v16;
  v10 = 0;
  v11 = 0;
  v14 = 7;
  v34 = 7LL;
  v19 = a3 + 72;
  v22 = 393216LL;
  v18 = 8;
  v17 = 1;
  v21 = 10;
  v24 = 10;
  v23 = 3;
  v29 = 3;
  v27 = 15;
  v31 = &v10;
  v37 = &v11;
  v43 = a3 + 100;
  v49 = a3 + 104;
  v30 = 10;
  v45 = 10;
  v51 = 15;
  v52 = 10LL;
  v57 = 15;
  v55 = a3 + 112;
  v16 = 4LL;
  v20 = 4;
  v25 = a3 + 88;
  v26 = 8;
  v28 = 393217LL;
  v32 = 1;
  v33 = 8;
  v35 = 1;
  v36 = 8;
  v38 = 1;
  v39 = 8;
  v40 = 8LL;
  v41 = 1;
  v42 = 8;
  v44 = 4;
  v46 = 9LL;
  v47 = 1;
  v48 = 8;
  v50 = 8;
  v53 = 1;
  v54 = 8;
  v56 = 8;
  v7 = sub_1C007D2D8((int **)a1, a2, 0x80100000001LL, v12);
  if ( v7 >= 0 )
  {
    *(_DWORD *)(a1 + 48) = ++*v3;
    sub_1C007A4E8(v4, 8u);
    v8 = v11 == 1;
    *(_BYTE *)(a3 + 96) = v10 == 1;
    *(_BYTE *)(a3 + 97) = v8;
  }
  return (unsigned int)v7;
}
