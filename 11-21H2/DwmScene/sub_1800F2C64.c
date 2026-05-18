/*
 * XREFs of sub_1800F2C64 @ 0x1800F2C64
 * Callers:
 *     sub_1800F29D0 @ 0x1800F29D0 (sub_1800F29D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180026640 @ 0x180026640 (sub_180026640.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002A08C @ 0x18002A08C (sub_18002A08C.c)
 *     sub_18002EEDC @ 0x18002EEDC (sub_18002EEDC.c)
 *     sub_180079C78 @ 0x180079C78 (sub_180079C78.c)
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     sub_1800ED91C @ 0x1800ED91C (sub_1800ED91C.c)
 *     sub_1800F27A8 @ 0x1800F27A8 (sub_1800F27A8.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall sub_1800F2C64(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v5; // r13
  double v6; // xmm0_8
  char v7; // r12
  int v8; // eax
  ULONG_PTR v9; // rbx
  char v10; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned int v15; // r15d
  __int64 (__fastcall *v16)(__int64, _QWORD, _DWORD *, __int64 *); // r14
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  ULONG_PTR v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD, _DWORD *, __int64 *); // r14
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 v25; // rcx
  int v26; // eax
  ULONG_PTR v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // eax
  ULONG_PTR v32; // rdi
  __int64 v33; // r14
  void (__fastcall *v34)(__int64, void *, _QWORD, const char *); // rdi
  unsigned int v35; // eax
  int v36; // eax
  ULONG_PTR v37; // rdi
  __int64 v38; // r14
  void (__fastcall *v39)(__int64, void *, _QWORD, const char *); // rdi
  unsigned int v40; // eax
  __int64 v41; // r15
  __int64 (__fastcall *v42)(__int64, __int64, _OWORD *, __int64); // r13
  __int64 v43; // rdi
  __int64 v44; // rcx
  int v45; // eax
  ULONG_PTR v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 (__fastcall *v49)(__int64, __int128 *, _QWORD, __int64); // r14
  __int64 v50; // rcx
  int v51; // eax
  ULONG_PTR v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // ecx
  __int64 (__fastcall *v60)(__int64, _DWORD *, _QWORD, _QWORD *); // r14
  _QWORD *v61; // rdi
  __int64 v62; // rcx
  int v63; // eax
  ULONG_PTR v64; // rdi
  __int64 (__fastcall *v65)(__int64, _QWORD, _DWORD *, __int64 *); // r14
  __int64 v66; // rdx
  __int64 *v67; // rdi
  __int64 v68; // rcx
  int v69; // eax
  ULONG_PTR v70; // rdi
  __int64 (__fastcall *v71)(__int64, _QWORD, _DWORD *, __int64 *); // r14
  __int64 v72; // rdx
  __int64 *v73; // rdi
  __int64 v74; // rcx
  int v75; // eax
  ULONG_PTR v76; // rdi
  __int64 v77; // r14
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // r8
  __int64 v81; // rdx
  signed __int32 v82; // eax
  signed __int32 v83; // ett
  __int64 v84; // rcx
  __int64 *v85; // r14
  __int64 v86; // rbx
  __int64 v87; // rdi
  __int64 v88; // r15
  __int64 v89; // rdx
  int v90; // r13d
  __int64 v91; // rcx
  __int64 v92; // rcx
  _QWORD *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rbx
  __int64 v101; // r12
  __int64 v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rcx
  _QWORD **v105; // rcx
  __int64 *v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  _QWORD *v109; // rdx
  __int64 v110; // r8
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 (__fastcall ***v113)(_QWORD, void *, __int64 *); // rcx
  char v115; // [rsp+38h] [rbp-D0h]
  char v116; // [rsp+39h] [rbp-CFh]
  __int64 v117; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v118; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v119; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v120; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD **v121; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v122; // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall ***v123)(_QWORD, void *, __int64 *); // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v124; // [rsp+80h] [rbp-88h] BYREF
  int v125; // [rsp+88h] [rbp-80h]
  __int128 v126; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v127[3]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v128; // [rsp+B4h] [rbp-54h]
  int v129; // [rsp+BCh] [rbp-4Ch]
  __int128 v130; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v131; // [rsp+D0h] [rbp-38h]
  __int64 v132; // [rsp+D8h] [rbp-30h]
  _DWORD v133[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v134; // [rsp+E8h] [rbp-20h]
  int v135; // [rsp+F0h] [rbp-18h]
  __int64 v136; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v137; // [rsp+100h] [rbp-8h] BYREF
  __int64 *v138; // [rsp+108h] [rbp+0h] BYREF
  __int64 v139; // [rsp+110h] [rbp+8h]
  __int128 v140; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v141[2]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v142; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v143[2]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v144; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v145[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v146[2]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v147[2]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v148[2]; // [rsp+198h] [rbp+90h] BYREF
  char v149[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v150[8]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v151; // [rsp+1B8h] [rbp+B0h]
  _OWORD v152[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  EXCEPTION_RECORD v153; // [rsp+1E8h] [rbp+E0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+288h] [rbp+180h] BYREF
  EXCEPTION_RECORD v155; // [rsp+328h] [rbp+220h] BYREF
  EXCEPTION_RECORD v156; // [rsp+3C8h] [rbp+2C0h] BYREF
  EXCEPTION_RECORD v157; // [rsp+468h] [rbp+360h] BYREF
  EXCEPTION_RECORD v158; // [rsp+508h] [rbp+400h] BYREF
  EXCEPTION_RECORD v159; // [rsp+5A8h] [rbp+4A0h] BYREF
  EXCEPTION_RECORD v160; // [rsp+648h] [rbp+540h] BYREF
  EXCEPTION_RECORD v161; // [rsp+6E8h] [rbp+5E0h] BYREF
  EXCEPTION_RECORD v162; // [rsp+788h] [rbp+680h] BYREF
  _DWORD v163[12]; // [rsp+828h] [rbp+720h] BYREF
  __int128 v164; // [rsp+858h] [rbp+750h] BYREF
  _BYTE v165[20]; // [rsp+868h] [rbp+760h]
  __int64 v166; // [rsp+87Ch] [rbp+774h]
  __int128 v167; // [rsp+888h] [rbp+780h] BYREF
  __int128 v168; // [rsp+898h] [rbp+790h]
  void *retaddr; // [rsp+910h] [rbp+808h]

  v124 = a2;
  v5 = (_QWORD *)a1;
  v121 = (_QWORD **)a1;
  sub_1800F27A8(a1, v147);
  sub_1800DA968(v147[0], &v117);
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a2 + 32LL))(
    *a2,
    &v123);
  v6 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  v116 = v7;
  v122 = (v7 != 0) + 1LL;
  *(_BYTE *)(*a3 + 1) = v7;
  v120 = 0LL;
  v8 = (**v123)(v123, &unk_1801BBAA0, &v120);
  v9 = v8;
  if ( v8 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180011AC0(v120, "CameraBackBuffer");
  v10 = 0;
  v115 = 0;
  v11 = *a3;
  v12 = *(_QWORD *)(*a3 + 8);
  v13 = v117;
  v14 = v120;
  if ( v12 != v120 )
  {
    if ( v120 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v120 + 8LL))(v120);
      v12 = *(_QWORD *)(v11 + 8);
    }
    *(_QWORD *)(v11 + 8) = v14;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*a3 + 8) + 80LL))(*(_QWORD *)(*a3 + 8), &v167);
    v15 = v168;
    v133[1] = (v7 != 0) + 4;
    v134 = 0LL;
    v135 = 1;
    v133[0] = v168;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v13 + 72LL);
    v17 = *a3;
    v18 = (__int64 *)(*a3 + 48);
    v19 = *v18;
    if ( *v18 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v17 = *a3;
    }
    v20 = v16(v13, *(_QWORD *)(v17 + 8), v133, v18);
    v21 = v20;
    if ( v20 < 0 )
    {
      memset(&v155, 0, sizeof(v155));
      v155.ExceptionCode = -532265403;
      v155.ExceptionAddress = retaddr;
      v155.NumberParameters = 1;
      v155.ExceptionInformation[0] = v21;
      RaiseFailFastException(&v155, 0LL, 0);
    }
    if ( v7 )
    {
      HIDWORD(v134) = 1;
      v22 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v13 + 72LL);
      v23 = *a3;
      v24 = (__int64 *)(*a3 + 96);
      v25 = *v24;
      if ( *v24 )
      {
        *v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        v23 = *a3;
      }
      v26 = v22(v13, *(_QWORD *)(v23 + 8), v133, v24);
      v27 = v26;
      if ( v26 < 0 )
      {
        memset(&v156, 0, sizeof(v156));
        v156.ExceptionCode = -532265403;
        v156.ExceptionAddress = retaddr;
        v156.NumberParameters = 1;
        v156.ExceptionInformation[0] = v27;
        RaiseFailFastException(&v156, 0LL, 0);
      }
    }
    else
    {
      v28 = *a3;
      v29 = *(_QWORD *)(*a3 + 96);
      v30 = *(_QWORD *)(*a3 + 48);
      if ( v29 != v30 )
      {
        if ( v30 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 8LL))(*(_QWORD *)(*a3 + 48));
          v29 = *(_QWORD *)(v28 + 96);
        }
        *(_QWORD *)(v28 + 96) = v30;
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    *(_QWORD *)&v130 = v15 | 0x100000000LL;
    DWORD2(v130) = LODWORD(v6);
    HIDWORD(v130) = LODWORD(v6);
    LODWORD(v131) = 3;
    v132 = 0LL;
    v152[0] = v130;
    v152[1] = v131;
    v119 = 0LL;
    v31 = (**v123)(v123, &unk_1801BCDD8, &v119);
    v32 = v31;
    if ( v31 < 0 )
    {
      memset(&v157, 0, sizeof(v157));
      v157.ExceptionCode = -532265403;
      v157.ExceptionAddress = retaddr;
      v157.NumberParameters = 1;
      v157.ExceptionInformation[0] = v32;
      RaiseFailFastException(&v157, 0LL, 0);
    }
    v33 = v119;
    if ( v119 )
    {
      v34 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v119 + 24LL);
      v35 = strnlen("DxgiBackBuffer", 0xFFuLL);
      v34(v33, &unk_180127F58, v35, "DxgiBackBuffer");
      v33 = v119;
    }
    v118 = 0LL;
    v36 = (*(__int64 (__fastcall **)(__int64, bool, __int64 *))(*(_QWORD *)v33 + 96LL))(v33, v7 != 0, &v118);
    v37 = v36;
    if ( v36 < 0 )
    {
      memset(&v153, 0, sizeof(v153));
      v153.ExceptionCode = -532265403;
      v153.ExceptionAddress = retaddr;
      v153.NumberParameters = 1;
      v153.ExceptionInformation[0] = v37;
      RaiseFailFastException(&v153, 0LL, 0);
    }
    v38 = v118;
    if ( v118 )
    {
      v39 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v118 + 24LL);
      v40 = strnlen("DxgiSurface", 0xFFuLL);
      v39(v38, &unk_180127F58, v40, "DxgiSurface");
      v38 = v118;
    }
    v41 = v5[66];
    v42 = *(__int64 (__fastcall **)(__int64, __int64, _OWORD *, __int64))(*(_QWORD *)v41 + 496LL);
    v43 = *a3;
    v44 = *(_QWORD *)(*a3 + 32);
    if ( v44 )
    {
      *(_QWORD *)(v43 + 32) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      v38 = v118;
    }
    v45 = v42(v41, v38, v152, v43 + 32);
    v46 = v45;
    if ( v45 < 0 )
    {
      memset(&v159, 0, sizeof(v159));
      v159.ExceptionCode = -532265403;
      v159.ExceptionAddress = retaddr;
      v159.NumberParameters = 1;
      v159.ExceptionInformation[0] = v46;
      RaiseFailFastException(&v159, 0LL, 0);
    }
    v5 = v121;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v121[66] + 592LL))(v121[66], *(_QWORD *)(*a3 + 32));
    *(_QWORD *)(*a3 + 40) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v124 + 24LL))(
                                         *v124,
                                         v149);
    v164 = v167;
    *(_OWORD *)v165 = v168;
    *(_QWORD *)&v165[12] = 3LL;
    v166 = 0x20000LL;
    HIDWORD(v164) = 1;
    v47 = *a3;
    v48 = *(_QWORD *)(*a3 + 16);
    if ( v48 )
    {
      *(_QWORD *)(v47 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      v47 = *a3;
    }
    v49 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v13 + 40LL);
    v50 = *(_QWORD *)(v47 + 16);
    if ( v50 )
    {
      *(_QWORD *)(v47 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v51 = v49(v13, &v164, 0LL, v47 + 16);
    v52 = v51;
    if ( v51 < 0 )
    {
      memset(&v160, 0, sizeof(v160));
      v160.ExceptionCode = -532265403;
      v160.ExceptionAddress = retaddr;
      v160.NumberParameters = 1;
      v160.ExceptionInformation[0] = v52;
      RaiseFailFastException(&v160, 0LL, 0);
    }
    sub_180011AC0(*(_QWORD *)(*a3 + 16), "BackBufferStaging");
    v53 = *a3;
    v54 = *(_QWORD *)(*a3 + 56);
    if ( v54 )
    {
      *(_QWORD *)(v53 + 56) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      v53 = *a3;
    }
    v55 = *(_QWORD *)(v53 + 104);
    if ( v55 )
    {
      *(_QWORD *)(v53 + 104) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v10 = 1;
    v56 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    v57 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
  }
  if ( sub_1800E2DE0((_QWORD *)(*a3 + 56)) || sub_1800E2DE0((_QWORD *)(v58 + 104)) )
  {
    v59 = *(_DWORD *)(v58 + 44);
    v163[0] = *(_DWORD *)(v58 + 40);
    v163[1] = v59;
    v163[2] = 1;
    v163[3] = (v7 != 0) + 1;
    v163[4] = 55;
    v163[5] = 1;
    v163[6] = 0;
    v163[7] = 0;
    v163[8] = 64;
    v163[9] = 0;
    v163[10] = 0;
    v60 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD *))(*(_QWORD *)v13 + 40LL);
    v61 = (_QWORD *)(v58 + 24);
    v62 = *(_QWORD *)(v58 + 24);
    if ( v62 )
    {
      *v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    v63 = v60(v13, v163, 0LL, v61);
    v64 = v63;
    if ( v63 < 0 )
    {
      memset(&v161, 0, sizeof(v161));
      v161.ExceptionCode = -532265403;
      v161.ExceptionAddress = retaddr;
      v161.NumberParameters = 1;
      v161.ExceptionInformation[0] = v64;
      RaiseFailFastException(&v161, 0LL, 0);
    }
    sub_180011AC0(*(_QWORD *)(*a3 + 24), "BackBuffer_DepthStencilTexture");
    v127[0] = 0;
    v127[1] = (v7 != 0) + 3;
    v127[2] = 0;
    if ( (v7 != 0) == -2 )
      goto LABEL_60;
    if ( (v7 != 0) != -1 )
    {
      if ( !v7 )
        goto LABEL_60;
      if ( v7 == 0 )
      {
        if ( (v7 != 0) != 3 )
        {
LABEL_61:
          v129 = 1;
          v65 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v13 + 80LL);
          v66 = *a3;
          v67 = (__int64 *)(*a3 + 56);
          v68 = *v67;
          if ( *v67 )
          {
            *v67 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
            v66 = *a3;
          }
          v69 = v65(v13, *(_QWORD *)(v66 + 24), v127, v67);
          v70 = v69;
          if ( v69 < 0 )
          {
            memset(&v162, 0, sizeof(v162));
            v162.ExceptionCode = -532265403;
            v162.ExceptionAddress = retaddr;
            v162.NumberParameters = 1;
            v162.ExceptionInformation[0] = v70;
            RaiseFailFastException(&v162, 0LL, 0);
          }
          sub_180011AC0(*(_QWORD *)(*a3 + 56), "BackBuffer_DepthStencilView_LeftEye");
          if ( v7 )
          {
            HIDWORD(v128) = 1;
            v71 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v13 + 80LL);
            v72 = *a3;
            v73 = (__int64 *)(*a3 + 104);
            v74 = *v73;
            if ( *v73 )
            {
              *v73 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
              v72 = *a3;
            }
            v75 = v71(v13, *(_QWORD *)(v72 + 24), v127, v73);
            v76 = v75;
            if ( v75 < 0 )
            {
              memset(&v158, 0, sizeof(v158));
              v158.ExceptionCode = -532265403;
              v158.ExceptionAddress = retaddr;
              v158.NumberParameters = 1;
              v158.ExceptionInformation[0] = v76;
              RaiseFailFastException(&v158, 0LL, 0);
            }
            sub_180011AC0(*(_QWORD *)(*a3 + 104), "BackBuffer_DepthStencilView_RightEye");
          }
          else
          {
            v77 = *a3;
            v78 = *(_QWORD *)(*a3 + 104);
            v79 = *(_QWORD *)(*a3 + 56);
            if ( v78 != v79 )
            {
              if ( v79 )
              {
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v79 + 8LL))(*(_QWORD *)(*a3 + 56));
                v78 = *(_QWORD *)(v77 + 104);
              }
              *(_QWORD *)(v77 + 104) = v79;
              if ( v78 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
            }
          }
          v115 = 1;
          goto LABEL_78;
        }
        HIDWORD(v128) = -1;
LABEL_60:
        LODWORD(v128) = 0;
        goto LABEL_61;
      }
    }
    v128 = 0LL;
    goto LABEL_61;
  }
LABEL_78:
  v80 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v5 + 376LL))(v5, v150);
  v130 = 0LL;
  v81 = *(_QWORD *)(v80 + 8);
  if ( v81 )
  {
    v82 = *(_DWORD *)(v81 + 8);
    while ( v82 )
    {
      v83 = v82;
      v82 = _InterlockedCompareExchange((volatile signed __int32 *)(v81 + 8), v82 + 1, v82);
      if ( v83 == v82 )
      {
        v130 = *(_OWORD *)v80;
        break;
      }
    }
    v13 = v117;
  }
  v84 = v151;
  if ( v151 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v151 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v84 + 8LL))(v84, v81, v80);
    v13 = v117;
  }
  v85 = (__int64 *)sub_18002850C(v130);
  if ( v10 )
  {
    v86 = 0LL;
    v87 = v122;
    do
    {
      sub_180010D18(v130, v141);
      v88 = _RTDynamicCast(
              v141[0],
              0LL,
              &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
              &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
              1);
      v89 = *a3;
      v90 = *(_DWORD *)(*a3 + 44);
      v125 = *(_DWORD *)(*a3 + 40);
      v91 = *(_QWORD *)(v89 + 16);
      v136 = v91;
      if ( v91 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 8LL))(v91);
        v89 = *a3;
      }
      v92 = *(_QWORD *)(v89 + 8);
      v137 = v92;
      if ( v92 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 8LL))(v92);
        v89 = *a3;
      }
      v93 = *(_QWORD **)(v86 + v89 + 48);
      v124 = v93;
      if ( v93 )
        (*(void (__fastcall **)(_QWORD *))(*v93 + 8LL))(v93);
      sub_1800E201C(v88, (__int64 *)&v124, &v137, &v136, v125, v90);
      sub_180010EC0((__int64)v85, &v138);
      sub_18002A08C(v138, v141);
      v94 = *a3;
      v95 = v139;
      if ( v139 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v139 + 8));
        v95 = v139;
      }
      v148[0] = *(_QWORD *)(v86 + v94 + 64);
      *(_QWORD *)(v86 + v94 + 64) = v138;
      v148[1] = *(_QWORD *)(v86 + v94 + 72);
      *(_QWORD *)(v86 + v94 + 72) = v95;
      sub_180010910((__int64)v148);
      sub_180010910((__int64)&v138);
      sub_180010910((__int64)v141);
      v86 += 48LL;
      --v87;
    }
    while ( v87 );
    if ( !v7 )
    {
      v96 = (_QWORD *)*a3;
      v97 = *(_QWORD *)(*a3 + 120);
      if ( v97 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v97 + 8));
        v97 = v96[15];
      }
      v98 = v96[14];
      v143[0] = v96[8];
      v96[8] = v98;
      v143[1] = v96[9];
      v96[9] = v97;
      sub_180010910((__int64)v143);
    }
    v5 = v121;
    ((void (__fastcall *)(_QWORD **))(*v121)[7])(v121);
    LOBYTE(v99) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 360LL))(v5, v99);
    v13 = v117;
  }
  if ( v115 )
  {
    v100 = 0LL;
    v101 = v122;
    do
    {
      sub_180079C78(v130, (__int64 *)&v140);
      v102 = _RTDynamicCast(
               v140,
               0LL,
               &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
               &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
               1);
      v103 = *a3;
      v104 = *(_QWORD *)(*a3 + 24);
      v122 = v104;
      if ( v104 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 8LL))(v104);
        v103 = *a3;
      }
      v105 = *(_QWORD ***)(v100 + v103 + 56);
      v121 = v105;
      if ( v105 )
        ((void (__fastcall *)(_QWORD **))(*v105)[1])(v105);
      sub_1800ED91C(v102, &v121, &v122);
      sub_180026640(v85, &v126);
      v106 = (__int64 *)v126;
      v142 = 0LL;
      if ( *((_QWORD *)&v140 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v140 + 1) + 8LL));
      v142 = v140;
      sub_18007A8C0(v106, &v142, 5);
      if ( *((_QWORD *)&v126 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v126 + 1) + 8LL));
      v144 = v126;
      sub_18002EEDC((__int64)v5, &v144);
      v107 = *a3;
      v108 = *((_QWORD *)&v126 + 1);
      if ( *((_QWORD *)&v126 + 1) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v126 + 1) + 8LL));
        v108 = *((_QWORD *)&v126 + 1);
      }
      v145[0] = *(_QWORD *)(v100 + v107 + 80);
      *(_QWORD *)(v100 + v107 + 80) = v126;
      v145[1] = *(_QWORD *)(v100 + v107 + 88);
      *(_QWORD *)(v100 + v107 + 88) = v108;
      sub_180010910((__int64)v145);
      sub_180010910((__int64)&v126);
      sub_180010910((__int64)&v140);
      v100 += 48LL;
      --v101;
    }
    while ( v101 );
    if ( !v116 )
    {
      v109 = (_QWORD *)*a3;
      v110 = *(_QWORD *)(*a3 + 136);
      if ( v110 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v110 + 8));
        v110 = v109[17];
      }
      v111 = v109[16];
      v146[0] = v109[10];
      v109[10] = v111;
      v146[1] = v109[11];
      v109[11] = v110;
      sub_180010910((__int64)v146);
    }
    v13 = v117;
  }
  sub_180010910((__int64)&v130);
  v112 = v120;
  if ( v120 )
  {
    v120 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 16LL))(v112);
  }
  v113 = v123;
  if ( v123 )
  {
    v123 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v113)[2])(v113);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return sub_180010910((__int64)v147);
}
