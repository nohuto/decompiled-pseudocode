/*
 * XREFs of sub_1800DAEE0 @ 0x1800DAEE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180017748 @ 0x180017748 (sub_180017748.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800216F8 @ 0x1800216F8 (sub_1800216F8.c)
 *     sub_1800262D0 @ 0x1800262D0 (sub_1800262D0.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180028CE0 @ 0x180028CE0 (sub_180028CE0.c)
 *     sub_180029354 @ 0x180029354 (sub_180029354.c)
 *     sub_180029A18 @ 0x180029A18 (sub_180029A18.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18002FE8C @ 0x18002FE8C (sub_18002FE8C.c)
 *     sub_180030074 @ 0x180030074 (sub_180030074.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 *     sub_180048A80 @ 0x180048A80 (sub_180048A80.c)
 *     sub_18006120C @ 0x18006120C (sub_18006120C.c)
 *     sub_1800616B8 @ 0x1800616B8 (sub_1800616B8.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 *     sub_1800D7738 @ 0x1800D7738 (sub_1800D7738.c)
 *     sub_1800D7788 @ 0x1800D7788 (sub_1800D7788.c)
 *     sub_1800D8C84 @ 0x1800D8C84 (sub_1800D8C84.c)
 *     sub_1800D8E90 @ 0x1800D8E90 (sub_1800D8E90.c)
 *     sub_1800DA7BC @ 0x1800DA7BC (sub_1800DA7BC.c)
 *     sub_1800DAA00 @ 0x1800DAA00 (sub_1800DAA00.c)
 *     sub_1800DCF0C @ 0x1800DCF0C (sub_1800DCF0C.c)
 *     sub_1800F4194 @ 0x1800F4194 (sub_1800F4194.c)
 *     sub_1800F592C @ 0x1800F592C (sub_1800F592C.c)
 *     sub_1800F5988 @ 0x1800F5988 (sub_1800F5988.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall sub_1800DAEE0(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, void *, _QWORD *); // rbx
  void (__fastcall *v3)(_QWORD, void *, _QWORD *); // r14
  __int64 v4; // rcx
  _QWORD *v5; // r15
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, _QWORD *); // rdi
  __int64 *v8; // r14
  __int64 v9; // rcx
  void (__fastcall ***v10)(_QWORD, void *, unsigned __int64 *); // rbx
  void (__fastcall *v11)(_QWORD, void *, unsigned __int64 *); // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  void (__fastcall *v14)(unsigned __int64, void (__fastcall ****)(_QWORD, void *, _QWORD *)); // rdi
  void (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 *v16; // rdi
  void (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v18)(_QWORD, void *, _QWORD *); // r12
  __int64 v19; // rcx
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, const IID *, __int64 *); // rbx
  _QWORD *v22; // r12
  __int64 *v23; // rax
  void (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned __int64 v25; // rcx
  int v26; // eax
  ULONG_PTR v27; // rbx
  __int64 v28; // rbx
  void (__fastcall ***v29)(_QWORD, void *, unsigned __int64 *); // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  ULONG_PTR v42; // rbx
  __int64 v43; // r8
  unsigned __int64 v44; // rcx
  __int64 *v45; // rbx
  __int64 v46; // r8
  char **v47; // r15
  unsigned __int64 v48; // rdx
  int v49; // r13d
  int v50; // ebx
  __int64 v51; // rdx
  const void **v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // r12
  char **v55; // r14
  unsigned __int64 v56; // rdx
  IDXGIAdapter **v57; // rax
  _DWORD *v58; // r12
  HRESULT Device; // r14d
  void (__fastcall ***v60)(_QWORD, _QWORD, _QWORD); // rcx
  IDXGIAdapter **v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  const void **v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // r12
  char **v67; // r14
  unsigned __int64 v68; // rdx
  char **v69; // r14
  unsigned __int64 v70; // rdx
  const char *v71; // r9
  unsigned __int64 v72; // r15
  unsigned __int64 v73; // r14
  unsigned __int64 v74; // rdi
  _QWORD *v75; // rbx
  __int64 *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r9
  _QWORD *v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // r9
  _QWORD *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // r9
  _QWORD *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // r9
  _QWORD *v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // r9
  __int64 *v91; // rax
  __int64 *v92; // rax
  _QWORD *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned __int64 v97; // [rsp+58h] [rbp-B0h] BYREF
  void (__fastcall ***v98)(_QWORD, void *, _QWORD *); // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v99; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+70h] [rbp-98h]
  __int64 v101; // [rsp+78h] [rbp-90h] BYREF
  __int64 v102; // [rsp+80h] [rbp-88h] BYREF
  __int64 v103; // [rsp+88h] [rbp-80h]
  __int128 v104; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v105[20]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v106; // [rsp+F8h] [rbp-10h]
  _QWORD v107[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v108[2]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v109[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v110[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v111[4]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v112[4]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v113[4]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v114[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v115[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+1F8h] [rbp+F0h] BYREF
  EXCEPTION_RECORD v117; // [rsp+298h] [rbp+190h] BYREF
  char *v118[3]; // [rsp+338h] [rbp+230h] BYREF
  unsigned __int64 v119; // [rsp+350h] [rbp+248h]
  void *v120[3]; // [rsp+358h] [rbp+250h] BYREF
  unsigned __int64 v121; // [rsp+370h] [rbp+268h]
  void *v122[3]; // [rsp+378h] [rbp+270h] BYREF
  unsigned __int64 v123; // [rsp+390h] [rbp+288h]
  __int128 v124; // [rsp+398h] [rbp+290h] BYREF
  __int128 v125; // [rsp+3A8h] [rbp+2A0h]
  char *v126[3]; // [rsp+3B8h] [rbp+2B0h] BYREF
  unsigned __int64 v127; // [rsp+3D0h] [rbp+2C8h]
  char *v128[3]; // [rsp+3D8h] [rbp+2D0h] BYREF
  unsigned __int64 v129; // [rsp+3F0h] [rbp+2E8h]
  char *v130[3]; // [rsp+3F8h] [rbp+2F0h] BYREF
  unsigned __int64 v131; // [rsp+410h] [rbp+308h]
  char *v132[3]; // [rsp+418h] [rbp+310h] BYREF
  unsigned __int64 v133; // [rsp+430h] [rbp+328h]
  char *v134[3]; // [rsp+438h] [rbp+330h] BYREF
  unsigned __int64 v135; // [rsp+450h] [rbp+348h]
  char *v136[3]; // [rsp+458h] [rbp+350h] BYREF
  unsigned __int64 v137; // [rsp+470h] [rbp+368h]
  char *v138[3]; // [rsp+478h] [rbp+370h] BYREF
  unsigned __int64 v139; // [rsp+490h] [rbp+388h]
  char *v140[3]; // [rsp+498h] [rbp+390h] BYREF
  unsigned __int64 v141; // [rsp+4B0h] [rbp+3A8h]
  char *v142; // [rsp+4B8h] [rbp+3B0h] BYREF
  unsigned __int64 v143; // [rsp+4D0h] [rbp+3C8h]
  _OWORD v144[20]; // [rsp+4D8h] [rbp+3D0h] BYREF
  __int128 v145; // [rsp+618h] [rbp+510h]
  _BYTE v146[720]; // [rsp+628h] [rbp+520h] BYREF
  _QWORD *v147; // [rsp+8F8h] [rbp+7F0h]
  __int64 v148; // [rsp+900h] [rbp+7F8h]
  D3D_FEATURE_LEVEL pFeatureLevels[4]; // [rsp+B58h] [rbp+A50h] BYREF
  __m128i si128; // [rsp+B68h] [rbp+A60h]
  int v151; // [rsp+B78h] [rbp+A70h]
  void *retaddr; // [rsp+BB0h] [rbp+AA8h]

  v2 = (void (__fastcall ***)(_QWORD, void *, _QWORD *))a1[37];
  if ( v2 )
  {
    ((void (__fastcall *)(_QWORD))(*v2)[1])(a1[37]);
    v3 = **v2;
    v4 = a1[532];
    if ( v4 )
    {
      a1[532] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v3(v2, &unk_180128838, a1 + 532);
  }
  if ( v2 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v2)[2])(v2);
  v5 = a1 + 532;
  v6 = a1[532];
  if ( v6 )
  {
    v97 = 0LL;
    v98 = 0LL;
    v7 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 344LL);
    v8 = a1 + 533;
    v9 = a1[533];
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v7(v6, a1 + 533);
    v10 = (void (__fastcall ***)(_QWORD, void *, unsigned __int64 *))*v5;
    v11 = **(void (__fastcall ***)(_QWORD, void *, unsigned __int64 *))*v5;
    v12 = v97;
    if ( v97 )
    {
      v97 = 0LL;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v11(v10, &unk_180128880, &v97);
    v13 = v97;
    v14 = *(void (__fastcall **)(unsigned __int64, void (__fastcall ****)(_QWORD, void *, _QWORD *)))(*(_QWORD *)v97 + 56LL);
    v15 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v98;
    if ( v98 )
    {
      v98 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
    }
    v14(v13, &v98);
    v16 = a1 + 534;
    v17 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v98;
    v18 = **v98;
    v19 = a1[534];
    if ( v19 )
    {
      *v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v18(v17, &unk_1801BB800, a1 + 534);
    v20 = *v16;
    v21 = *(void (__fastcall **)(__int64, const IID *, __int64 *))(*(_QWORD *)v20 + 48LL);
    v22 = a1 + 535;
    v23 = sub_180017748(a1 + 535);
    v21(v20, &stru_1801BB820, v23);
    v24 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v98;
    if ( v98 )
    {
      v98 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v24)[2])(v24);
    }
    v25 = v97;
    if ( v97 )
    {
      v97 = 0LL;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  else
  {
    v144[0] = 0LL;
    v145 = 0LL;
    v26 = sub_1800F592C(
            (unsigned int)v144,
            (unsigned int)(*((_DWORD *)a1 + 72) - 3) <= 1,
            *((_DWORD *)a1 + 81),
            *((_DWORD *)a1 + 82),
            *((_DWORD *)a1 + 79),
            *((_DWORD *)a1 + 80),
            *((_DWORD *)a1 + 83));
    v27 = v26;
    if ( v26 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v27;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v28 = v145;
    if ( (_QWORD)v145 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v145 + 8LL))(v145);
    v29 = (void (__fastcall ***)(_QWORD, void *, unsigned __int64 *))*v5;
    *v5 = v28;
    if ( v29 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, unsigned __int64 *)))(*v29)[2])(v29);
    v30 = *((_QWORD *)&v145 + 1);
    if ( *((_QWORD *)&v145 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v145 + 1) + 8LL))(*((_QWORD *)&v145 + 1));
    v8 = a1 + 533;
    v31 = a1[533];
    a1[533] = v30;
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    v32 = *(_QWORD *)&v144[0];
    if ( *(_QWORD *)&v144[0] )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v144[0] + 8LL))(*(_QWORD *)&v144[0]);
    v33 = a1[534];
    a1[534] = v32;
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v34 = *((_QWORD *)&v144[0] + 1);
    if ( *((_QWORD *)&v144[0] + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v144[0] + 1) + 8LL))(*((_QWORD *)&v144[0] + 1));
    v22 = a1 + 535;
    v35 = a1[535];
    a1[535] = v34;
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    sub_1800F5988(v144);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 224LL))(a1, *((unsigned int *)a1 + 94));
    sub_1800F4194(v144);
  }
  if ( sub_180010D08(a1 + 532) )
    *((_DWORD *)a1 + 1062) = 0;
  if ( (a1[48] & 0xFFFFFFFD) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v22 + 64LL))(*v22, a1[49], 0LL);
  *((_DWORD *)a1 + 1072) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 296LL))(*v5);
  *((_DWORD *)a1 + 60) = sub_1800DAA00((__int64)a1);
  sub_180011AC0(*v8, "DefaultImmediateContext");
  sub_1800262D0((__int64)a1, &v104);
  if ( *((_QWORD *)&v104 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v104 + 1) + 8LL));
  v106 = v104;
  sub_180018704((__int64)&v102);
  v109[2] = 0LL;
  v109[3] = 15LL;
  LOBYTE(v109[0]) = 0;
  v36 = 7LL;
  sub_180012190(v109, "Default", 7uLL);
  v37 = v102;
  sub_18002BC44(v102, v109);
  v38 = *v8;
  v100 = v38;
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
  v39 = *(_QWORD *)(v37 + 144);
  if ( v39 != v38 )
  {
    if ( v38 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
      v39 = *(_QWORD *)(v37 + 144);
    }
    *(_QWORD *)(v37 + 144) = v38;
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  v40 = v103;
  if ( v103 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v103 + 8));
    v40 = v103;
    v37 = v102;
  }
  v107[0] = a1[34];
  a1[34] = v37;
  v107[1] = a1[35];
  a1[35] = v40;
  sub_180010910((__int64)v107);
  v41 = sub_1800DA7BC((__int64)a1, &v97);
  v42 = (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v41 + 64LL))(*v41, a1 + 537);
  v44 = v97;
  if ( v97 )
  {
    v97 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  if ( (v42 & 0x80000000) != 0LL )
  {
    memset(&v117, 0, sizeof(v117));
    v117.ExceptionCode = -532265403;
    v117.ExceptionAddress = retaddr;
    v117.NumberParameters = 1;
    v117.ExceptionInformation[0] = v42;
    RaiseFailFastException(&v117, 0LL, 0);
  }
  v45 = sub_18001FB6C((__int64 *)&v142, (_WORD *)a1 + 2148, v43);
  v47 = (char **)(a1 + 575);
  if ( a1 + 575 != v45 )
  {
    v48 = a1[578];
    if ( v48 >= 8 )
      sub_180010884(*v47, 2 * v48 + 2);
    a1[577] = 0LL;
    a1[578] = 7LL;
    *(_WORD *)v47 = 0;
    *(_OWORD *)v47 = *(_OWORD *)v45;
    *(_OWORD *)(a1 + 577) = *((_OWORD *)v45 + 1);
    v45[2] = 0LL;
    v45[3] = 7LL;
    *(_WORD *)v45 = 0;
  }
  if ( v143 >= 8 )
    sub_180010884(v142, 2 * v143 + 2);
  sub_18003372C(a1 + 10, a1 + 575, v46);
  v99 = a1[571] >> 20;
  v97 = a1[572] >> 20;
  v100 = a1[573] >> 20;
  sub_1800DCF0C(a1);
  v49 = *((_DWORD *)a1 + 1072) / 4096;
  v50 = *((_DWORD *)a1 + 1072) / 256 % 16;
  sub_1800D8C84((__int64 *)v138, v50);
  sub_1800D8C84((__int64 *)v120, v49);
  v52 = (const void **)sub_1800D7738((__int64)v126, v51, v120);
  v53 = (_QWORD *)sub_180030074((__int64)v136, v52, "_");
  v54 = sub_18002FE8C((__int64)v134, v53, v138);
  v55 = (char **)(a1 + 18);
  if ( a1 + 18 != (_QWORD *)v54 )
  {
    v56 = a1[21];
    if ( v56 >= 8 )
      sub_180010884(*v55, 2 * v56 + 2);
    a1[20] = 0LL;
    a1[21] = 7LL;
    *(_WORD *)v55 = 0;
    *(_OWORD *)v55 = *(_OWORD *)v54;
    *((_OWORD *)a1 + 10) = *(_OWORD *)(v54 + 16);
    *(_QWORD *)(v54 + 16) = 0LL;
    *(_QWORD *)(v54 + 24) = 7LL;
    *(_WORD *)v54 = 0;
  }
  if ( v135 >= 8 )
    sub_180010884(v134[0], 2 * v135 + 2);
  v134[2] = 0LL;
  v135 = 7LL;
  LOWORD(v134[0]) = 0;
  if ( v137 >= 8 )
    sub_180010884(v136[0], 2 * v137 + 2);
  v136[2] = 0LL;
  v137 = 7LL;
  LOWORD(v136[0]) = 0;
  if ( v127 >= 8 )
    sub_180010884(v126[0], 2 * v127 + 2);
  v126[2] = 0LL;
  v127 = 7LL;
  LOWORD(v126[0]) = 0;
  if ( v121 >= 8 )
    sub_180010884((char *)v120[0], 2 * v121 + 2);
  v120[2] = 0LL;
  v121 = 7LL;
  LOWORD(v120[0]) = 0;
  if ( v139 >= 8 )
    sub_180010884(v138[0], 2 * v139 + 2);
  *(__m128i *)pFeatureLevels = _mm_load_si128((const __m128i *)&xmmword_1801BD890);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD880);
  v151 = 37120;
  v57 = (IDXGIAdapter **)sub_1800DA7BC((__int64)a1, &v98);
  v58 = (_DWORD *)a1 + 1073;
  Device = D3D11CreateDevice(
             *v57,
             D3D_DRIVER_TYPE_UNKNOWN,
             0LL,
             0,
             pFeatureLevels,
             9u,
             7u,
             0LL,
             (D3D_FEATURE_LEVEL *)a1 + 1073,
             0LL);
  v60 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v98;
  if ( v98 )
  {
    v98 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v60)[2])(v60);
  }
  if ( Device == -2147024809 )
  {
    v61 = (IDXGIAdapter **)sub_1800DA7BC((__int64)a1, &v101);
    Device = D3D11CreateDevice(
               *v61,
               D3D_DRIVER_TYPE_UNKNOWN,
               0LL,
               0,
               &pFeatureLevels[3],
               6u,
               7u,
               0LL,
               (D3D_FEATURE_LEVEL *)a1 + 1073,
               0LL);
    v62 = v101;
    if ( v101 )
    {
      v101 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
  }
  if ( Device >= 0 )
  {
    v49 = *v58 / 4096;
    v50 = *v58 / 256 % 16;
    sub_1800D8C84((__int64 *)v140, v50);
    sub_1800D8C84((__int64 *)v122, v49);
    v64 = (const void **)sub_1800D7738((__int64)v132, v63, v122);
    v65 = (_QWORD *)sub_180030074((__int64)v130, v64, "_");
    v66 = sub_18002FE8C((__int64)v128, v65, v140);
    v67 = (char **)(a1 + 22);
    if ( a1 + 22 != (_QWORD *)v66 )
    {
      v68 = a1[25];
      if ( v68 >= 8 )
        sub_180010884(*v67, 2 * v68 + 2);
      a1[24] = 0LL;
      a1[25] = 7LL;
      *(_WORD *)v67 = 0;
      *(_OWORD *)v67 = *(_OWORD *)v66;
      *((_OWORD *)a1 + 12) = *(_OWORD *)(v66 + 16);
      *(_QWORD *)(v66 + 16) = 0LL;
      *(_QWORD *)(v66 + 24) = 7LL;
      *(_WORD *)v66 = 0;
    }
    if ( v129 >= 8 )
      sub_180010884(v128[0], 2 * v129 + 2);
    v128[2] = 0LL;
    v129 = 7LL;
    LOWORD(v128[0]) = 0;
    if ( v131 >= 8 )
      sub_180010884(v130[0], 2 * v131 + 2);
    v130[2] = 0LL;
    v131 = 7LL;
    LOWORD(v130[0]) = 0;
    if ( v133 >= 8 )
      sub_180010884(v132[0], 2 * v133 + 2);
    v132[2] = 0LL;
    v133 = 7LL;
    LOWORD(v132[0]) = 0;
    if ( v123 >= 8 )
      sub_180010884((char *)v122[0], 2 * v123 + 2);
    v122[2] = 0LL;
    v123 = 7LL;
    LOWORD(v122[0]) = 0;
    if ( v141 >= 8 )
      sub_180010884(v140[0], 2 * v141 + 2);
  }
  sub_1800D8C84((__int64 *)&v124, *((_DWORD *)a1 + 1158));
  v69 = (char **)(a1 + 26);
  if ( a1 + 26 == (_QWORD *)&v124 )
  {
    v36 = *((_QWORD *)&v125 + 1);
  }
  else
  {
    v70 = a1[29];
    if ( v70 >= 8 )
      sub_180010884(*v69, 2 * v70 + 2);
    *(_OWORD *)v69 = v124;
    *((_OWORD *)a1 + 14) = v125;
    LOWORD(v124) = 0;
  }
  if ( v36 >= 8 )
    sub_180010884((char *)v124, 2 * v36 + 2);
  sub_1800306A0((__int64 *)v118, a1 + 575);
  v71 = (const char *)v118;
  if ( v119 >= 0x10 )
    v71 = v118[0];
  v72 = v100;
  v73 = v97;
  v74 = v99;
  sub_18001F2B4(
    &stru_1801EA4C8,
    3,
    "Adapter used %s -- memory %IuMB / %IuMB / %IuMB -- feature level %d_%d -- profile level %d",
    v71,
    v99,
    v97,
    v100,
    v49,
    v50,
    *((_DWORD *)a1 + 1158));
  if ( (unsigned __int8)sub_1800216F8((_QWORD *)a1[74]) )
  {
    v75 = (_QWORD *)a1[74];
    v76 = sub_18001875C(v115, (__int64)v118);
    sub_1800D7788(v75, v77, 491, v78, (__int64)"MachineSpecs_AdapterName", v76);
    v79 = (_QWORD *)a1[74];
    sub_1800D8E90(v111, v74);
    sub_1800D7788(v79, v80, 492, v81, (__int64)"MachineSpecs_AdapterVideoMemory", v111);
    v82 = (_QWORD *)a1[74];
    sub_1800D8E90(v112, v73);
    sub_1800D7788(v82, v83, 493, v84, (__int64)"MachineSpecs_AdapterSystemMemory", v112);
    v85 = (_QWORD *)a1[74];
    sub_1800D8E90(v113, v72);
    sub_1800D7788(v85, v86, 494, v87, (__int64)"MachineSpecs_AdapterSharedMemory", v113);
    v88 = (_QWORD *)a1[74];
    sub_180029A18(v114, *((_DWORD *)a1 + 1158));
    sub_1800D7788(v88, v89, 495, v90, (__int64)"MachineSpecs_AdapterProfileLevel", v114);
  }
  sub_18006120C((__int64)v146);
  v91 = (__int64 *)sub_18002850C((__int64)a1);
  v92 = sub_180048A80(v91, v110);
  v93 = (_QWORD *)*v92;
  v94 = v92[1];
  *v92 = 0LL;
  v92[1] = 0LL;
  v108[0] = v147;
  v147 = v93;
  v108[1] = v148;
  v148 = v94;
  sub_180010910((__int64)v108);
  sub_180010910((__int64)v110);
  memset(v105, 0, 0x48uLL);
  *(_QWORD *)&v105[1] = 2LL;
  v105[3] = 0;
  v105[4] = 0;
  v105[5] = 0;
  LOBYTE(v105[6]) = 0;
  memset(&v105[7], 0, 32);
  v105[15] = 65793;
  LOBYTE(v105[16]) = 1;
  v105[17] = 3;
  sub_180096660(v147, (__int64)v105, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)a1[34] + 40LL))(a1[34], v146);
  if ( (int)sub_1800DAA00((__int64)a1) < 40960 )
    sub_180029354(v95);
  sub_180028CE0(a1);
  sub_1800616B8((__int64)v146);
  if ( v119 >= 0x10 )
    sub_180010884(v118[0], v119 + 1);
  v118[2] = 0LL;
  v119 = 15LL;
  LOBYTE(v118[0]) = 0;
  sub_180010910((__int64)&v102);
  return sub_180010910((__int64)&v104);
}
