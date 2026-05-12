/*
 * XREFs of sub_1C007BE80 @ 0x1C007BE80
 * Callers:
 *     sub_1C007A280 @ 0x1C007A280 (sub_1C007A280.c)
 *     sub_1C007A300 @ 0x1C007A300 (sub_1C007A300.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007BE80(int a1, int a2, int a3, __int64 a4)
{
  int v5; // r8d
  unsigned int v6; // edi
  int v7; // ecx
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v10[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+6Ch] [rbp-94h]
  __int64 v14; // [rsp+70h] [rbp-90h] BYREF
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]
  __int64 v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+BCh] [rbp-44h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  int v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+CCh] [rbp-34h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  __int64 v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]
  __int64 v41; // [rsp+100h] [rbp+0h]
  int v42; // [rsp+108h] [rbp+8h]
  int v43; // [rsp+10Ch] [rbp+Ch]
  __int64 v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+11Ch] [rbp+1Ch]
  __int64 v47; // [rsp+120h] [rbp+20h]
  int v48; // [rsp+128h] [rbp+28h]
  int v49; // [rsp+12Ch] [rbp+2Ch]
  __int64 v50; // [rsp+130h] [rbp+30h]
  int v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+13Ch] [rbp+3Ch]
  __int64 v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  __int64 v56; // [rsp+150h] [rbp+50h]
  int v57; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+15Ch] [rbp+5Ch]
  __int64 v59; // [rsp+160h] [rbp+60h]
  int v60; // [rsp+168h] [rbp+68h]
  int v61; // [rsp+16Ch] [rbp+6Ch]
  __int64 v62; // [rsp+170h] [rbp+70h]
  int v63; // [rsp+178h] [rbp+78h]
  int v64; // [rsp+17Ch] [rbp+7Ch]
  int *v65; // [rsp+180h] [rbp+80h]
  int v66; // [rsp+188h] [rbp+88h]
  int v67; // [rsp+18Ch] [rbp+8Ch]
  __int64 v68; // [rsp+190h] [rbp+90h]
  int v69; // [rsp+198h] [rbp+98h]
  int v70; // [rsp+19Ch] [rbp+9Ch]
  __int64 v71; // [rsp+1A0h] [rbp+A0h]
  int v72; // [rsp+1A8h] [rbp+A8h]
  int v73; // [rsp+1ACh] [rbp+ACh]
  __int64 v74; // [rsp+1B0h] [rbp+B0h]
  int v75; // [rsp+1B8h] [rbp+B8h]
  int v76; // [rsp+1BCh] [rbp+BCh]
  __int64 v77; // [rsp+1C0h] [rbp+C0h]
  int v78; // [rsp+1C8h] [rbp+C8h]
  int v79; // [rsp+1CCh] [rbp+CCh]

  v13 = 0;
  v9 = 0;
  v10[0] = 0;
  v10[1] = 0;
  v14 = 0LL;
  v11 = &v14;
  *(_DWORD *)(a4 + 8) = a3;
  v23 = a4 + 12;
  v12 = 11;
  v29 = a4 + 48;
  v15 = 1;
  v35 = a4 + 56;
  v41 = a4 + 64;
  v47 = a4 + 65;
  v53 = a4 + 66;
  v59 = a4 + 67;
  v65 = &v9;
  v71 = a4 + 72;
  v16 = 8;
  v17 = a4;
  v18 = 8;
  v19 = 15;
  v20 = 2LL;
  v21 = 1;
  v22 = 8;
  v24 = 32;
  v25 = 16;
  v26 = 3LL;
  v27 = 1;
  v28 = 8;
  v30 = 8;
  v31 = 15;
  v32 = 4LL;
  v33 = 1;
  v34 = 8;
  v36 = 8;
  v37 = 15;
  v38 = 5LL;
  v39 = 1;
  v40 = 8;
  v42 = 1;
  v43 = 8;
  v44 = 6LL;
  v45 = 1;
  v46 = 8;
  v48 = 1;
  v49 = 8;
  v50 = 7LL;
  v51 = 1;
  v52 = 8;
  v54 = 1;
  v55 = 8;
  v56 = 8LL;
  v57 = 1;
  v58 = 8;
  v60 = 1;
  v61 = 8;
  v62 = 9LL;
  v63 = 1;
  v64 = 8;
  v66 = 4;
  v67 = 8;
  v68 = 20LL;
  v69 = 1;
  v70 = 8;
  v72 = 4;
  v73 = 15;
  v77 = a4 + 70;
  v74 = 21LL;
  v75 = 1;
  v76 = 8;
  v78 = 1;
  v79 = 8;
  if ( a3 )
    v5 = a3 + 196608;
  else
    v5 = 1;
  v6 = sub_1C007CF64(
         a1,
         a2,
         v5,
         22,
         (__int64)sub_1C007C8A0,
         (__int64)v10,
         0LL,
         0LL,
         (__int64)sub_1C007B860,
         (__int64)v10);
  sub_1C007A4E8((char *)a4, 8u);
  v7 = v9;
  if ( v9 )
  {
    *(_BYTE *)(a4 + 68) = 1;
    *(_BYTE *)(a4 + 69) = v7 != 1;
  }
  else
  {
    *(_WORD *)(a4 + 68) = 0;
  }
  return v6;
}
