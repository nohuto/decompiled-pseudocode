/*
 * XREFs of RtlpXfgTlLogFailure @ 0x1801208BC
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A6B0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x180008D00 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     _tlgCreate1Sz_char @ 0x18007C488 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007C6EC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlpXfgGetPdbSignature @ 0x180120730 (RtlpXfgGetPdbSignature.c)
 */

char __fastcall RtlpXfgTlLogFailure(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  BOOL v5; // ebx
  char v7; // r12
  char v8; // r15
  int v9; // r13d
  unsigned __int64 v10; // rsi
  unsigned int *v12; // rdi
  char result; // al
  __int64 v14; // rcx
  bool v15; // zf
  int PdbSignature; // eax
  char *v17; // rbx
  unsigned __int16 *v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  const ULONG *v23; // rdx
  const ULONG *v24; // r11
  unsigned __int16 *v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  const ULONG *v30; // rdx
  const ULONG *v31; // r11
  unsigned __int16 *v32; // rax
  unsigned int v33; // ecx
  unsigned __int64 v34; // rax
  int v35; // eax
  int v36; // eax
  char v37; // r10
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int16 *v40; // rax
  int v41; // ecx
  __int64 v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // eax
  const ULONG *v45; // rdx
  const ULONG *v46; // r11
  unsigned __int16 *v47; // rax
  int v48; // ecx
  unsigned __int64 v49; // rax
  int v50; // eax
  int v51; // eax
  char v52; // r10
  __int64 v53; // r8
  __int64 v54; // r9
  bool v55; // [rsp+38h] [rbp-D0h]
  int v56; // [rsp+3Ch] [rbp-CCh] BYREF
  int v57; // [rsp+40h] [rbp-C8h] BYREF
  int v58; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h] BYREF
  const ULONG *v60; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v61; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v62; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-98h] BYREF
  BOOL v65; // [rsp+78h] [rbp-90h]
  int v66; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v67; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v68; // [rsp+84h] [rbp-84h] BYREF
  const ULONG *v69; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-78h]
  __int64 v71; // [rsp+98h] [rbp-70h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v73; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v74; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v75; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-40h] BYREF
  const ULONG *v78; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v79; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v80; // [rsp+E0h] [rbp-28h]
  __int128 v81; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v82; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v83; // [rsp+100h] [rbp-8h] BYREF
  __int128 v84; // [rsp+108h] [rbp+0h] BYREF
  __int128 v85; // [rsp+118h] [rbp+10h] BYREF
  __int128 v86; // [rsp+128h] [rbp+20h] BYREF
  _EVENT_DATA_DESCRIPTOR v87; // [rsp+138h] [rbp+30h] BYREF
  PVOID *v88; // [rsp+158h] [rbp+50h]
  __int64 v89; // [rsp+160h] [rbp+58h]
  int *v90; // [rsp+168h] [rbp+60h]
  __int64 v91; // [rsp+170h] [rbp+68h]
  __int64 v92; // [rsp+178h] [rbp+70h]
  int v93; // [rsp+180h] [rbp+78h] BYREF
  int v94; // [rsp+184h] [rbp+7Ch]
  __int64 *v95; // [rsp+188h] [rbp+80h]
  __int64 v96; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v97; // [rsp+198h] [rbp+90h]
  __int64 v98; // [rsp+1A0h] [rbp+98h]
  PVOID *v99; // [rsp+1A8h] [rbp+A0h]
  __int64 v100; // [rsp+1B0h] [rbp+A8h]
  __int64 *v101; // [rsp+1B8h] [rbp+B0h]
  __int64 v102; // [rsp+1C0h] [rbp+B8h]
  _BYTE v103[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  const ULONG **v104; // [rsp+1D8h] [rbp+D0h]
  __int64 v105; // [rsp+1E0h] [rbp+D8h]
  __int128 *v106; // [rsp+1E8h] [rbp+E0h]
  __int64 v107; // [rsp+1F0h] [rbp+E8h]
  int *v108; // [rsp+1F8h] [rbp+F0h]
  __int64 v109; // [rsp+200h] [rbp+F8h]
  __int64 v110; // [rsp+208h] [rbp+100h]
  int v111; // [rsp+210h] [rbp+108h] BYREF
  int v112; // [rsp+214h] [rbp+10Ch]
  unsigned __int64 *v113; // [rsp+218h] [rbp+110h]
  __int64 v114; // [rsp+220h] [rbp+118h]
  unsigned __int64 *v115; // [rsp+228h] [rbp+120h]
  __int64 v116; // [rsp+230h] [rbp+128h]
  unsigned __int64 *v117; // [rsp+238h] [rbp+130h]
  __int64 v118; // [rsp+240h] [rbp+138h]
  __int64 *v119; // [rsp+248h] [rbp+140h]
  __int64 v120; // [rsp+250h] [rbp+148h]
  _BYTE v121[16]; // [rsp+258h] [rbp+150h] BYREF
  const ULONG **v122; // [rsp+268h] [rbp+160h]
  __int64 v123; // [rsp+270h] [rbp+168h]
  __int128 *v124; // [rsp+278h] [rbp+170h]
  __int64 v125; // [rsp+280h] [rbp+178h]
  __int64 *v126; // [rsp+288h] [rbp+180h]
  __int64 v127; // [rsp+290h] [rbp+188h]
  __int64 *v128; // [rsp+298h] [rbp+190h]
  __int64 v129; // [rsp+2A0h] [rbp+198h] BYREF
  unsigned __int64 *v130; // [rsp+2A8h] [rbp+1A0h]
  __int64 v131; // [rsp+2B0h] [rbp+1A8h]
  PVOID *v132; // [rsp+2B8h] [rbp+1B0h]
  __int64 v133; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int64 *v134; // [rsp+2C8h] [rbp+1C0h]
  __int64 v135; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 *v136; // [rsp+2D8h] [rbp+1D0h]
  __int64 v137; // [rsp+2E0h] [rbp+1D8h]
  char v138[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  PVOID *p_BaseAddress; // [rsp+2F8h] [rbp+1F0h]
  __int64 v140; // [rsp+300h] [rbp+1F8h]
  __int128 *v141; // [rsp+308h] [rbp+200h]
  __int64 v142; // [rsp+310h] [rbp+208h]
  unsigned __int64 *v143; // [rsp+318h] [rbp+210h]
  __int64 v144; // [rsp+320h] [rbp+218h]
  __int64 *v145; // [rsp+328h] [rbp+220h]
  __int64 v146; // [rsp+330h] [rbp+228h]
  __int64 *v147; // [rsp+338h] [rbp+230h]
  __int64 v148; // [rsp+340h] [rbp+238h]

  v79 = a3;
  v61 = a2;
  v70 = a4;
  v7 = 0;
  LOBYTE(v5) = 0;
  v55 = 0;
  v8 = 0;
  v56 = 0;
  v9 = 0;
  v57 = 0;
  v66 = 0;
  v80 = 0LL;
  v10 = 0LL;
  BaseAddress = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v60 = 0LL;
  v69 = 0LL;
  v78 = 0LL;
  v65 = v5;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v81 = 0LL;
  LdrpFindLoadedDllByAddress(a2, (unsigned __int64 *)&BaseAddress, 0LL);
  LdrpFindLoadedDllByAddress(a3, (unsigned __int64 *)&v62, 0LL);
  v12 = (unsigned int *)BaseAddress;
  result = 1;
  if ( a1 == 5 )
  {
    v80 = v70;
    LdrpFindLoadedDllByAddress(v70, &v63, 0LL);
    v10 = v63;
    if ( !v63 || (v14 = *(_QWORD *)(v63 + 48), v14 == *((_QWORD *)v12 + 6)) )
    {
      result = 1;
    }
    else
    {
      v8 = 1;
      v15 = (unsigned int)RtlpXfgGetPdbSignature(v14, *(unsigned int *)(v63 + 64), &v86, &v66, &v78) == 0;
      result = 1;
      v65 = v15;
    }
  }
  if ( v12 )
  {
    PdbSignature = RtlpXfgGetPdbSignature(*((_QWORD *)v12 + 6), v12[16], &v84, &v56, &v60);
    v9 = v56;
    v15 = PdbSignature == 0;
    result = 1;
    if ( v15 )
      v7 = 1;
  }
  v17 = (char *)v62;
  if ( v62 )
  {
    v15 = (unsigned int)RtlpXfgGetPdbSignature(*((_QWORD *)v62 + 6), *((unsigned int *)v62 + 16), &v85, &v57, &v69) == 0;
    result = 1;
    v55 = v15;
  }
  if ( v8 == 1 )
  {
    if ( (unsigned int)dword_18017E390 > 5 )
    {
      result = tlgKeywordOn((__int64)&dword_18017E390, 0x400000000000LL);
      if ( result )
      {
        v56 = a1;
        v88 = (PVOID *)&v56;
        v18 = (unsigned __int16 *)(v12 + 22);
        v89 = 4LL;
        if ( !v12 )
          v18 = (unsigned __int16 *)&v81;
        v19 = *v18;
        v92 = *((_QWORD *)v18 + 1);
        v90 = &v93;
        v91 = 2LL;
        v93 = v19;
        v94 = 0;
        if ( v12 )
          v20 = *((_QWORD *)v12 + 6);
        else
          v20 = 0LL;
        v82 = v20;
        v95 = &v82;
        v96 = 8LL;
        if ( v12 )
          v21 = v12[16];
        else
          v21 = 0;
        v67 = v21;
        v97 = (unsigned __int64 *)&v67;
        v98 = 4LL;
        if ( v12 )
          v22 = v12[32];
        else
          v22 = 0;
        v68 = v22;
        v100 = 4LL;
        v99 = (PVOID *)&v68;
        v83 = v61;
        v23 = (const ULONG *)"unknown";
        if ( v7 )
          v23 = v60;
        v101 = (__int64 *)&v83;
        v102 = 8LL;
        tlgCreate1Sz_char((__int64)v103, v23);
        v105 = 4LL;
        v107 = 16LL;
        v58 = v7 != 0 ? v9 : 0;
        v104 = (const ULONG **)&v58;
        v106 = &v84;
        v25 = (unsigned __int16 *)(v17 + 88);
        if ( !v17 )
          v25 = (unsigned __int16 *)&v81;
        v26 = *v25;
        v110 = *((_QWORD *)v25 + 1);
        v108 = &v111;
        v109 = 2LL;
        v111 = v26;
        v112 = 0;
        if ( v17 )
          v27 = *((_QWORD *)v17 + 6);
        else
          v27 = 0LL;
        v71 = v27;
        v113 = (unsigned __int64 *)&v71;
        v114 = 8LL;
        if ( v17 )
          v28 = *((_DWORD *)v17 + 16);
        else
          v28 = 0;
        LODWORD(v59) = v28;
        v115 = (unsigned __int64 *)&v59;
        v116 = 4LL;
        if ( v17 )
          v29 = *((_DWORD *)v17 + 32);
        else
          v29 = 0;
        LODWORD(v61) = v29;
        v118 = 4LL;
        v117 = &v61;
        v30 = v24;
        if ( v55 )
          v30 = v69;
        v72 = v79;
        v119 = &v72;
        v120 = 8LL;
        tlgCreate1Sz_char((__int64)v121, v30);
        v123 = 4LL;
        v125 = 16LL;
        LODWORD(v60) = v55 ? v57 : 0;
        v122 = &v60;
        v124 = &v85;
        v32 = (unsigned __int16 *)(v10 + 88);
        if ( !v10 )
          v32 = (unsigned __int16 *)&v81;
        v33 = *v32;
        v128 = (__int64 *)*((_QWORD *)v32 + 1);
        v126 = &v129;
        v127 = 2LL;
        v129 = v33;
        if ( v10 )
          v34 = *(_QWORD *)(v10 + 48);
        else
          v34 = 0LL;
        v73 = v34;
        v130 = &v73;
        v131 = 8LL;
        if ( v10 )
          v35 = *(_DWORD *)(v10 + 64);
        else
          v35 = 0;
        LODWORD(v62) = v35;
        v132 = &v62;
        v133 = 4LL;
        if ( v10 )
          v36 = *(_DWORD *)(v10 + 128);
        else
          v36 = 0;
        LODWORD(v63) = v36;
        v135 = 4LL;
        if ( v65 )
          v31 = v78;
        v134 = &v63;
        v74 = v80;
        v136 = &v74;
        v137 = 8LL;
        tlgCreate1Sz_char((__int64)v138, v31);
        v140 = 4LL;
        v142 = 16LL;
        v144 = 8LL;
        LODWORD(BaseAddress) = v37 != 0 ? v66 : 0;
        p_BaseAddress = &BaseAddress;
        v141 = &v86;
        v75 = v70;
        v143 = &v75;
        v76 = a5;
        v145 = &v76;
        v147 = &v77;
        v146 = 8LL;
        v77 = 0x1000000LL;
        v148 = 8LL;
        result = tlgWriteTransfer_EtwEventWriteTransfer(
                   (__int64)&dword_18017E390,
                   byte_18014B12E,
                   v38,
                   v39,
                   0x21u,
                   &v87);
      }
    }
  }
  else if ( (unsigned int)dword_18017E390 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_18017E390, 0x400000000000LL);
    if ( result )
    {
      LODWORD(BaseAddress) = a1;
      v88 = &BaseAddress;
      v40 = (unsigned __int16 *)(v12 + 22);
      v89 = 4LL;
      if ( !v12 )
        v40 = (unsigned __int16 *)&v81;
      v41 = *v40;
      v92 = *((_QWORD *)v40 + 1);
      v90 = &v93;
      v91 = 2LL;
      v93 = v41;
      v94 = 0;
      if ( v12 )
        v42 = *((_QWORD *)v12 + 6);
      else
        v42 = 0LL;
      v77 = v42;
      v95 = &v77;
      v96 = 8LL;
      if ( v12 )
        v43 = v12[16];
      else
        v43 = 0;
      LODWORD(v63) = v43;
      v97 = &v63;
      v98 = 4LL;
      if ( v12 )
        v44 = v12[32];
      else
        v44 = 0;
      LODWORD(v62) = v44;
      v100 = 4LL;
      v99 = &v62;
      v76 = v61;
      v45 = (const ULONG *)"unknown";
      if ( v7 )
        v45 = v60;
      v101 = &v76;
      v102 = 8LL;
      tlgCreate1Sz_char((__int64)v103, v45);
      v105 = 4LL;
      v107 = 16LL;
      LODWORD(v60) = v7 != 0 ? v9 : 0;
      v104 = &v60;
      v106 = &v84;
      v47 = (unsigned __int16 *)(v17 + 88);
      if ( !v17 )
        v47 = (unsigned __int16 *)&v81;
      v48 = *v47;
      v110 = *((_QWORD *)v47 + 1);
      v108 = &v111;
      v109 = 2LL;
      v111 = v48;
      v112 = 0;
      if ( v17 )
        v49 = *((_QWORD *)v17 + 6);
      else
        v49 = 0LL;
      v75 = v49;
      v113 = &v75;
      v114 = 8LL;
      if ( v17 )
        v50 = *((_DWORD *)v17 + 16);
      else
        v50 = 0;
      LODWORD(v61) = v50;
      v115 = &v61;
      v116 = 4LL;
      if ( v17 )
        v51 = *((_DWORD *)v17 + 32);
      else
        v51 = 0;
      LODWORD(v59) = v51;
      v118 = 4LL;
      if ( v55 )
        v46 = v69;
      v117 = (unsigned __int64 *)&v59;
      v74 = v79;
      v119 = (__int64 *)&v74;
      v120 = 8LL;
      tlgCreate1Sz_char((__int64)v121, v46);
      v123 = 4LL;
      v125 = 16LL;
      v127 = 8LL;
      v58 = v52 != 0 ? v57 : 0;
      v122 = (const ULONG **)&v58;
      v124 = &v85;
      v73 = v70;
      v126 = (__int64 *)&v73;
      v72 = a5;
      v128 = &v72;
      v130 = (unsigned __int64 *)&v71;
      v129 = 8LL;
      v71 = 0x1000000LL;
      v131 = 8LL;
      result = tlgWriteTransfer_EtwEventWriteTransfer(
                 (__int64)&dword_18017E390,
                 (unsigned __int8 *)dword_18014AFB8,
                 v53,
                 v54,
                 0x18u,
                 &v87);
    }
  }
  if ( v10 )
    result = LdrpDereferenceModule((char *)v10);
  if ( v12 )
    result = LdrpDereferenceModule((char *)v12);
  if ( v17 )
    return LdrpDereferenceModule(v17);
  return result;
}
