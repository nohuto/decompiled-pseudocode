/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18004418C
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18002E930 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x18004468C (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18004471C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180044864 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v3; // rbx
  char v5; // r15
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // edi
  void (__fastcall ***v11)(_QWORD, __int64); // rbx
  volatile signed __int32 *v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdi
  void (__fastcall *v15)(_QWORD, __int64); // rcx
  _QWORD *v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r12
  int v22; // eax
  int v23; // eax
  int v24; // eax
  char v25; // al
  int v26; // eax
  int v28; // eax
  int v29; // eax
  float v30; // xmm0_4
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // r8d
  int v36; // eax
  int v37; // eax
  int v38; // r12d
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // r13
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  float v45; // xmm0_4
  __int64 v46; // rcx
  int v47; // eax
  int v48; // eax
  float v49; // xmm0_4
  float v50; // xmm0_4
  int v51; // eax
  int v52; // eax
  int v53; // eax
  float v54; // xmm0_4
  int v55; // eax
  int v56; // eax
  float v57; // xmm0_4
  float v58; // xmm0_4
  int v59; // eax
  int v60; // eax
  __int64 v61; // rax
  float *v62; // rcx
  int v63; // eax
  __int64 v64; // [rsp+38h] [rbp-D0h] BYREF
  void (__fastcall ***v65)(_QWORD, __int64); // [rsp+40h] [rbp-C8h]
  int v66; // [rsp+48h] [rbp-C0h]
  unsigned int v67; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v68; // [rsp+50h] [rbp-B8h]
  __int64 v69; // [rsp+58h] [rbp-B0h]
  unsigned int v70; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v71; // [rsp+64h] [rbp-A4h]
  double v72; // [rsp+68h] [rbp-A0h] BYREF
  double v73; // [rsp+70h] [rbp-98h]
  double v74; // [rsp+78h] [rbp-90h] BYREF
  __int64 v75; // [rsp+80h] [rbp-88h]
  __int64 v76; // [rsp+88h] [rbp-80h]
  __int64 v77; // [rsp+90h] [rbp-78h]
  double v78; // [rsp+98h] [rbp-70h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-68h]
  bool *v80; // [rsp+A8h] [rbp-60h]
  __int64 v81; // [rsp+B0h] [rbp-58h]
  __int64 v82; // [rsp+C0h] [rbp-48h]
  __int64 v83; // [rsp+D0h] [rbp-38h]
  __int64 v84; // [rsp+E0h] [rbp-28h]
  int v85; // [rsp+F8h] [rbp-10h]
  __int64 v86; // [rsp+100h] [rbp-8h]
  __int64 v87; // [rsp+110h] [rbp+8h]
  __int64 v88; // [rsp+120h] [rbp+18h]
  __int64 v89; // [rsp+130h] [rbp+28h]
  int v90; // [rsp+148h] [rbp+40h]
  struct _RTL_CRITICAL_SECTION *v91; // [rsp+150h] [rbp+48h]
  __int128 v92; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v93[4]; // [rsp+168h] [rbp+60h]
  char v94[20]; // [rsp+178h] [rbp+70h] BYREF
  float v95; // [rsp+18Ch] [rbp+84h]
  float v96; // [rsp+190h] [rbp+88h]
  float v97; // [rsp+194h] [rbp+8Ch]
  int v98; // [rsp+1A4h] [rbp+9Ch]
  int v99; // [rsp+1A8h] [rbp+A0h]
  int v100; // [rsp+1ACh] [rbp+A4h]
  char v101[20]; // [rsp+1B0h] [rbp+A8h] BYREF
  float v102; // [rsp+1C4h] [rbp+BCh]
  float v103; // [rsp+1C8h] [rbp+C0h]
  float v104; // [rsp+1CCh] [rbp+C4h]
  int v105; // [rsp+1DCh] [rbp+D4h]
  int v106; // [rsp+1E0h] [rbp+D8h]
  int v107; // [rsp+1E4h] [rbp+DCh]
  char v108[20]; // [rsp+1E8h] [rbp+E0h] BYREF
  float v109; // [rsp+1FCh] [rbp+F4h]
  float v110; // [rsp+200h] [rbp+F8h]
  int v111; // [rsp+20Ch] [rbp+104h]
  int v112; // [rsp+210h] [rbp+108h]
  char v113[20]; // [rsp+218h] [rbp+110h] BYREF
  float v114; // [rsp+22Ch] [rbp+124h]
  float v115; // [rsp+230h] [rbp+128h]
  int v116; // [rsp+23Ch] [rbp+134h]
  int v117; // [rsp+240h] [rbp+138h]
  char v118[20]; // [rsp+248h] [rbp+140h] BYREF
  float v119; // [rsp+25Ch] [rbp+154h]
  char v120[20]; // [rsp+268h] [rbp+160h] BYREF
  float v121; // [rsp+27Ch] [rbp+174h]
  float v122; // [rsp+280h] [rbp+178h]
  float v123; // [rsp+284h] [rbp+17Ch]
  char v124[20]; // [rsp+2A0h] [rbp+198h] BYREF
  float v125; // [rsp+2B4h] [rbp+1ACh]
  float v126; // [rsp+2B8h] [rbp+1B0h]
  char v127[20]; // [rsp+2D0h] [rbp+1C8h] BYREF
  char v128; // [rsp+2E4h] [rbp+1DCh] BYREF
  double v129; // [rsp+308h] [rbp+200h] BYREF
  double v130; // [rsp+310h] [rbp+208h]
  double v131; // [rsp+318h] [rbp+210h]
  double v132[4]; // [rsp+320h] [rbp+218h] BYREF

  v3 = a3;
  v80 = a3;
  v91 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  LOBYTE(v66) = 0;
  *((double *)this + 13) = a2;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x141u, 0LL);
    goto LABEL_31;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
         *((_QWORD *)this + 1),
         v7,
         0LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x144u, 0LL);
    goto LABEL_31;
  }
  v10 = 0;
  LODWORD(v68) = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_27;
  while ( 1 )
  {
    v11 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 5) + 8LL * v10);
    v65 = v11;
    v12 = (volatile signed __int32 *)(v11 + 1);
    if ( v11 )
    {
      _InterlockedIncrement(v12);
      v11 = v65;
    }
    if ( !*((_BYTE *)v11 + 48) || *((_BYTE *)v11 + 49) )
    {
      if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) != 1 )
        goto LABEL_25;
LABEL_24:
      (**v65)(v65, 1LL);
      goto LABEL_25;
    }
    ++*((_DWORD *)v11 + 6);
    v13 = 0;
    v71 = 0;
    if ( *((_DWORD *)v11 + 5) )
      break;
LABEL_23:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
      goto LABEL_24;
LABEL_25:
    LODWORD(v68) = ++v10;
    if ( v10 >= *((_DWORD *)this + 16) )
    {
      v3 = v80;
LABEL_27:
      v26 = CAnimationEngine::StopAnimations(this);
      v8 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x210u, 0LL);
      }
      else if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v3 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_31;
    }
  }
  while ( 1 )
  {
    v14 = v13;
    v69 = v13;
    v15 = v11[5][v13];
    v16 = *(_QWORD **)v15;
    v17 = **((_QWORD **)v15 + 1);
    v18 = **((_QWORD **)v15 + 5);
    v75 = v18;
    v76 = **((_QWORD **)v15 + 4);
    v77 = **((_QWORD **)v15 + 6);
    v79 = **((_QWORD **)v15 + 7);
    if ( (*((int (__fastcall **)(_QWORD, double *))*v11[4] + 19))(v11[4], &v74) >= 0 )
      *((double *)v11 + 7) = v74 + *((double *)v11 + 7);
    if ( *((_DWORD *)v11 + 6) <= 1u )
    {
      v32 = *(_QWORD *)v11[5][v14];
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 48LL))(v32, &v64) >= 0 && *(float *)&v64 == 0.0 )
      {
        v92 = 0LL;
        v93[0] = 0;
        *(_QWORD *)&v93[1] = 1065353216LL;
        v33 = *(_QWORD *)v11[5][v14];
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v33 + 168LL))(v33, &v92);
      }
    }
    (*(void (__fastcall **)(_QWORD *))(*v16 + 120LL))(v16);
    if ( !v17 )
      goto LABEL_13;
    v34 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v67);
    v8 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x17Du, 0LL);
      goto LABEL_85;
    }
    v35 = v67;
    if ( v67 != 2 )
    {
      if ( v67 == 3 )
      {
        v38 = 0;
        v39 = v69;
        while ( 1 )
        {
          v40 = (_QWORD *)*((_QWORD *)v11[5][v39] + v38 + 1);
          v41 = *v40;
          if ( *v40 )
          {
            v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v41 + 200LL))(*v40, 0LL, &v70);
            v8 = v42;
            if ( v42 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x194u, 0LL);
              goto LABEL_85;
            }
            v43 = *(_QWORD *)v11[5][v69];
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 240LL))(v43, v70);
            v44 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v41 + 40LL))(v41, &v129, 3LL);
            v8 = v44;
            if ( v44 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x199u, 0LL);
              goto LABEL_85;
            }
            v45 = v129;
            v121 = v45;
            v122 = v130;
            v123 = v131;
            v46 = *(_QWORD *)v11[5][v69];
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 240LL))(v46, v70);
            v47 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v16 + 176LL))(v16, v120);
            v8 = v47;
            if ( v47 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x1A1u, 0LL);
              goto LABEL_85;
            }
            v35 = v67;
            v39 = v69;
          }
          if ( ++v38 >= v35 )
          {
            v18 = v75;
            goto LABEL_13;
          }
        }
      }
      goto LABEL_13;
    }
    v36 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v17 + 40LL))(v17, &v72);
    v8 = v36;
    if ( v36 < 0 )
      break;
    v125 = v72;
    v126 = v73;
    v37 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v16 + 144LL))(v16, v124);
    v8 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x186u, 0LL);
      goto LABEL_85;
    }
LABEL_13:
    if ( !v18 )
      goto LABEL_14;
    v28 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, &v67);
    v8 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x1ADu, 0LL);
      goto LABEL_85;
    }
    if ( v67 == 2 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v18 + 40LL))(v18, &v72, 2LL);
      v8 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x1B0u, 0LL);
        goto LABEL_85;
      }
      v30 = v72;
      v109 = v30;
      v110 = v73;
      v19 = v69;
      v81 = *((_QWORD *)v11[5][v69] + 8);
      v111 = v81;
      v82 = *((_QWORD *)v11[5][v69] + 8);
      v112 = HIDWORD(v82);
      v31 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v16 + 152LL))(v16, v108);
      v8 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1B8u, 0LL);
        goto LABEL_85;
      }
    }
    else
    {
      if ( v67 != 3 )
      {
LABEL_14:
        v19 = v69;
        goto LABEL_15;
      }
      v48 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v18 + 40LL))(v18, &v129, 3LL);
      v8 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x1BCu, 0LL);
        goto LABEL_85;
      }
      v49 = v129;
      v95 = v49;
      v96 = v130;
      v50 = v131;
      v97 = v50;
      v19 = v69;
      v83 = *((_QWORD *)v11[5][v69] + 8);
      v98 = v83;
      v84 = *((_QWORD *)v11[5][v69] + 8);
      v99 = HIDWORD(v84);
      v85 = *((_DWORD *)v11[5][v69] + 18);
      v100 = v85;
      v51 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v16 + 184LL))(v16, v94);
      v8 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x1C6u, 0LL);
        goto LABEL_85;
      }
    }
LABEL_15:
    v20 = v76;
    if ( v76 )
    {
      v52 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v76 + 24LL))(v76, &v67);
      v8 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x1D0u, 0LL);
        goto LABEL_85;
      }
      if ( v67 == 2 )
      {
        v53 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v20 + 40LL))(v20, &v72, 2LL);
        v8 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x1D3u, 0LL);
          goto LABEL_85;
        }
        v54 = v72;
        v114 = v54;
        v115 = v73;
        v86 = *(_QWORD *)((char *)v11[5][v19] + 76);
        v116 = v86;
        v87 = *(_QWORD *)((char *)v11[5][v19] + 76);
        v117 = HIDWORD(v87);
        v55 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v16 + 160LL))(v16, v113);
        v8 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x1DBu, 0LL);
          goto LABEL_85;
        }
      }
      else if ( v67 == 3 )
      {
        v56 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v20 + 40LL))(v20, &v129, 3LL);
        v8 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x1DFu, 0LL);
          goto LABEL_85;
        }
        v57 = v129;
        v102 = v57;
        v103 = v130;
        v58 = v131;
        v104 = v58;
        v88 = *(_QWORD *)((char *)v11[5][v19] + 76);
        v105 = v88;
        v89 = *(_QWORD *)((char *)v11[5][v19] + 76);
        v106 = HIDWORD(v89);
        v90 = *((_DWORD *)v11[5][v19] + 21);
        v107 = v90;
        v59 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v16 + 192LL))(v16, v101);
        v8 = v59;
        if ( v59 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x1E8u, 0LL);
          goto LABEL_85;
        }
      }
    }
    v21 = v77;
    if ( v77 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v77 + 24LL))(v77, &v67);
      v8 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1F2u, 0LL);
        goto LABEL_85;
      }
      v23 = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v21 + 40LL))(v21, &v78, v67);
      v8 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1F6u, 0LL);
        goto LABEL_85;
      }
      v119 = v78;
      v24 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v16 + 168LL))(v16, v118);
      v8 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x1FBu, 0LL);
        goto LABEL_85;
      }
    }
    if ( v79 )
    {
      v60 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v79 + 40LL))(v79, v132, 4LL);
      v8 = v60;
      if ( v60 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x200u, 0LL);
        goto LABEL_85;
      }
      v61 = 0LL;
      v62 = (float *)&v128;
      do
        *v62++ = v132[v61++];
      while ( v61 < 4 );
      v63 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v16 + 200LL))(v16, v127);
      v8 = v63;
      if ( v63 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x208u, 0LL);
        goto LABEL_85;
      }
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 248LL))(v16);
    v5 = v25 | v66;
    LOBYTE(v66) = v25 | v66;
    v13 = v71 + 1;
    v71 = v13;
    if ( v13 >= *((_DWORD *)v11 + 5) )
    {
      v10 = v68;
      goto LABEL_23;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x180u, 0LL);
LABEL_85:
  if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
    (**v65)(v65, 1LL);
LABEL_31:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
