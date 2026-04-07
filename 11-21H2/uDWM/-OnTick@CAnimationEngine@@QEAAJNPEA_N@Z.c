/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180015174
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800512B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x1800156E0 (-OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180015730 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800157B8 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800158DC (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v3; // rbx
  char v5; // r14
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  CBaseObject *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r12
  __int64 *v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r15
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v26; // eax
  unsigned int v27; // r8d
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  float v32; // xmm0_4
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int i; // r15d
  _QWORD *v37; // rax
  __int64 v38; // r12
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  float v42; // xmm0_4
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  float v46; // xmm0_4
  float v47; // xmm0_4
  int v48; // eax
  int v49; // eax
  int v50; // eax
  float v51; // xmm0_4
  int v52; // eax
  int v53; // eax
  float v54; // xmm0_4
  float v55; // xmm0_4
  int v56; // eax
  int v57; // eax
  __int64 v58; // rax
  float *v59; // rcx
  int v60; // eax
  char v61; // [rsp+38h] [rbp-D0h]
  unsigned int v62; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v63; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v64; // [rsp+44h] [rbp-C4h]
  __int64 v65; // [rsp+48h] [rbp-C0h]
  double v66; // [rsp+50h] [rbp-B8h] BYREF
  double v67; // [rsp+58h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-A0h]
  __int64 v70; // [rsp+70h] [rbp-98h]
  __int64 v71; // [rsp+78h] [rbp-90h]
  double v72; // [rsp+80h] [rbp-88h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h]
  CBaseObject *v74; // [rsp+90h] [rbp-78h]
  bool *v75; // [rsp+98h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v76; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-60h]
  __int64 v78; // [rsp+B8h] [rbp-50h]
  __int64 v79; // [rsp+C8h] [rbp-40h]
  __int64 v80; // [rsp+D8h] [rbp-30h]
  int v81; // [rsp+F0h] [rbp-18h]
  __int64 v82; // [rsp+F8h] [rbp-10h]
  __int64 v83; // [rsp+108h] [rbp+0h]
  __int64 v84; // [rsp+118h] [rbp+10h]
  __int64 v85; // [rsp+128h] [rbp+20h]
  int v86; // [rsp+140h] [rbp+38h]
  __int64 v87; // [rsp+148h] [rbp+40h]
  __int128 v88; // [rsp+150h] [rbp+48h] BYREF
  _DWORD v89[4]; // [rsp+160h] [rbp+58h]
  _BYTE v90[20]; // [rsp+170h] [rbp+68h] BYREF
  float v91; // [rsp+184h] [rbp+7Ch]
  float v92; // [rsp+188h] [rbp+80h]
  float v93; // [rsp+18Ch] [rbp+84h]
  int v94; // [rsp+19Ch] [rbp+94h]
  int v95; // [rsp+1A0h] [rbp+98h]
  int v96; // [rsp+1A4h] [rbp+9Ch]
  _BYTE v97[20]; // [rsp+1A8h] [rbp+A0h] BYREF
  float v98; // [rsp+1BCh] [rbp+B4h]
  float v99; // [rsp+1C0h] [rbp+B8h]
  float v100; // [rsp+1C4h] [rbp+BCh]
  int v101; // [rsp+1D4h] [rbp+CCh]
  int v102; // [rsp+1D8h] [rbp+D0h]
  int v103; // [rsp+1DCh] [rbp+D4h]
  _BYTE v104[20]; // [rsp+1E0h] [rbp+D8h] BYREF
  float v105; // [rsp+1F4h] [rbp+ECh]
  float v106; // [rsp+1F8h] [rbp+F0h]
  int v107; // [rsp+204h] [rbp+FCh]
  int v108; // [rsp+208h] [rbp+100h]
  _BYTE v109[20]; // [rsp+210h] [rbp+108h] BYREF
  float v110; // [rsp+224h] [rbp+11Ch]
  float v111; // [rsp+228h] [rbp+120h]
  int v112; // [rsp+234h] [rbp+12Ch]
  int v113; // [rsp+238h] [rbp+130h]
  _BYTE v114[20]; // [rsp+240h] [rbp+138h] BYREF
  float v115; // [rsp+254h] [rbp+14Ch]
  _BYTE v116[20]; // [rsp+260h] [rbp+158h] BYREF
  float v117; // [rsp+274h] [rbp+16Ch]
  float v118; // [rsp+278h] [rbp+170h]
  float v119; // [rsp+27Ch] [rbp+174h]
  _BYTE v120[20]; // [rsp+298h] [rbp+190h] BYREF
  float v121; // [rsp+2ACh] [rbp+1A4h]
  float v122; // [rsp+2B0h] [rbp+1A8h]
  _BYTE v123[20]; // [rsp+2C8h] [rbp+1C0h] BYREF
  char v124; // [rsp+2DCh] [rbp+1D4h] BYREF
  double v125; // [rsp+300h] [rbp+1F8h] BYREF
  double v126; // [rsp+308h] [rbp+200h]
  double v127; // [rsp+310h] [rbp+208h]
  double v128[4]; // [rsp+318h] [rbp+210h] BYREF

  v3 = a3;
  v75 = a3;
  v76 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  v61 = 0;
  *((double *)this + 13) = a2;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x141u);
    goto LABEL_26;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
         *((_QWORD *)this + 1),
         v7,
         0LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x144u);
    goto LABEL_26;
  }
  v10 = 0;
  LODWORD(v65) = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_22;
  while ( 1 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v10);
    v87 = v11;
    v12 = (CBaseObject *)v11;
    v74 = (CBaseObject *)v11;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = v87;
    }
    if ( *(_BYTE *)(v11 + 48) )
    {
      if ( !*(_BYTE *)(v11 + 49) )
      {
        ++*(_DWORD *)(v11 + 24);
        v13 = 0;
        v64 = 0;
        if ( *(_DWORD *)(v11 + 20) )
          break;
      }
    }
LABEL_20:
    CBaseObject::Release(v12);
    LODWORD(v65) = ++v10;
    if ( v10 >= *((_DWORD *)this + 16) )
    {
      v3 = v75;
LABEL_22:
      v24 = CAnimationEngine::StopAnimations(this);
      v8 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x210u);
      }
      else if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v3 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_26;
    }
  }
  while ( 1 )
  {
    v14 = v13;
    v69 = v13;
    v15 = *(__int64 **)(*(_QWORD *)(v11 + 40) + 8LL * v13);
    v16 = *v15;
    v17 = *(_QWORD *)v15[1];
    v18 = *(_QWORD *)v15[5];
    v70 = *(_QWORD *)v15[4];
    v71 = *(_QWORD *)v15[6];
    v73 = *(_QWORD *)v15[7];
    CAnimationEngine::CTransitionVisualSet::OnTick((CAnimationEngine::CTransitionVisualSet *)v11);
    if ( *(_DWORD *)(v11 + 24) <= 1u )
    {
      v34 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v14);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, &v68) >= 0 && *(float *)&v68 == 0.0 )
      {
        v88 = 0LL;
        v89[0] = 0;
        *(_QWORD *)&v89[1] = 1065353216LL;
        v35 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v14);
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v35 + 168LL))(v35, &v88);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 120LL))(v16);
    if ( v17 )
    {
      v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v62);
      v8 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x17Du);
        goto LABEL_79;
      }
      v27 = v62;
      if ( v62 == 2 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v17 + 40LL))(v17, &v66);
        v8 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x180u);
          goto LABEL_79;
        }
        v121 = v66;
        v122 = v67;
        v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 144LL))(v16, v120);
        v8 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x186u);
          goto LABEL_79;
        }
      }
      else if ( v62 == 3 )
      {
        for ( i = 0; i < v27; ++i )
        {
          v37 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 8LL * (int)i + 8);
          v38 = *v37;
          if ( *v37 )
          {
            v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v38 + 200LL))(*v37, 0LL, &v63);
            v8 = v39;
            if ( v39 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x194u);
              goto LABEL_79;
            }
            v40 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v69);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 240LL))(v40, v63);
            v41 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v38 + 40LL))(v38, &v125, 3LL);
            v8 = v41;
            if ( v41 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x199u);
              goto LABEL_79;
            }
            v42 = v125;
            v117 = v42;
            v118 = v126;
            v119 = v127;
            v14 = v69;
            v43 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v69);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 240LL))(v43, v63);
            v44 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 176LL))(v16, v116);
            v8 = v44;
            if ( v44 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x1A1u);
              goto LABEL_79;
            }
            v27 = v62;
          }
          else
          {
            v14 = v69;
          }
        }
      }
    }
    if ( v18 )
    {
      v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, &v62);
      v8 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x1ADu);
        goto LABEL_79;
      }
      if ( v62 == 2 )
      {
        v31 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v18 + 40LL))(v18, &v66, 2LL);
        v8 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x1B0u);
          goto LABEL_79;
        }
        v32 = v66;
        v105 = v32;
        v106 = v67;
        v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 64LL);
        v107 = v77;
        v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 64LL);
        v108 = HIDWORD(v78);
        v33 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 152LL))(v16, v104);
        v8 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x1B8u);
          goto LABEL_79;
        }
      }
      else if ( v62 == 3 )
      {
        v45 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v18 + 40LL))(v18, &v125, 3LL);
        v8 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x1BCu);
          goto LABEL_79;
        }
        v46 = v125;
        v91 = v46;
        v92 = v126;
        v47 = v127;
        v93 = v47;
        v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 64LL);
        v94 = v79;
        v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 64LL);
        v95 = HIDWORD(v80);
        v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 72LL);
        v96 = v81;
        v48 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 184LL))(v16, v90);
        v8 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x1C6u);
          goto LABEL_79;
        }
      }
    }
    v19 = v70;
    if ( v70 )
    {
      v49 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v70 + 24LL))(v70, &v62);
      v8 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x1D0u);
        goto LABEL_79;
      }
      if ( v62 == 2 )
      {
        v50 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v19 + 40LL))(v19, &v66, 2LL);
        v8 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0x1D3u);
          goto LABEL_79;
        }
        v51 = v66;
        v110 = v51;
        v111 = v67;
        v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 76LL);
        v112 = v82;
        v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 76LL);
        v113 = HIDWORD(v83);
        v52 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 160LL))(v16, v109);
        v8 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x1DBu);
          goto LABEL_79;
        }
      }
      else if ( v62 == 3 )
      {
        v53 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v19 + 40LL))(v19, &v125, 3LL);
        v8 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0x1DFu);
          goto LABEL_79;
        }
        v54 = v125;
        v98 = v54;
        v99 = v126;
        v55 = v127;
        v100 = v55;
        v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 76LL);
        v101 = v84;
        v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 76LL);
        v102 = HIDWORD(v85);
        v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v14) + 84LL);
        v103 = v86;
        v56 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 192LL))(v16, v97);
        v8 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v56, 0x1E8u);
          goto LABEL_79;
        }
      }
    }
    v20 = v71;
    if ( !v71 )
      goto LABEL_17;
    v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v71 + 24LL))(v71, &v62);
    v8 = v21;
    if ( v21 < 0 )
      break;
    v22 = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v20 + 40LL))(v20, &v72, v62);
    v8 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x1F6u);
      goto LABEL_79;
    }
    v115 = v72;
    v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 168LL))(v16, v114);
    v8 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x1FBu);
      goto LABEL_79;
    }
LABEL_17:
    if ( v73 )
    {
      v57 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v73 + 40LL))(v73, v128, 4LL);
      v8 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v57, 0x200u);
        goto LABEL_79;
      }
      v58 = 0LL;
      v59 = (float *)&v124;
      do
        *v59++ = v128[v58++];
      while ( v58 < 4 );
      v60 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 200LL))(v16, v123);
      v8 = v60;
      if ( v60 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v60, 0x208u);
        goto LABEL_79;
      }
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 248LL))(v16) | v61;
    v61 = v5;
    v13 = v64 + 1;
    v64 = v13;
    if ( v13 >= *(_DWORD *)(v11 + 20) )
    {
      v10 = v65;
      v12 = v74;
      goto LABEL_20;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x1F2u);
LABEL_79:
  CBaseObject::Release((CBaseObject *)v11);
LABEL_26:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v76);
  return v8;
}
