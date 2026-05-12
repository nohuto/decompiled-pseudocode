/*
 * XREFs of TcglibpSetBand @ 0x1C007B8E4
 * Callers:
 *     TcglibSetBand @ 0x1C0079FC0 (TcglibSetBand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     TcglibpSetTableColumns @ 0x1C007CC8C (TcglibpSetTableColumns.c)
 */

__int64 __fastcall TcglibpSetBand(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rbx
  int v11; // r9d
  int v12; // r9d
  __int64 *v14; // r8
  int *v15; // r10
  int *v16; // r11
  __int64 *v17; // r14
  int *v18; // r15
  int *v19; // r12
  char *v20; // r13
  unsigned int v21; // r9d
  char *v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // r8
  int *v26; // rax
  __int64 v27; // r8
  __int64 v28; // [rsp+20h] [rbp-E0h] BYREF
  int v29; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE *v30; // [rsp+30h] [rbp-D0h]
  _BYTE *v31; // [rsp+38h] [rbp-C8h]
  char *v32; // [rsp+40h] [rbp-C0h]
  _BYTE *v33; // [rsp+48h] [rbp-B8h]
  _BYTE *v34; // [rsp+50h] [rbp-B0h]
  char *v35; // [rsp+58h] [rbp-A8h]
  _BYTE *v36; // [rsp+60h] [rbp-A0h]
  _BYTE *v37; // [rsp+68h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-90h]
  _BYTE *v39; // [rsp+78h] [rbp-88h]
  _BYTE *v40; // [rsp+80h] [rbp-80h]
  char *v41; // [rsp+88h] [rbp-78h]
  char *v42; // [rsp+90h] [rbp-70h]
  char *v43; // [rsp+98h] [rbp-68h]
  char *v44; // [rsp+A0h] [rbp-60h]
  char *v45; // [rsp+A8h] [rbp-58h]
  char *v46; // [rsp+B0h] [rbp-50h]
  __int128 v47; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h] BYREF
  int v50; // [rsp+D8h] [rbp-28h] BYREF
  int v51; // [rsp+DCh] [rbp-24h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-20h] BYREF
  int v53; // [rsp+E8h] [rbp-18h] BYREF
  int v54; // [rsp+ECh] [rbp-14h] BYREF
  char v55; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v56[4]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v57[4]; // [rsp+FCh] [rbp-4h] BYREF
  char v58; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v59[4]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v60[4]; // [rsp+10Ch] [rbp+Ch] BYREF
  char v61; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v62[4]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v63[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
  char v64; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v65[4]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v66[4]; // [rsp+12Ch] [rbp+2Ch] BYREF
  char v67; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v68[4]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v69[4]; // [rsp+13Ch] [rbp+3Ch] BYREF
  char v70; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v71[4]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v72[4]; // [rsp+14Ch] [rbp+4Ch] BYREF
  char v73; // [rsp+150h] [rbp+50h] BYREF
  char v74; // [rsp+158h] [rbp+58h] BYREF
  char v75; // [rsp+15Ch] [rbp+5Ch] BYREF
  char v76; // [rsp+160h] [rbp+60h] BYREF
  char v77; // [rsp+168h] [rbp+68h] BYREF
  char v78; // [rsp+16Ch] [rbp+6Ch] BYREF

  v8 = a3;
  v48 = 0LL;
  WORD2(v28) = 240;
  BYTE6(v28) = -15;
  v29 = -251461392;
  v47 = 0LL;
  v11 = a4 - 1;
  if ( !v11 )
  {
    LOBYTE(v28) = 0;
    goto LABEL_8;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    LOBYTE(v28) = 1;
LABEL_8:
    BYTE2(v28) = 0;
    goto LABEL_9;
  }
  if ( v12 != 1 )
    return 3221225485LL;
  LOBYTE(v28) = 1;
  BYTE2(v28) = 1;
LABEL_9:
  if ( a5 == 1 )
  {
    BYTE1(v28) = 0;
    goto LABEL_15;
  }
  if ( a5 == 2 )
  {
    BYTE1(v28) = 1;
LABEL_15:
    BYTE3(v28) = 0;
    goto LABEL_16;
  }
  if ( a5 != 3 )
    return 3221225485LL;
  BYTE1(v28) = 1;
  BYTE3(v28) = 1;
LABEL_16:
  memset_0(&v49, 0, 0xC0uLL);
  if ( a8 )
  {
    v52 = a8;
    v14 = (__int64 *)&v55;
    v50 = 1;
    v30 = v62;
    v15 = (int *)v56;
    v51 = 8;
    v31 = v63;
    v16 = (int *)v57;
    v53 = 32;
    v32 = &v64;
    v17 = (__int64 *)&v58;
    v54 = 16;
    v33 = v65;
    v18 = (int *)v59;
    v34 = v66;
    v19 = (int *)v60;
    LODWORD(v47) = 2;
    v35 = &v67;
    v20 = &v61;
    v49 = 2LL;
    v36 = v68;
    v21 = 5;
    v37 = v69;
    v38 = &v70;
    v39 = v71;
    v40 = v72;
    v41 = &v73;
    v42 = &v74;
    v43 = &v75;
    v44 = &v76;
    v45 = &v77;
    v22 = &v78;
  }
  else
  {
    LODWORD(v47) = 5;
    v30 = v56;
    v14 = &v49;
    v21 = 4;
    v31 = v57;
    v15 = &v50;
    v32 = &v58;
    v16 = &v51;
    v33 = v59;
    v17 = &v52;
    v34 = v60;
    v18 = &v53;
    v35 = &v61;
    v19 = &v54;
    v36 = v62;
    v20 = &v55;
    v37 = v63;
    v38 = &v64;
    v39 = v65;
    v40 = v66;
    v41 = &v67;
    v42 = v68;
    v43 = v69;
    v44 = &v70;
    v45 = v71;
    v22 = v72;
  }
  v46 = v22;
  *v15 = 1;
  *v14 = 5LL;
  *v17 = (__int64)&v28;
  v23 = v30;
  *v16 = 8;
  *v19 = 8;
  DWORD1(v47) = (a6 != 0) + 8;
  *v18 = 1;
  *v23 = 1;
  v24 = v31;
  *(_QWORD *)v20 = 6LL;
  *v24 = 8;
  *(_QWORD *)v32 = (char *)&v28 + 1;
  *(_DWORD *)v33 = 1;
  *(_DWORD *)v34 = 8;
  *(_QWORD *)v35 = 7LL;
  *(_DWORD *)v36 = 1;
  *(_DWORD *)v37 = 8;
  *(_QWORD *)v38 = (char *)&v28 + 2;
  *(_DWORD *)v39 = 1;
  *(_DWORD *)v40 = 8;
  *(_QWORD *)v41 = 8LL;
  *(_DWORD *)v42 = 1;
  *(_DWORD *)v43 = 8;
  *(_QWORD *)v44 = (char *)&v28 + 3;
  *(_DWORD *)v45 = 1;
  *(_DWORD *)v46 = 8;
  if ( a6 )
  {
    v25 = 32LL * v21;
    v26 = (int *)&v28 + 1;
    *(int *)((char *)&v51 + v25) = 8;
    *(__int64 *)((char *)&v49 + v25) = 9LL;
    *(int *)((char *)&v50 + v25) = 1;
    if ( a7 )
      v26 = &v29;
    ++v21;
    *(__int64 *)((char *)&v52 + v25) = (__int64)v26;
    *(int *)((char *)&v53 + v25) = (a7 != 0) + 3;
    *(int *)((char *)&v54 + v25) = 1;
  }
  LODWORD(v48) = v21;
  *((_QWORD *)&v47 + 1) = &v49;
  if ( (_DWORD)v8 )
    v27 = v8 + 0x80200030000LL;
  else
    v27 = 0x80200000001LL;
  return TcglibpSetTableColumns(a1, a2, v27, &v47, v28, v29);
}
