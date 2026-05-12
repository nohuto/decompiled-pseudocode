/*
 * XREFs of StorpTelemetryMiniportEventWStr @ 0x1C0018B30
 * Callers:
 *     StorEtwMiniportEvent @ 0x1C0019528 (StorEtwMiniportEvent.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1C0001008 (_tlgWriteEx_EtwWriteEx.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019338 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x1C0019CF8 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

char __fastcall StorpTelemetryMiniportEventWStr(
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
  __int64 Unit; // rax
  unsigned int v15; // r15d
  _QWORD *v16; // rsi
  _OWORD *v17; // r14
  _WORD *v18; // rdx
  __int64 v19; // r8
  char v20; // si
  char v21; // r14
  char v22; // di
  char v23; // r9
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r10
  int v31; // ecx
  __int64 v32; // r10
  __int64 *v33; // r11
  __int64 v34; // r10
  __int64 v35; // r10
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // r10
  unsigned int v39; // ecx
  __int64 v40; // r10
  __int64 *v41; // r11
  __int64 v42; // r10
  __int64 v43; // r10
  int v44; // r8d
  __int64 v45; // r8
  __int64 v46; // r9
  int v48; // [rsp+28h] [rbp-E0h]
  int v49; // [rsp+30h] [rbp-D8h]
  ULONG v50; // [rsp+38h] [rbp-D0h]
  char v51; // [rsp+48h] [rbp-C0h] BYREF
  char v52; // [rsp+49h] [rbp-BFh] BYREF
  char v53; // [rsp+4Ah] [rbp-BEh] BYREF
  char v54; // [rsp+4Bh] [rbp-BDh] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-BCh] BYREF
  int v56; // [rsp+50h] [rbp-B8h] BYREF
  int v57; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v58; // [rsp+58h] [rbp-B0h]
  __int64 v59; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+70h] [rbp-98h] BYREF
  __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  __int64 v63; // [rsp+80h] [rbp-88h] BYREF
  __int64 v64; // [rsp+88h] [rbp-80h] BYREF
  __int64 v65; // [rsp+90h] [rbp-78h] BYREF
  __int64 v66; // [rsp+98h] [rbp-70h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v69[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v70; // [rsp+D8h] [rbp-30h]
  __int64 v71; // [rsp+E0h] [rbp-28h]
  char *v72; // [rsp+E8h] [rbp-20h]
  __int64 v73; // [rsp+F0h] [rbp-18h]
  _BYTE v74[16]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int *v75; // [rsp+108h] [rbp+0h]
  __int64 v76; // [rsp+110h] [rbp+8h]
  int *v77; // [rsp+118h] [rbp+10h]
  __int64 v78; // [rsp+120h] [rbp+18h]
  __int64 v79; // [rsp+128h] [rbp+20h]
  __int64 v80; // [rsp+130h] [rbp+28h]
  unsigned int *v81; // [rsp+138h] [rbp+30h]
  __int64 v82; // [rsp+140h] [rbp+38h]
  _BYTE v83[16]; // [rsp+148h] [rbp+40h] BYREF
  char *v84; // [rsp+158h] [rbp+50h] BYREF
  __int64 v85; // [rsp+160h] [rbp+58h]
  char *v86; // [rsp+168h] [rbp+60h]
  __int64 v87; // [rsp+170h] [rbp+68h]
  char *v88; // [rsp+178h] [rbp+70h] BYREF
  __int64 v89; // [rsp+180h] [rbp+78h]
  __int64 *v90; // [rsp+188h] [rbp+80h]
  __int64 v91; // [rsp+190h] [rbp+88h]
  _BYTE v92[16]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v93[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v94[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v95; // [rsp+1C8h] [rbp+C0h]
  __int64 v96; // [rsp+1D0h] [rbp+C8h]
  _BYTE v97[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v98; // [rsp+1E8h] [rbp+E0h]
  __int64 v99; // [rsp+1F0h] [rbp+E8h]
  _BYTE v100[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v101; // [rsp+208h] [rbp+100h]
  __int64 v102; // [rsp+210h] [rbp+108h]
  _BYTE v103[16]; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v104; // [rsp+228h] [rbp+120h]
  __int64 v105; // [rsp+230h] [rbp+128h]
  _BYTE v106[16]; // [rsp+238h] [rbp+130h] BYREF
  __int64 *v107; // [rsp+248h] [rbp+140h]
  __int64 v108; // [rsp+250h] [rbp+148h]
  _BYTE v109[16]; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v110; // [rsp+268h] [rbp+160h]
  __int64 v111; // [rsp+270h] [rbp+168h]
  _BYTE v112[16]; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v113; // [rsp+288h] [rbp+180h]
  __int64 v114; // [rsp+290h] [rbp+188h]
  _BYTE v115[16]; // [rsp+298h] [rbp+190h] BYREF
  __int64 *v116; // [rsp+2A8h] [rbp+1A0h]
  __int64 v117; // [rsp+2B0h] [rbp+1A8h]
  _BYTE v118[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 *v119; // [rsp+2C8h] [rbp+1C0h]
  __int64 v120; // [rsp+2D0h] [rbp+1C8h]
  _OWORD v121[40]; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int128 v122; // [rsp+558h] [rbp+450h] BYREF
  char v123; // [rsp+568h] [rbp+460h]
  _QWORD v124[18]; // [rsp+578h] [rbp+470h] BYREF

  LODWORD(v58) = a1;
  memset(v121, 0, sizeof(v121));
  memset(v124, 0, 0x82uLL);
  v55 = 0;
  v11 = -1LL;
  v123 = 0;
  v12 = -1LL;
  v122 = 0LL;
  v68 = 0LL;
  do
    ++v12;
  while ( a2[v12] );
  if ( (_DWORD)v12 )
  {
    v13 = 64;
    if ( (unsigned int)v12 < 0x40 )
      v13 = v12;
    memmove(v124, a2, 2LL * v13);
    LOWORD(Unit) = aNull_0[4];
  }
  else
  {
    LOWORD(Unit) = aNull_0[4];
    LOWORD(v124[1]) = aNull_0[4];
    v124[0] = *(_QWORD *)L"NULL";
  }
  v15 = 0;
  if ( a6 )
  {
    v16 = a8;
    v17 = v121;
    do
    {
      v18 = *(_WORD **)((char *)v16 + a7 - (_QWORD)a8);
      if ( !v18 )
        goto LABEL_26;
      v12 = -1LL;
      do
        ++v12;
      while ( v18[v12] );
      if ( (_DWORD)v12 )
      {
        v19 = 32LL;
        if ( (unsigned int)v12 < 0x20 )
          v19 = (unsigned int)v12;
        memmove(&v121[5 * v15], v18, 2 * v19);
        *((_QWORD *)v17 + 9) = *v16;
        LOWORD(Unit) = aNull_0[4];
      }
      else
      {
LABEL_26:
        *(_QWORD *)v17 = *(_QWORD *)L"NULL";
        *((_WORD *)v17 + 4) = Unit;
      }
      ++v15;
      ++v16;
      v17 += 5;
    }
    while ( v15 < a6 );
  }
  if ( a4
    && *(_WORD *)a4 == 1
    && *(_DWORD *)(a4 + 4) >= 4u
    && (v20 = *(_BYTE *)(a4 + 8),
        v21 = *(_BYTE *)(a4 + 9),
        v22 = *(_BYTE *)(a4 + 10),
        BYTE2(v55) = v22,
        LOBYTE(v55) = v20,
        BYTE1(v55) = v21,
        (Unit = RaidAdapterFindUnit(a3, v55)) != 0) )
  {
    Unit = *(_QWORD *)(Unit + 152);
    if ( Unit )
      v122 = *(_OWORD *)(Unit + 90);
    if ( a5 )
    {
      if ( (unsigned int)dword_1C0079058 > 5 )
      {
        LOBYTE(Unit) = tlgKeywordOn(v12, 0x400000000000LL);
        if ( (_BYTE)Unit )
        {
          v29 = *(_QWORD *)(a3 + 4592);
          v70 = &v67;
          v67 = 0x1000000LL;
          v72 = &v51;
          v71 = 8LL;
          v51 = 1;
          v73 = 1LL;
          tlgCreate1Sz_wchar_t(v74, v29);
          v31 = *(_DWORD *)(v30 + 3296);
          v75 = (unsigned int *)&v57;
          v56 = *(_DWORD *)(a3 + 56);
          v77 = &v56;
          v79 = a3 + 4936;
          v55 = v58;
          v57 = v31;
          v81 = &v55;
          v76 = 4LL;
          v78 = 4LL;
          v80 = 16LL;
          v82 = 4LL;
          tlgCreate1Sz_wchar_t(v83, v124);
          v54 = v20;
          v85 = 1LL;
          v84 = &v54;
          v53 = v21;
          v86 = &v53;
          v87 = 1LL;
          v88 = &v52;
          v52 = v22;
          v89 = 1LL;
          v90 = v33;
          v91 = 16LL;
          tlgCreate1Sz_char(v92, v32 + 160);
          tlgCreate1Sz_char(v93, v34 + 169);
          tlgCreate1Sz_char(v94, v35 + 186);
          do
            ++v11;
          while ( *((_BYTE *)&v122 + v11) );
          v96 = (unsigned int)(v36 + v11);
          v95 = (__int64 *)&v122;
          tlgCreate1Sz_wchar_t(v97, v121);
          v66 = *((_QWORD *)&v121[4] + 1);
          v98 = &v66;
          v99 = 8LL;
          tlgCreate1Sz_wchar_t(v100, &v121[5]);
          v65 = *((_QWORD *)&v121[9] + 1);
          v101 = &v65;
          v102 = 8LL;
          tlgCreate1Sz_wchar_t(v103, &v121[10]);
          v64 = *((_QWORD *)&v121[14] + 1);
          v104 = &v64;
          v105 = 8LL;
          tlgCreate1Sz_wchar_t(v106, &v121[15]);
          v63 = *((_QWORD *)&v121[19] + 1);
          v107 = &v63;
          v108 = 8LL;
          tlgCreate1Sz_wchar_t(v109, &v121[20]);
          v62 = *((_QWORD *)&v121[24] + 1);
          v110 = &v62;
          v111 = 8LL;
          tlgCreate1Sz_wchar_t(v112, &v121[25]);
          v61 = *((_QWORD *)&v121[29] + 1);
          v113 = &v61;
          v114 = 8LL;
          tlgCreate1Sz_wchar_t(v115, &v121[30]);
          v60 = *((_QWORD *)&v121[34] + 1);
          v116 = &v60;
          v117 = 8LL;
          tlgCreate1Sz_wchar_t(v118, &v121[35]);
          v120 = 8LL;
          v119 = &v59;
          v28 = (unsigned __int8 *)&unk_1C006DA8B;
          v50 = 34;
          goto LABEL_24;
        }
      }
    }
    else if ( (unsigned int)dword_1C0079058 > 5 )
    {
      LOBYTE(Unit) = tlgKeywordOn(v12, 0x400000000000LL);
      if ( (_BYTE)Unit )
      {
        v37 = *(_QWORD *)(a3 + 4592);
        v70 = &v59;
        v59 = 0x1000000LL;
        v72 = &v52;
        v71 = 8LL;
        v52 = 1;
        v73 = 1LL;
        tlgCreate1Sz_wchar_t(v74, v37);
        v39 = *(_DWORD *)(v38 + 3296);
        v75 = &v55;
        v56 = *(_DWORD *)(a3 + 56);
        v77 = &v56;
        v79 = a3 + 4936;
        v57 = v58;
        v55 = v39;
        v81 = (unsigned int *)&v57;
        v76 = 4LL;
        v78 = 4LL;
        v80 = 16LL;
        v82 = 4LL;
        tlgCreate1Sz_wchar_t(v83, v124);
        v53 = v20;
        v85 = 1LL;
        v84 = &v53;
        v54 = v21;
        v86 = &v54;
        v87 = 1LL;
        v88 = &v51;
        v51 = v22;
        v89 = 1LL;
        v90 = v41;
        v91 = 16LL;
        tlgCreate1Sz_char(v92, v40 + 160);
        tlgCreate1Sz_char(v93, v42 + 169);
        tlgCreate1Sz_char(v94, v43 + 186);
        do
          ++v11;
        while ( *((_BYTE *)&v122 + v11) );
        v96 = (unsigned int)(v44 + v11);
        v95 = (__int64 *)&v122;
        tlgCreate1Sz_wchar_t(v97, v121);
        v60 = *((_QWORD *)&v121[4] + 1);
        v98 = &v60;
        v99 = 8LL;
        tlgCreate1Sz_wchar_t(v100, &v121[5]);
        v61 = *((_QWORD *)&v121[9] + 1);
        v101 = &v61;
        v102 = 8LL;
        tlgCreate1Sz_wchar_t(v103, &v121[10]);
        v62 = *((_QWORD *)&v121[14] + 1);
        v104 = &v62;
        v105 = 8LL;
        tlgCreate1Sz_wchar_t(v106, &v121[15]);
        v63 = *((_QWORD *)&v121[19] + 1);
        v107 = &v63;
        v108 = 8LL;
        tlgCreate1Sz_wchar_t(v109, &v121[20]);
        v64 = *((_QWORD *)&v121[24] + 1);
        v110 = &v64;
        v111 = 8LL;
        tlgCreate1Sz_wchar_t(v112, &v121[25]);
        v65 = *((_QWORD *)&v121[29] + 1);
        v113 = &v65;
        v114 = 8LL;
        tlgCreate1Sz_wchar_t(v115, &v121[30]);
        v66 = *((_QWORD *)&v121[34] + 1);
        v116 = &v66;
        v117 = 8LL;
        tlgCreate1Sz_wchar_t(v118, &v121[35]);
        v119 = &v67;
        v67 = *((_QWORD *)&v121[39] + 1);
        v120 = 8LL;
        LOBYTE(Unit) = tlgWriteEx_EtwWriteEx(
                         *((__int64 *)&v121[39] + 1),
                         byte_1C006F7A1,
                         v45,
                         v46,
                         v48,
                         v49,
                         0x22u,
                         v69);
      }
    }
  }
  else if ( (unsigned int)dword_1C0079058 > 5 )
  {
    LOBYTE(Unit) = tlgKeywordOn(v12, 0x400000000000LL);
    if ( (_BYTE)Unit )
    {
      v24 = *(_QWORD *)(a3 + 4592);
      v70 = &v67;
      v67 = 0x1000000LL;
      v72 = &v51;
      v71 = 8LL;
      v51 = v23;
      v73 = 1LL;
      tlgCreate1Sz_wchar_t(v74, v24);
      v25 = *(_DWORD *)(a3 + 4148);
      v75 = (unsigned int *)&v57;
      v56 = *(_DWORD *)(a3 + 56);
      v77 = &v56;
      v79 = a3 + 4936;
      v55 = v58;
      v57 = v25;
      v81 = &v55;
      v76 = 4LL;
      v78 = 4LL;
      v80 = 16LL;
      v82 = 4LL;
      tlgCreate1Sz_wchar_t(v83, v124);
      tlgCreate1Sz_wchar_t(&v84, v121);
      v66 = *((_QWORD *)&v121[4] + 1);
      v86 = (char *)&v66;
      v87 = 8LL;
      tlgCreate1Sz_wchar_t(&v88, &v121[5]);
      v65 = *((_QWORD *)&v121[9] + 1);
      v90 = &v65;
      v91 = 8LL;
      tlgCreate1Sz_wchar_t(v92, &v121[10]);
      v64 = *((_QWORD *)&v121[14] + 1);
      v93[0] = &v64;
      v93[1] = 8LL;
      tlgCreate1Sz_wchar_t(v94, &v121[15]);
      v63 = *((_QWORD *)&v121[19] + 1);
      v95 = &v63;
      v96 = 8LL;
      tlgCreate1Sz_wchar_t(v97, &v121[20]);
      v62 = *((_QWORD *)&v121[24] + 1);
      v98 = &v62;
      v99 = 8LL;
      tlgCreate1Sz_wchar_t(v100, &v121[25]);
      v101 = &v61;
      v61 = *((_QWORD *)&v121[29] + 1);
      v102 = 8LL;
      tlgCreate1Sz_wchar_t(v103, &v121[30]);
      v60 = *((_QWORD *)&v121[34] + 1);
      v104 = &v60;
      v105 = 8LL;
      tlgCreate1Sz_wchar_t(v106, &v121[35]);
      v108 = 8LL;
      v107 = &v59;
      v28 = (unsigned __int8 *)&dword_1C0070304;
      v50 = 26;
LABEL_24:
      v59 = *((_QWORD *)&v121[39] + 1);
      LOBYTE(Unit) = tlgWriteEx_EtwWriteEx(*((__int64 *)&v121[39] + 1), v28, v26, v27, v48, v49, v50, v69);
    }
  }
  return Unit;
}
