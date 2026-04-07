/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015B1C
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800157B8 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x180014998 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x1800149F0 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180014A9C (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180018180 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025C70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800A5728 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(__int64 **this, struct CAnimationEngine::CTransitionVisualSet *a2)
{
  unsigned int v2; // eax
  __int64 *v4; // rcx
  struct CAnimationEngine::CTransitionVisualSet *v5; // r14
  struct TA_TIMINGFUNCTION *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  unsigned int ThemeAnimationTransform; // ebx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rsi
  char v16; // r13
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  float v24; // xmm9_4
  __int64 v25; // rcx
  void *Theme; // rax
  unsigned int v27; // esi
  CAnimationEngine *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rbx
  __int64 v33; // rax
  int ThemeTimingFunction; // eax
  double v35; // xmm6_8
  double v36; // xmm7_8
  __int64 v37; // rax
  __int64 v38; // rbx
  struct TA_TIMINGFUNCTION *v39; // r15
  __int64 v40; // rax
  int v41; // r12d
  int v42; // esi
  int v43; // eax
  int v44; // r13d
  int v45; // r11d
  int v46; // r14d
  int v47; // r15d
  int v48; // edx
  int v49; // eax
  int v50; // esi
  int v51; // r8d
  int v52; // r10d
  int v53; // ecx
  int v54; // eax
  int v55; // edx
  int v56; // r9d
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  float v60; // xmm0_4
  float v61; // xmm1_4
  unsigned int v62; // r8d
  struct IUIAnimationStoryboard2 *v63; // rdx
  int v65; // eax
  int v66; // eax
  float v67; // xmm1_4
  float v68; // xmm1_4
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rdx
  CAnimationEngine *v72; // r13
  __int64 j; // rax
  int v74; // eax
  int v75; // eax
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  double v82; // xmm1_8
  double v83; // xmm2_8
  double v84; // xmm0_8
  double v85; // xmm3_8
  double v86; // xmm4_8
  double v87; // xmm5_8
  __m128 v88; // xmm1
  __int64 v89; // rcx
  int v90; // eax
  int v91; // xmm1_4
  __int64 v92; // rcx
  int v93; // eax
  unsigned int v94; // r8d
  __m128i v95; // xmm0
  struct IUIAnimationStoryboard2 *v96; // rdx
  unsigned int v97; // eax
  int v98; // ecx
  double v99; // xmm0_8
  double v100; // xmm0_8
  float v101; // xmm0_4
  unsigned int v102; // r8d
  struct IUIAnimationStoryboard2 *v103; // rdx
  double v104; // xmm0_8
  double v105; // xmm1_8
  double v106; // xmm2_8
  double v107; // xmm3_8
  __m128 v108; // xmm1
  __m128 v109; // xmm0
  __int64 v110; // rcx
  int v111; // xmm1_4
  double v112; // xmm0_8
  double v113; // xmm0_8
  __int64 k; // rax
  unsigned int v115; // [rsp+28h] [rbp-E0h]
  struct TA_TIMINGFUNCTION *v116; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v117; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v118; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v119; // [rsp+58h] [rbp-B0h]
  char v120; // [rsp+88h] [rbp-80h]
  bool v121; // [rsp+89h] [rbp-7Fh]
  bool v122; // [rsp+8Ah] [rbp-7Eh]
  char v123; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v124; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v125; // [rsp+90h] [rbp-78h]
  unsigned int v126; // [rsp+94h] [rbp-74h] BYREF
  int v127; // [rsp+98h] [rbp-70h] BYREF
  int v128; // [rsp+9Ch] [rbp-6Ch]
  struct TA_TIMINGFUNCTION *v129; // [rsp+A0h] [rbp-68h]
  struct CAnimationEngine::CTransitionVisualSet *v130; // [rsp+A8h] [rbp-60h]
  CAnimationEngine *v131; // [rsp+B0h] [rbp-58h]
  __m128i si128; // [rsp+B8h] [rbp-50h] BYREF
  float v133; // [rsp+C8h] [rbp-40h] BYREF
  float v134; // [rsp+CCh] [rbp-3Ch] BYREF
  int v135; // [rsp+D0h] [rbp-38h]
  unsigned int i; // [rsp+D4h] [rbp-34h]
  unsigned int v137; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v138; // [rsp+E0h] [rbp-28h] BYREF
  float v139; // [rsp+F0h] [rbp-18h] BYREF
  float v140; // [rsp+F4h] [rbp-14h] BYREF
  struct IUIAnimationStoryboard2 *v141; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v142; // [rsp+100h] [rbp-8h]
  int v143; // [rsp+108h] [rbp+0h]
  __int64 v144; // [rsp+110h] [rbp+8h]
  int v145; // [rsp+118h] [rbp+10h]
  double v146; // [rsp+120h] [rbp+18h] BYREF
  double v147; // [rsp+128h] [rbp+20h] BYREF
  __int64 v148; // [rsp+130h] [rbp+28h]
  int v149; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v150; // [rsp+13Ch] [rbp+34h] BYREF
  unsigned int v151; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v152; // [rsp+144h] [rbp+3Ch] BYREF
  float v153; // [rsp+148h] [rbp+40h] BYREF
  double v154; // [rsp+150h] [rbp+48h] BYREF
  double v155; // [rsp+158h] [rbp+50h] BYREF
  double v156[2]; // [rsp+160h] [rbp+58h] BYREF
  int v157; // [rsp+170h] [rbp+68h]
  int v158; // [rsp+180h] [rbp+78h]
  __int128 v159; // [rsp+188h] [rbp+80h] BYREF
  __int128 v160; // [rsp+198h] [rbp+90h] BYREF
  __int128 v161; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v162; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v163; // [rsp+1C8h] [rbp+C0h] BYREF
  double v164; // [rsp+1D8h] [rbp+D0h]
  __int128 v165; // [rsp+1E0h] [rbp+D8h] BYREF
  double v166; // [rsp+1F0h] [rbp+E8h]
  _OWORD v167[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  _OWORD v168[2]; // [rsp+218h] [rbp+110h] BYREF

  v2 = *((_DWORD *)a2 + 7);
  v131 = (CAnimationEngine *)this;
  v4 = this[1];
  v5 = a2;
  v124 = v2;
  v6 = 0LL;
  v141 = 0LL;
  v7 = 0LL;
  v130 = a2;
  v8 = *v4;
  v129 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, struct IUIAnimationStoryboard2 **))(v8 + 48))(v4, &v141);
  ThemeAnimationTransform = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x272u);
  }
  else
  {
    CAnimationEngine::CTransitionVisualSet::SetStoryboard(v5, v141);
    v11 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v141->lpVtbl->SetTag)(
            v141,
            0LL,
            *((unsigned int *)v5 + 4));
    ThemeAnimationTransform = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x276u);
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, __int64 **, _QWORD, _QWORD))v141->lpVtbl->SetStoryboardEventHandler)(
              v141,
              this,
              0LL,
              0LL);
      ThemeAnimationTransform = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x277u);
      }
      else
      {
        v13 = 0;
        v125 = 0;
        if ( *((_DWORD *)v5 + 5) )
        {
          while ( 1 )
          {
            v14 = *((_QWORD *)v5 + 5);
            v160 = 0LL;
            v161 = 0LL;
            v148 = v13;
            v159 = 0LL;
            v162 = 0LL;
            v15 = **(_QWORD **)(v14 + 8LL * v13);
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 256LL))(v15);
            v123 = v16;
            v120 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 136LL))(v15);
            v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 16LL))(v15, &v160);
            ThemeAnimationTransform = v17;
            if ( v17 < 0 )
              break;
            v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 24LL))(v15, &v159);
            ThemeAnimationTransform = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x28Cu);
              goto LABEL_55;
            }
            v19 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 32LL))(v15, &v134);
            ThemeAnimationTransform = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x28Du);
              goto LABEL_55;
            }
            v20 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 40LL))(v15, &v133);
            ThemeAnimationTransform = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x28Eu);
              goto LABEL_55;
            }
            v21 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 48LL))(v15, &v140);
            ThemeAnimationTransform = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x28Fu);
              goto LABEL_55;
            }
            v22 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 56LL))(v15, &v153);
            ThemeAnimationTransform = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x290u);
              goto LABEL_55;
            }
            v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 64LL))(v15, &v151);
            ThemeAnimationTransform = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x291u);
              goto LABEL_55;
            }
            if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 112LL))(v15, &v139) < 0 )
              v139 = 0.0;
            if ( v16 )
            {
              v74 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 72LL))(v15, &v161);
              ThemeAnimationTransform = v74;
              if ( v74 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0x298u);
                goto LABEL_55;
              }
              v75 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 80LL))(v15, &v162);
              ThemeAnimationTransform = v75;
              if ( v75 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v75, 0x299u);
                goto LABEL_55;
              }
            }
            v147 = 0.0;
            v146 = 0.0;
            v121 = 0;
            v24 = fmaxf(0.0099999998, 1.0 - v139);
            v122 = 0;
            if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 88LL))(v15, &v152) >= 0 )
            {
              v121 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v15 + 96LL))(v15, &v147) >= 0;
              v122 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v15 + 104LL))(v15, &v146) >= 0;
            }
            v25 = **(_QWORD **)(*((_QWORD *)v5 + 5) + 8LL * v13);
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 128LL))(v25, &v127);
            v137 = 0;
            v154 = 0.0;
            Theme = (void *)CDesktopManager::GetTheme(3LL);
            v27 = v124;
            CAnimationEngine::_CalculateStaggerDelay(v28, Theme, v124, v127, v151, &v154);
            v29 = CDesktopManager::GetTheme(3LL);
            if ( (int)GetThemeAnimationProperty(v29, v124, (unsigned int)v127, 1LL, &v137, 4, &v126) < 0 )
            {
              if ( (unsigned int)dword_1801418A0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801418A0, 1LL) )
              {
                v149 = v127;
                v150 = v124;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v76,
                  (unsigned int)&unk_18011F4C6,
                  v77,
                  v78,
                  (__int64)&v150,
                  (__int64)&v149);
              }
            }
            else
            {
              for ( i = 0; i < v137; ++i )
              {
                v30 = CDesktopManager::GetTheme(3LL);
                ThemeAnimationTransform = GetThemeAnimationTransform(v30, v27, (unsigned int)v127, v31, 0LL, 0, &v126);
                if ( ThemeAnimationTransform != -2147024662 )
                  continue;
                v32 = v126;
                if ( v7 )
                  (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                    WPF::g_pProcessHeap,
                    v7);
                v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       v32);
                if ( !v7 )
                {
                  ThemeAnimationTransform = -2147024882;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2CEu);
                  goto LABEL_57;
                }
                v33 = CDesktopManager::GetTheme(3LL);
                ThemeTimingFunction = GetThemeAnimationTransform(v33, v27, (unsigned int)v127, i, v7, v32, &v126);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v115 = 721;
                  goto LABEL_157;
                }
                v35 = ((float)((float)*(int *)(v7 + 8) / 1000.0) + v154) * v24;
                v36 = (float)((float)((float)*(int *)(v7 + 12) / 1000.0) * v24);
                if ( v27 == 105 )
                  v36 = (float)(v24 * *((float *)CDesktopManager::s_pDesktopManagerInstance + 169));
                v37 = CDesktopManager::GetTheme(4LL);
                if ( (unsigned int)GetThemeTimingFunction(v37, *(unsigned int *)(v7 + 4), 0LL, 0LL, &v126) == -2147024662 )
                {
                  v38 = v126;
                  if ( v6 )
                    (*(void (__fastcall **)(WPF::HeapBase *, struct TA_TIMINGFUNCTION *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 32LL))(
                      WPF::g_pProcessHeap,
                      v6);
                  v129 = (struct TA_TIMINGFUNCTION *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                       WPF::g_pProcessHeap,
                                                       v38);
                  v39 = v129;
                  if ( !v129 )
                  {
                    ThemeAnimationTransform = -2147024882;
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2EDu);
                    goto LABEL_56;
                  }
                  v40 = CDesktopManager::GetTheme(4LL);
                  ThemeTimingFunction = GetThemeTimingFunction(
                                          v40,
                                          *(unsigned int *)(v7 + 4),
                                          v39,
                                          (unsigned int)v38,
                                          &v126);
                  ThemeAnimationTransform = ThemeTimingFunction;
                  if ( ThemeTimingFunction < 0 )
                  {
                    v115 = 751;
                    goto LABEL_157;
                  }
                }
                v41 = DWORD2(v160);
                v42 = v160;
                si128 = 0LL;
                v166 = 0.0;
                v165 = 0LL;
                v164 = 0.0;
                memset(v168, 0, sizeof(v168));
                v138 = 0LL;
                v163 = 0LL;
                memset(v167, 0, sizeof(v167));
                v43 = RoundToNearestInt((float)(DWORD2(v160) + v160) * 0.5);
                v44 = HIDWORD(v160);
                v135 = v43;
                v45 = RoundToNearestInt((float)(HIDWORD(v160) + DWORD1(v160)) * 0.5);
                v46 = HIDWORD(v159);
                v47 = DWORD2(v159);
                v128 = v45;
                if ( v123 )
                  goto LABEL_37;
                v48 = 0;
                if ( DWORD2(v159) - (int)v159 >= 0 )
                  v48 = DWORD2(v159) - v159;
                v49 = 0;
                if ( v41 - v42 >= 0 )
                  v49 = v41 - v42;
                if ( v49 == v48 )
                {
LABEL_37:
                  v50 = v159 + v135 - v160;
                  if ( v123 )
                  {
                    v52 = DWORD1(v160);
                    v51 = DWORD1(v159);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v65 = RoundToNearestInt((float)(DWORD2(v159) + v159) * 0.5);
                  v45 = v128;
                  v50 = v65;
                }
                v51 = DWORD1(v159);
                v52 = DWORD1(v160);
                v53 = 0;
                if ( v46 - DWORD1(v159) >= 0 )
                  v53 = v46 - DWORD1(v159);
                v54 = 0;
                if ( v44 - DWORD1(v160) >= 0 )
                  v54 = v44 - DWORD1(v160);
                if ( v54 != v53 )
                {
                  v66 = RoundToNearestInt((float)(v46 + DWORD1(v159)) * 0.5);
                  v52 = DWORD1(v160);
                  v55 = v66;
                  v45 = v128;
                  goto LABEL_44;
                }
LABEL_43:
                v55 = v51 + v45 - v52;
LABEL_44:
                v56 = *(_DWORD *)(v7 + 16);
                v57 = *(_DWORD *)v7;
                v128 = v56 & 4;
                if ( v57 )
                {
                  v58 = v57 - 1;
                  if ( v58 )
                  {
                    v59 = v58 - 1;
                    if ( v59 )
                    {
                      v79 = v59 - 254;
                      if ( v79 )
                      {
                        v80 = v79 - 2;
                        if ( v80 )
                        {
                          v81 = v80 - 1;
                          if ( v81 )
                          {
                            if ( v81 == 1 )
                            {
                              if ( (v56 & 2) != 0 )
                              {
                                v82 = *(float *)(v7 + 32);
                                *(double *)&v165 = v82;
                                v83 = *(float *)(v7 + 36);
                                *((double *)&v165 + 1) = v83;
                                v84 = *(float *)(v7 + 40);
                              }
                              else
                              {
                                v165 = 0LL;
                                v83 = 0.0;
                                v84 = 0.0;
                                v82 = 0.0;
                              }
                              v166 = v84;
                              v85 = *(float *)(v7 + 20);
                              *(double *)&v163 = v85;
                              v86 = *(float *)(v7 + 24);
                              *((double *)&v163 + 1) = v86;
                              v87 = *(float *)(v7 + 28);
                              v164 = v87;
                              if ( v120 )
                              {
                                *(_QWORD *)&v165 = *(_QWORD *)&v82 ^ _xmm;
                                *((_QWORD *)&v165 + 1) = *(_QWORD *)&v83 ^ _xmm;
                                *(_QWORD *)&v166 = *(_QWORD *)&v84 ^ _xmm;
                                *(_QWORD *)&v163 = *(_QWORD *)&v85 ^ _xmm;
                                *((_QWORD *)&v163 + 1) = *(_QWORD *)&v86 ^ _xmm;
                                *(_QWORD *)&v164 = *(_QWORD *)&v87 ^ _xmm;
                              }
                              v88 = (__m128)*(unsigned int *)(v7 + 48);
                              v5 = v130;
                              v6 = v129;
                              v13 = v125;
                              v89 = *(_QWORD *)(*((_QWORD *)v130 + 5) + 8 * v148);
                              v117 = v129;
                              v157 = *(_DWORD *)(v7 + 52);
                              v90 = v157;
                              *(_QWORD *)(v89 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v7 + 44), v88).m128_u64[0];
                              *(_DWORD *)(v89 + 84) = v90;
                              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                      (__int64)v131,
                                                      *((struct IUIAnimationStoryboard2 **)v5 + 4),
                                                      *((_DWORD *)v5 + 4),
                                                      v125,
                                                      3,
                                                      v35,
                                                      v36,
                                                      (double *)&v165,
                                                      (double *)&v163,
                                                      3u,
                                                      v117,
                                                      0,
                                                      0LL,
                                                      0LL,
                                                      0);
                              ThemeAnimationTransform = ThemeTimingFunction;
                              if ( ThemeTimingFunction < 0 )
                              {
                                v115 = 1121;
                                goto LABEL_157;
                              }
                            }
                            else
                            {
                              v5 = v130;
                              v6 = v129;
                              v13 = v125;
                            }
                          }
                          else
                          {
                            if ( (v56 & 1) != 0 )
                            {
                              v166 = v134;
                              *(double *)&v165 = (double)(v41 - (int)v160);
                              *((double *)&v165 + 1) = (double)(v44 - v52);
                              v164 = v133;
                              *(double *)&v163 = (double)(v47 - (int)v159);
                              *((double *)&v163 + 1) = (double)(v46 - DWORD1(v159));
                            }
                            else
                            {
                              if ( (v56 & 2) != 0 )
                              {
                                *(double *)&v165 = *(float *)(v7 + 32);
                                *((double *)&v165 + 1) = *(float *)(v7 + 36);
                                v166 = *(float *)(v7 + 40);
                              }
                              else
                              {
                                v165 = _xmm;
                                v166 = DOUBLE_1_0;
                              }
                              *(double *)&v163 = *(float *)(v7 + 20);
                              *((double *)&v163 + 1) = *(float *)(v7 + 24);
                              v164 = *(float *)(v7 + 28);
                            }
                            if ( (v56 & 4) != 0 )
                            {
                              v91 = *(_DWORD *)(v7 + 48);
                              LODWORD(v144) = *(_DWORD *)(v7 + 44);
                              v145 = *(_DWORD *)(v7 + 52);
                              HIDWORD(v144) = v91;
                            }
                            else
                            {
                              v145 = 0;
                              v144 = 0x3F0000003F000000LL;
                            }
                            v5 = v130;
                            v6 = v129;
                            v13 = v125;
                            v92 = *(_QWORD *)(*((_QWORD *)v130 + 5) + 8 * v148);
                            v93 = v145;
                            v118 = v129;
                            *(_QWORD *)(v92 + 64) = v144;
                            *(_DWORD *)(v92 + 72) = v93;
                            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                    (__int64)v131,
                                                    *((struct IUIAnimationStoryboard2 **)v5 + 4),
                                                    *((_DWORD *)v5 + 4),
                                                    v125,
                                                    4,
                                                    v35,
                                                    v36,
                                                    (double *)&v165,
                                                    (double *)&v163,
                                                    3u,
                                                    v118,
                                                    0,
                                                    0LL,
                                                    0LL,
                                                    0);
                            ThemeAnimationTransform = ThemeTimingFunction;
                            if ( ThemeTimingFunction < 0 )
                            {
                              v115 = 1078;
                              goto LABEL_157;
                            }
                          }
                        }
                        else
                        {
                          v166 = 0.0;
                          v165 = 0LL;
                          if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
                          {
                            v5 = v130;
                            v6 = v129;
                            v13 = v125;
                            v94 = *((_DWORD *)v130 + 4);
                            *(double *)&v163 = (double)(v50 - v135);
                            v95 = _mm_cvtsi32_si128(v55 - v45);
                            v96 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)v130 + 4);
                            *((_QWORD *)&v163 + 1) = *(_OWORD *)&_mm_cvtepi32_pd(v95);
                            v164 = (float)(v133 - v134);
                            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                    (__int64)v131,
                                                    v96,
                                                    v94,
                                                    v125,
                                                    0,
                                                    v35,
                                                    v36,
                                                    (double *)&v165,
                                                    (double *)&v163,
                                                    3u,
                                                    v129,
                                                    0,
                                                    0LL,
                                                    0LL,
                                                    0);
                            ThemeAnimationTransform = ThemeTimingFunction;
                            if ( ThemeTimingFunction < 0 )
                            {
                              v115 = 972;
                              goto LABEL_157;
                            }
                          }
                          else
                          {
                            v97 = 1;
                            v98 = 0;
                            if ( (*(_DWORD *)(v7 + 16) & 0x1000) != 0 )
                            {
                              v97 = 2;
                              v99 = (double)(((int)v159 + v47 - v41 - (int)v160) / 2);
                            }
                            else
                            {
                              v99 = *(float *)(v7 + 20);
                            }
                            *(double *)&v163 = v99;
                            if ( (*(_DWORD *)(v7 + 16) & 0x2000) != 0 )
                            {
                              v97 = 3;
                              v100 = (double)((DWORD1(v159) + v46 - v44 - v52) / 2);
                              v98 = 1;
                            }
                            else
                            {
                              v100 = *(float *)(v7 + 24);
                            }
                            *((double *)&v163 + 1) = v100;
                            if ( (*(_DWORD *)(v7 + 16) & 0x4000) != 0 )
                            {
                              v97 = 4;
                              v101 = v133 - v134;
                              v98 = 2;
                            }
                            else
                            {
                              v101 = *(float *)(v7 + 28);
                            }
                            v5 = v130;
                            v6 = v129;
                            v13 = v125;
                            v102 = *((_DWORD *)v130 + 4);
                            v103 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)v130 + 4);
                            v164 = v101;
                            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                    (__int64)v131,
                                                    v103,
                                                    v102,
                                                    v125,
                                                    v98,
                                                    v35,
                                                    v36,
                                                    (double *)&v165,
                                                    (double *)&v163,
                                                    3u,
                                                    v129,
                                                    v97,
                                                    0LL,
                                                    0LL,
                                                    0);
                            ThemeAnimationTransform = ThemeTimingFunction;
                            if ( ThemeTimingFunction < 0 )
                            {
                              v115 = 1024;
                              goto LABEL_157;
                            }
                          }
                        }
                      }
                      else
                      {
                        if ( (v56 & 2) != 0 )
                        {
                          v104 = *(float *)(v7 + 28);
                          *(double *)si128.m128i_i64 = v104;
                          v105 = *(float *)(v7 + 32);
                          *(double *)&si128.m128i_i64[1] = v105;
                        }
                        else
                        {
                          si128 = 0LL;
                          v105 = 0.0;
                          v104 = 0.0;
                        }
                        v106 = *(float *)(v7 + 20);
                        *(double *)&v138 = v106;
                        v107 = *(float *)(v7 + 24);
                        *((double *)&v138 + 1) = v107;
                        if ( v120 )
                        {
                          si128.m128i_i64[0] = *(_QWORD *)&v104 ^ _xmm;
                          si128.m128i_i64[1] = *(_QWORD *)&v105 ^ _xmm;
                          *(_QWORD *)&v138 = *(_QWORD *)&v106 ^ _xmm;
                          *((_QWORD *)&v138 + 1) = *(_QWORD *)&v107 ^ _xmm;
                        }
                        v108 = (__m128)*(unsigned int *)(v7 + 40);
                        v109 = (__m128)*(unsigned int *)(v7 + 36);
                        v5 = v130;
                        v158 = 0;
                        v6 = v129;
                        v13 = v125;
                        v110 = *(_QWORD *)(*((_QWORD *)v130 + 5) + 8 * v148);
                        v119 = v129;
                        *(_QWORD *)(v110 + 76) = _mm_unpacklo_ps(v109, v108).m128_u64[0];
                        *(_DWORD *)(v110 + 84) = 0;
                        ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                (__int64)v131,
                                                *((struct IUIAnimationStoryboard2 **)v5 + 4),
                                                *((_DWORD *)v5 + 4),
                                                v125,
                                                3,
                                                v35,
                                                v36,
                                                (double *)si128.m128i_i64,
                                                (double *)&v138,
                                                2u,
                                                v119,
                                                0,
                                                0LL,
                                                0LL,
                                                0);
                        ThemeAnimationTransform = ThemeTimingFunction;
                        if ( ThemeTimingFunction < 0 )
                        {
                          v115 = 942;
                          goto LABEL_157;
                        }
                      }
                    }
                    else
                    {
                      if ( (v56 & 1) != 0 )
                      {
                        v61 = v153;
                        v60 = v140;
                      }
                      else
                      {
                        if ( (v56 & 2) != 0 )
                          v60 = *(float *)(v7 + 24);
                        else
                          v60 = v140;
                        v61 = *(float *)(v7 + 20);
                      }
                      v5 = v130;
                      v6 = v129;
                      v13 = v125;
                      v62 = *((_DWORD *)v130 + 4);
                      v63 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)v130 + 4);
                      v156[0] = v60;
                      v155 = v61;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v131,
                                              v63,
                                              v62,
                                              v125,
                                              5,
                                              v35,
                                              v36,
                                              v156,
                                              &v155,
                                              1u,
                                              v129,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v115 = 1143;
                        goto LABEL_157;
                      }
                    }
                  }
                  else
                  {
                    if ( (v56 & 1) != 0 )
                    {
                      si128 = _mm_load_si128((const __m128i *)&_xmm);
                      if ( v41 == (_DWORD)v160 )
                        v67 = FLOAT_1_0;
                      else
                        v67 = (float)(v47 - v159) / (float)(v41 - v160);
                      *(double *)&v138 = v67;
                      if ( v44 == v52 )
                        v68 = FLOAT_1_0;
                      else
                        v68 = (float)(v46 - DWORD1(v159)) / (float)(v44 - v52);
                      *((double *)&v138 + 1) = v68;
                    }
                    else
                    {
                      if ( (v56 & 2) != 0 )
                      {
                        *(double *)si128.m128i_i64 = *(float *)(v7 + 28);
                        *(double *)&si128.m128i_i64[1] = *(float *)(v7 + 32);
                      }
                      else
                      {
                        si128 = _mm_load_si128((const __m128i *)&_xmm);
                      }
                      *(double *)&v138 = *(float *)(v7 + 20);
                      *((double *)&v138 + 1) = *(float *)(v7 + 24);
                    }
                    v143 = 0;
                    if ( v128 )
                    {
                      v111 = *(_DWORD *)(v7 + 40);
                      LODWORD(v142) = *(_DWORD *)(v7 + 36);
                      HIDWORD(v142) = v111;
                    }
                    else
                    {
                      v142 = 0x3F0000003F000000LL;
                    }
                    v5 = v130;
                    v6 = v129;
                    v13 = v125;
                    v69 = *(_QWORD *)(*((_QWORD *)v130 + 5) + 8 * v148);
                    v70 = v143;
                    v116 = v129;
                    *(_QWORD *)(v69 + 64) = v142;
                    *(_DWORD *)(v69 + 72) = v70;
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            (__int64)v131,
                                            *((struct IUIAnimationStoryboard2 **)v5 + 4),
                                            *((_DWORD *)v5 + 4),
                                            v125,
                                            4,
                                            v35,
                                            v36,
                                            (double *)si128.m128i_i64,
                                            (double *)&v138,
                                            2u,
                                            v116,
                                            0,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v115 = 904;
LABEL_157:
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeTimingFunction, v115);
                      goto LABEL_56;
                    }
                  }
                }
                else
                {
                  if ( (v56 & 1) != 0 )
                  {
                    si128 = 0LL;
                    *(double *)&v138 = (double)(v50 - v135);
                    *((double *)&v138 + 1) = (double)(v55 - v45);
                  }
                  v71 = v152;
                  if ( v121 )
                  {
                    v112 = v147 + *(double *)&si128.m128i_i64[v152];
                    v147 = 0.0;
                    *(double *)&si128.m128i_i64[v152] = v112;
                  }
                  if ( v122 )
                  {
                    v113 = *((double *)&v138 + v71) + v146;
                    v146 = *((double *)&v138 + v71);
                    *((double *)&v138 + v71) = v113;
                  }
                  v5 = v130;
                  v6 = v129;
                  v72 = v131;
                  v13 = v125;
                  ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                          (__int64)v131,
                                          *((struct IUIAnimationStoryboard2 **)v130 + 4),
                                          *((_DWORD *)v130 + 4),
                                          v125,
                                          0,
                                          v35,
                                          v36,
                                          (double *)si128.m128i_i64,
                                          (double *)&v138,
                                          2u,
                                          v129,
                                          0,
                                          (double *)((unsigned __int64)&v147 & -(__int64)v121),
                                          (double *)((unsigned __int64)&v146 & -(__int64)v122),
                                          v71);
                  ThemeAnimationTransform = ThemeTimingFunction;
                  if ( ThemeTimingFunction < 0 )
                  {
                    v115 = 834;
                    goto LABEL_157;
                  }
                  if ( v123 )
                  {
                    for ( j = 0LL; j < 4; ++j )
                      *((double *)v168 + j) = (double)*((int *)&v161 + j);
                    for ( k = 0LL; k < 4; ++k )
                      *((double *)v167 + k) = (double)*((int *)&v162 + k);
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            (__int64)v72,
                                            *((struct IUIAnimationStoryboard2 **)v5 + 4),
                                            *((_DWORD *)v5 + 4),
                                            v125,
                                            6,
                                            v35,
                                            v36,
                                            (double *)v168,
                                            (double *)v167,
                                            4u,
                                            v6,
                                            0,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v115 = 855;
                      goto LABEL_157;
                    }
                  }
                }
                v27 = v124;
              }
            }
            v125 = ++v13;
            if ( v13 >= *((_DWORD *)v5 + 5) )
              goto LABEL_55;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x28Bu);
LABEL_55:
          if ( v7 )
LABEL_56:
            (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v7);
LABEL_57:
          if ( v129 )
            (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
        }
      }
    }
  }
  if ( v141 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v141->lpVtbl->Release)(v141);
  return ThemeAnimationTransform;
}
