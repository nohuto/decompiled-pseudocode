/*
 * XREFs of sub_1C0010F40 @ 0x1C0010F40
 * Callers:
 *     sub_1C000E38C @ 0x1C000E38C (sub_1C000E38C.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C001175C @ 0x1C001175C (sub_1C001175C.c)
 *     sub_1C001AA4C @ 0x1C001AA4C (sub_1C001AA4C.c)
 *     sub_1C001AAA8 @ 0x1C001AAA8 (sub_1C001AAA8.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C0010F40(
        int a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned int v15; // r15d
  _QWORD *v16; // rsi
  _OWORD *v17; // r14
  _WORD *v18; // rdx
  __int64 v19; // r8
  char v20; // si
  char v21; // r14
  char v22; // di
  __int64 v23; // rdx
  __int64 v24; // r10
  unsigned int v25; // ecx
  __int64 v26; // r10
  __int64 *v27; // r11
  __int64 v28; // r10
  __int64 v29; // r10
  int v30; // r8d
  int v31; // r8d
  int v32; // r9d
  char v33; // r9
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  const int *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r10
  int v41; // ecx
  __int64 v42; // r10
  __int64 *v43; // r11
  __int64 v44; // r10
  __int64 v45; // r10
  int v46; // r8d
  int v47; // [rsp+28h] [rbp-E0h]
  int v48; // [rsp+30h] [rbp-D8h]
  ULONG v49; // [rsp+38h] [rbp-D0h]
  char v50; // [rsp+48h] [rbp-C0h] BYREF
  char v51; // [rsp+49h] [rbp-BFh] BYREF
  char v52; // [rsp+4Ah] [rbp-BEh] BYREF
  char v53; // [rsp+4Bh] [rbp-BDh] BYREF
  unsigned int v54; // [rsp+4Ch] [rbp-BCh] BYREF
  int v55; // [rsp+50h] [rbp-B8h] BYREF
  int v56; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v57; // [rsp+58h] [rbp-B0h]
  __int64 v58; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-98h] BYREF
  __int64 v61; // [rsp+78h] [rbp-90h] BYREF
  __int64 v62; // [rsp+80h] [rbp-88h] BYREF
  __int64 v63; // [rsp+88h] [rbp-80h] BYREF
  __int64 v64; // [rsp+90h] [rbp-78h] BYREF
  __int64 v65; // [rsp+98h] [rbp-70h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-60h]
  __int64 v68[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v69; // [rsp+D8h] [rbp-30h]
  __int64 v70; // [rsp+E0h] [rbp-28h]
  char *v71; // [rsp+E8h] [rbp-20h]
  __int64 v72; // [rsp+F0h] [rbp-18h]
  _BYTE v73[16]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int *v74; // [rsp+108h] [rbp+0h]
  __int64 v75; // [rsp+110h] [rbp+8h]
  int *v76; // [rsp+118h] [rbp+10h]
  __int64 v77; // [rsp+120h] [rbp+18h]
  __int64 v78; // [rsp+128h] [rbp+20h]
  __int64 v79; // [rsp+130h] [rbp+28h]
  unsigned int *v80; // [rsp+138h] [rbp+30h]
  __int64 v81; // [rsp+140h] [rbp+38h]
  _BYTE v82[16]; // [rsp+148h] [rbp+40h] BYREF
  char *v83; // [rsp+158h] [rbp+50h] BYREF
  __int64 v84; // [rsp+160h] [rbp+58h]
  char *v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  char *v87; // [rsp+178h] [rbp+70h] BYREF
  __int64 v88; // [rsp+180h] [rbp+78h]
  __int64 *v89; // [rsp+188h] [rbp+80h]
  __int64 v90; // [rsp+190h] [rbp+88h]
  _BYTE v91[16]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v92[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v93[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v94; // [rsp+1C8h] [rbp+C0h]
  __int64 v95; // [rsp+1D0h] [rbp+C8h]
  _BYTE v96[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v97; // [rsp+1E8h] [rbp+E0h]
  __int64 v98; // [rsp+1F0h] [rbp+E8h]
  _BYTE v99[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v100; // [rsp+208h] [rbp+100h]
  __int64 v101; // [rsp+210h] [rbp+108h]
  _BYTE v102[16]; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v103; // [rsp+228h] [rbp+120h]
  __int64 v104; // [rsp+230h] [rbp+128h]
  _BYTE v105[16]; // [rsp+238h] [rbp+130h] BYREF
  __int64 *v106; // [rsp+248h] [rbp+140h]
  __int64 v107; // [rsp+250h] [rbp+148h]
  _BYTE v108[16]; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v109; // [rsp+268h] [rbp+160h]
  __int64 v110; // [rsp+270h] [rbp+168h]
  _BYTE v111[16]; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v112; // [rsp+288h] [rbp+180h]
  __int64 v113; // [rsp+290h] [rbp+188h]
  _BYTE v114[16]; // [rsp+298h] [rbp+190h] BYREF
  __int64 *v115; // [rsp+2A8h] [rbp+1A0h]
  __int64 v116; // [rsp+2B0h] [rbp+1A8h]
  _BYTE v117[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 *v118; // [rsp+2C8h] [rbp+1C0h]
  __int64 v119; // [rsp+2D0h] [rbp+1C8h]
  _OWORD Dst[4]; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int64 v121; // [rsp+320h] [rbp+218h]
  _BYTE v122[72]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v123; // [rsp+370h] [rbp+268h]
  _BYTE v124[72]; // [rsp+378h] [rbp+270h] BYREF
  __int64 v125; // [rsp+3C0h] [rbp+2B8h]
  _BYTE v126[72]; // [rsp+3C8h] [rbp+2C0h] BYREF
  __int64 v127; // [rsp+410h] [rbp+308h]
  _BYTE v128[72]; // [rsp+418h] [rbp+310h] BYREF
  __int64 v129; // [rsp+460h] [rbp+358h]
  _BYTE v130[72]; // [rsp+468h] [rbp+360h] BYREF
  __int64 v131; // [rsp+4B0h] [rbp+3A8h]
  _BYTE v132[72]; // [rsp+4B8h] [rbp+3B0h] BYREF
  __int64 v133; // [rsp+500h] [rbp+3F8h]
  _BYTE v134[72]; // [rsp+508h] [rbp+400h] BYREF
  int v135[2]; // [rsp+550h] [rbp+448h]
  __int128 v136; // [rsp+558h] [rbp+450h] BYREF
  char v137; // [rsp+568h] [rbp+460h]
  __int64 v138; // [rsp+578h] [rbp+470h] BYREF
  wchar_t v139; // [rsp+580h] [rbp+478h]

  LODWORD(v57) = a1;
  memset_0(Dst, 0, 0x280uLL);
  memset_0(&v138, 0, 0x82uLL);
  v54 = 0;
  v11 = -1LL;
  v137 = 0;
  v12 = -1LL;
  v136 = 0LL;
  v67 = 0LL;
  do
    ++v12;
  while ( a2[v12] );
  if ( (_DWORD)v12 )
  {
    v13 = 64;
    if ( (unsigned int)v12 < 0x40 )
      v13 = v12;
    memmove(&v138, a2, 2LL * v13);
    result = aNull[4];
  }
  else
  {
    result = aNull[4];
    v139 = aNull[4];
    v138 = *(_QWORD *)L"NULL";
  }
  v15 = 0;
  if ( a6 )
  {
    v16 = a8;
    v17 = Dst;
    do
    {
      v18 = *(_WORD **)((char *)v16 + a7 - (_QWORD)a8);
      if ( !v18 )
        goto LABEL_34;
      v12 = -1LL;
      do
        ++v12;
      while ( v18[v12] );
      if ( (_DWORD)v12 )
      {
        v19 = 32LL;
        if ( (unsigned int)v12 < 0x20 )
          v19 = (unsigned int)v12;
        memmove(&Dst[5 * v15], v18, 2 * v19);
        *((_QWORD *)v17 + 9) = *v16;
        result = aNull[4];
      }
      else
      {
LABEL_34:
        *(_QWORD *)v17 = *(_QWORD *)L"NULL";
        *((_WORD *)v17 + 4) = result;
      }
      ++v15;
      ++v16;
      v17 += 5;
    }
    while ( v15 < a6 );
  }
  if ( !a4
    || *(_WORD *)a4 != 1
    || *(_DWORD *)(a4 + 4) < 4u
    || (v20 = *(_BYTE *)(a4 + 8),
        v21 = *(_BYTE *)(a4 + 9),
        v22 = *(_BYTE *)(a4 + 10),
        BYTE2(v54) = v22,
        LOBYTE(v54) = v20,
        BYTE1(v54) = v21,
        (result = sub_1C00081BC(a3, v54)) == 0) )
  {
    if ( (unsigned int)dword_1C00930C8 <= 5 )
      return result;
    result = sub_1C001ABEC(v12, 0x400000000000LL);
    if ( !(_BYTE)result )
      return result;
    v34 = *(_QWORD *)(a3 + 4656);
    v69 = &v66;
    v66 = 0x1000000LL;
    v71 = &v50;
    v70 = 8LL;
    v50 = v33;
    v72 = 1LL;
    sub_1C001AA4C(v73, v34);
    v35 = *(_DWORD *)(a3 + 4212);
    v74 = (unsigned int *)&v56;
    v55 = *(_DWORD *)(a3 + 56);
    v76 = &v55;
    v78 = a3 + 5000;
    v54 = v57;
    v56 = v35;
    v80 = &v54;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 16LL;
    v81 = 4LL;
    sub_1C001AA4C(v82, &v138);
    sub_1C001AA4C(&v83, Dst);
    v65 = v121;
    v85 = (char *)&v65;
    v86 = 8LL;
    sub_1C001AA4C(&v87, v122);
    v64 = v123;
    v89 = &v64;
    v90 = 8LL;
    sub_1C001AA4C(v91, v124);
    v63 = v125;
    v92[0] = &v63;
    v92[1] = 8LL;
    sub_1C001AA4C(v93, v126);
    v62 = v127;
    v94 = &v62;
    v95 = 8LL;
    sub_1C001AA4C(v96, v128);
    v61 = v129;
    v97 = &v61;
    v98 = 8LL;
    sub_1C001AA4C(v99, v130);
    v100 = &v60;
    v60 = v131;
    v101 = 8LL;
    sub_1C001AA4C(v102, v132);
    v59 = v133;
    v103 = &v59;
    v104 = 8LL;
    sub_1C001AA4C(v105, v134);
    v107 = 8LL;
    v106 = &v58;
    v38 = &dword_1C0088534;
    v49 = 26;
LABEL_32:
    v58 = *(_QWORD *)v135;
    return sub_1C001175C(v135[0], (int)v38, v36, v37, v47, v48, v49, (__int64)v68);
  }
  result = *(_QWORD *)(result + 152);
  if ( result )
    v136 = *(_OWORD *)(result + 90);
  if ( a5 )
  {
    if ( (unsigned int)dword_1C00930C8 <= 5 )
      return result;
    result = sub_1C001ABEC(v12, 0x400000000000LL);
    if ( !(_BYTE)result )
      return result;
    v39 = *(_QWORD *)(a3 + 4656);
    v69 = &v66;
    v66 = 0x1000000LL;
    v71 = &v50;
    v70 = 8LL;
    v50 = 1;
    v72 = 1LL;
    sub_1C001AA4C(v73, v39);
    v41 = *(_DWORD *)(v40 + 3344);
    v74 = (unsigned int *)&v56;
    v55 = *(_DWORD *)(a3 + 56);
    v76 = &v55;
    v78 = a3 + 5000;
    v54 = v57;
    v56 = v41;
    v80 = &v54;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 16LL;
    v81 = 4LL;
    sub_1C001AA4C(v82, &v138);
    v53 = v20;
    v84 = 1LL;
    v83 = &v53;
    v52 = v21;
    v85 = &v52;
    v86 = 1LL;
    v87 = &v51;
    v51 = v22;
    v88 = 1LL;
    v89 = v43;
    v90 = 16LL;
    sub_1C001AAA8(v91, v42 + 160);
    sub_1C001AAA8(v92, v44 + 169);
    sub_1C001AAA8(v93, v45 + 186);
    do
      ++v11;
    while ( *((_BYTE *)&v136 + v11) );
    v95 = (unsigned int)(v46 + v11);
    v94 = (__int64 *)&v136;
    sub_1C001AA4C(v96, Dst);
    v65 = v121;
    v97 = &v65;
    v98 = 8LL;
    sub_1C001AA4C(v99, v122);
    v64 = v123;
    v100 = &v64;
    v101 = 8LL;
    sub_1C001AA4C(v102, v124);
    v63 = v125;
    v103 = &v63;
    v104 = 8LL;
    sub_1C001AA4C(v105, v126);
    v62 = v127;
    v106 = &v62;
    v107 = 8LL;
    sub_1C001AA4C(v108, v128);
    v61 = v129;
    v109 = &v61;
    v110 = 8LL;
    sub_1C001AA4C(v111, v130);
    v60 = v131;
    v112 = &v60;
    v113 = 8LL;
    sub_1C001AA4C(v114, v132);
    v59 = v133;
    v115 = &v59;
    v116 = 8LL;
    sub_1C001AA4C(v117, v134);
    v119 = 8LL;
    v118 = &v58;
    v38 = (const int *)&unk_1C0085CBB;
    v49 = 34;
    goto LABEL_32;
  }
  if ( (unsigned int)dword_1C00930C8 > 5 )
  {
    result = sub_1C001ABEC(v12, 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v23 = *(_QWORD *)(a3 + 4656);
      v69 = &v58;
      v58 = 0x1000000LL;
      v71 = &v51;
      v70 = 8LL;
      v51 = 1;
      v72 = 1LL;
      sub_1C001AA4C(v73, v23);
      v25 = *(_DWORD *)(v24 + 3344);
      v74 = &v54;
      v55 = *(_DWORD *)(a3 + 56);
      v76 = &v55;
      v78 = a3 + 5000;
      v56 = v57;
      v54 = v25;
      v80 = (unsigned int *)&v56;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 16LL;
      v81 = 4LL;
      sub_1C001AA4C(v82, &v138);
      v52 = v20;
      v84 = 1LL;
      v83 = &v52;
      v53 = v21;
      v85 = &v53;
      v86 = 1LL;
      v87 = &v50;
      v50 = v22;
      v88 = 1LL;
      v89 = v27;
      v90 = 16LL;
      sub_1C001AAA8(v91, v26 + 160);
      sub_1C001AAA8(v92, v28 + 169);
      sub_1C001AAA8(v93, v29 + 186);
      do
        ++v11;
      while ( *((_BYTE *)&v136 + v11) );
      v95 = (unsigned int)(v30 + v11);
      v94 = (__int64 *)&v136;
      sub_1C001AA4C(v96, Dst);
      v59 = v121;
      v97 = &v59;
      v98 = 8LL;
      sub_1C001AA4C(v99, v122);
      v60 = v123;
      v100 = &v60;
      v101 = 8LL;
      sub_1C001AA4C(v102, v124);
      v61 = v125;
      v103 = &v61;
      v104 = 8LL;
      sub_1C001AA4C(v105, v126);
      v62 = v127;
      v106 = &v62;
      v107 = 8LL;
      sub_1C001AA4C(v108, v128);
      v63 = v129;
      v109 = &v63;
      v110 = 8LL;
      sub_1C001AA4C(v111, v130);
      v64 = v131;
      v112 = &v64;
      v113 = 8LL;
      sub_1C001AA4C(v114, v132);
      v65 = v133;
      v115 = &v65;
      v116 = 8LL;
      sub_1C001AA4C(v117, v134);
      v118 = &v66;
      v66 = *(_QWORD *)v135;
      v119 = 8LL;
      return sub_1C001175C(v135[0], (int)&unk_1C00879D1, v31, v32, v47, v48, 0x22u, (__int64)v68);
    }
  }
  return result;
}
