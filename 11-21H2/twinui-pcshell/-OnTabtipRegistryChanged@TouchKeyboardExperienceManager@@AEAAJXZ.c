/*
 * XREFs of ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E6800
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_8cedb9df0602012a21579c604578dc5c__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18045B880 (wistd--__function--__func__lambda_8cedb9df0602012a21579c604578dc5c__void___cdecl(en_ea_18045B880.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18008A918 (-UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV-$basic_.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardTheming@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E5198 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardTheming@@@details@wil@@QEAAX.c)
 *     ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x1800E6160 (-UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1800E6510 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardPersonalization@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180152A68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardPersonalization@@@details@wi.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x180457A88 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 */

// Hidden C++ exception states: #wind=32
__int64 __fastcall TouchKeyboardExperienceManager::OnTabtipRegistryChanged(TouchKeyboardExperienceManager *this)
{
  bool v2; // bl
  __int64 v3; // rcx
  signed int v4; // r14d
  char v5; // r15
  int v6; // edi
  LSTATUS ValueW; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // r9
  char v14; // r12
  __int64 v15; // r8
  __int64 v16; // r9
  int DWORD; // eax
  char v18; // cl
  int v19; // eax
  char v20; // cl
  BOOL v21; // ebx
  LSTATUS v22; // eax
  unsigned int v23; // r8d
  KeyboardHosting::TabTipAdapter *v24; // rdi
  const WCHAR *v25; // rax
  HSTRING v26; // rbx
  int v27; // eax
  int v28; // eax
  char v29; // cl
  __int64 v30; // r8
  __int64 v31; // r9
  char **v32; // rax
  char **v33; // rax
  char **v34; // rax
  char **v35; // rax
  const unsigned __int16 *v36; // rdx
  bool v38; // zf
  bool v39; // zf
  char v40; // cl
  _WORD *v41; // r9
  unsigned int v42; // r8d
  unsigned int v43; // r8d
  KeyboardHosting::TabTipAdapter *v44; // rdi
  const WCHAR *v45; // rax
  HSTRING v46; // rbx
  int v47; // eax
  DWORD v48; // r8d
  char v49; // al
  _WORD *v50; // r9
  unsigned int v51; // r8d
  KeyboardHosting::TabTipAdapter *v52; // rdi
  const WCHAR *v53; // rax
  HSTRING v54; // rbx
  int v55; // eax
  KeyboardHosting::TabTipAdapter *v56; // rdi
  HSTRING v57; // rbx
  int v58; // eax
  DWORD v59; // r8d
  char v60; // al
  _WORD *v61; // r9
  unsigned int v62; // r8d
  KeyboardHosting::TabTipAdapter *v63; // rdi
  const WCHAR *v64; // rax
  HSTRING v65; // rbx
  int v66; // eax
  KeyboardHosting::TabTipAdapter *v67; // rdi
  HSTRING v68; // rbx
  int v69; // eax
  unsigned __int64 v70; // rdx
  PVOID *v71; // rax
  PVOID *v72; // rax
  unsigned __int64 v73; // rdx
  PVOID *v74; // rax
  PVOID *v75; // rbx
  unsigned int v76; // r8d
  KeyboardHosting::TabTipAdapter *v77; // rdi
  HSTRING v78; // rbx
  int v79; // eax
  char v80; // dl
  DWORD v81; // r8d
  char v82; // cl
  char v83; // al
  _WORD *v84; // r9
  _WORD *v85; // r9
  DWORD v86; // r8d
  unsigned int v87; // r8d
  KeyboardHosting::TabTipAdapter *v88; // rdi
  const WCHAR *p_hstringHeader; // rax
  HSTRING v90; // rbx
  unsigned int v91; // r8d
  const WCHAR *v92; // rax
  __int64 v93; // rax
  int v94; // eax
  unsigned int v95; // r8d
  KeyboardHosting::TabTipAdapter *v96; // rdi
  const WCHAR *Reserved1; // rax
  HSTRING v98; // rbx
  unsigned int v99; // r8d
  PVOID *v100; // rax
  __int64 v101; // rax
  int v102; // eax
  KeyboardHosting::TabTipAdapter *v103; // rdi
  unsigned int v104; // r8d
  HSTRING v105; // rbx
  const WCHAR *v106; // rax
  __int64 v107; // rax
  int v108; // eax
  KeyboardHosting::TabTipAdapter *v109; // rdi
  unsigned int v110; // r8d
  HSTRING v111; // rbx
  PVOID *v112; // rax
  __int64 v113; // rax
  int v114; // eax
  KeyboardHosting::TabTipAdapter *v115; // rdi
  unsigned int v116; // r8d
  HSTRING v117; // rbx
  const WCHAR *v118; // rax
  __int64 v119; // rax
  int v120; // eax
  KeyboardHosting::TabTipAdapter *v121; // rdi
  unsigned int v122; // r8d
  HSTRING v123; // rbx
  PVOID *v124; // rax
  __int64 v125; // rax
  int v126; // eax
  char v127; // dl
  DWORD v128; // r8d
  char v129; // cl
  char v130; // al
  _WORD *v131; // r9
  _WORD *v132; // r9
  DWORD v133; // r8d
  unsigned int v134; // r8d
  KeyboardHosting::TabTipAdapter *v135; // rdi
  const WCHAR *v136; // rax
  HSTRING v137; // rbx
  unsigned int v138; // r8d
  PVOID *v139; // rax
  __int64 v140; // rax
  int v141; // eax
  unsigned int v142; // r8d
  KeyboardHosting::TabTipAdapter *v143; // rdi
  const WCHAR *v144; // rax
  HSTRING v145; // rbx
  unsigned int v146; // r8d
  const WCHAR *v147; // rax
  __int64 v148; // rax
  int v149; // eax
  KeyboardHosting::TabTipAdapter *v150; // rdi
  unsigned int v151; // r8d
  HSTRING v152; // rbx
  PVOID *v153; // rax
  __int64 v154; // rax
  int v155; // eax
  KeyboardHosting::TabTipAdapter *v156; // rdi
  unsigned int v157; // r8d
  HSTRING v158; // rbx
  const WCHAR *v159; // rax
  __int64 v160; // rax
  int v161; // eax
  KeyboardHosting::TabTipAdapter *v162; // rdi
  unsigned int v163; // r8d
  HSTRING v164; // rbx
  PVOID *v165; // rax
  __int64 v166; // rax
  int v167; // eax
  KeyboardHosting::TabTipAdapter *v168; // rdi
  unsigned int v169; // r8d
  HSTRING v170; // rbx
  const WCHAR *v171; // rax
  __int64 v172; // rax
  int v173; // eax
  KeyboardHosting::TabTipAdapter *v174; // rdi
  HSTRING v175; // rbx
  int v176; // eax
  DWORD v177[2]; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *pcbData; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pdwType; // [rsp+58h] [rbp-B0h] BYREF
  char v180; // [rsp+5Ch] [rbp-ACh] BYREF
  bool v181; // [rsp+5Dh] [rbp-ABh] BYREF
  DWORD pvData[2]; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v184; // [rsp+80h] [rbp-88h]
  PVOID v185[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v186; // [rsp+98h] [rbp-70h]
  unsigned __int64 v187; // [rsp+A0h] [rbp-68h]
  _QWORD v188[3]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v189; // [rsp+C0h] [rbp-48h]
  HSTRING_HEADER v190; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING v191; // [rsp+E0h] [rbp-28h]
  _QWORD v192[5]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v193[6]; // [rsp+112h] [rbp+Ah] BYREF
  _QWORD v194[5]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v195[6]; // [rsp+142h] [rbp+3Ah] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  if ( !*((_QWORD *)this + 92) )
    return 0LL;
  v2 = 0;
  pvData[0] = 0;
  pvData[1] = 4;
  LOWORD(v4) = 13;
  v5 = 1;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
          L"EnableDesktopModeAutoInvoke",
          0x10u,
          0LL,
          pvData,
          &pvData[1])
    || (pvData[1] = 4,
        !RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
           L"EnableDesktopModeAutoInvoke",
           0x10u,
           0LL,
           pvData,
           &pvData[1])) )
  {
    v2 = pvData[0] != 0;
    goto LABEL_9;
  }
  v6 = 0;
  pdwType = 0;
  LODWORD(pcbData) = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleSlateModeChanged",
             L"ConvertibleSlateModeChanged",
             0x10000012u,
             &pdwType,
             v177,
             (LPDWORD)&pcbData);
  v3 = (unsigned int)ValueW;
  if ( !ValueW )
  {
    LOWORD(v3) = 13;
    if ( pdwType == 4 )
    {
      v38 = v177[0] == 1;
      if ( v177[0] > 1 )
        goto LABEL_7;
    }
    else
    {
      if ( (_DWORD)pcbData != 4 || (unsigned __int16)(LOWORD(v177[0]) - 48) > 1u )
        goto LABEL_7;
      v38 = LOWORD(v177[0]) == 49;
    }
    v3 = 0LL;
    LOBYTE(v6) = v38;
    goto LABEL_8;
  }
  if ( ValueW == 234 )
  {
    LOWORD(v3) = 13;
    goto LABEL_7;
  }
  if ( ValueW > 0 )
LABEL_7:
    v3 = (unsigned __int16)v3 | 0x80070000;
LABEL_8:
  if ( (int)v3 >= 0 && v6 )
    v2 = 1;
LABEL_9:
  v8 = *((_QWORD *)this + 92);
  *(_BYTE *)(v8 + 349) = v2;
  *(_BYTE *)(*(_QWORD *)(v8 + 112) + 510LL) = v2;
  v10 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                    v3,
                    _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u && tlgKeywordOn((__int64)v10, 16LL) )
  {
    v180 = 0;
    v181 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v12,
      (int)&unk_1806BCED0,
      v11,
      v13,
      (__int64)&v181,
      (__int64)&v180);
  }
  LOBYTE(v11) = 3;
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardPersonalization>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardPersonalization>::GetImpl'::`2'::impl,
    v9,
    v11);
  v14 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardTheming>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardTheming>::GetImpl'::`2'::impl,
    1u,
    v15,
    v16);
  v177[0] = 0;
  DWORD = SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"KeyboardTheme_Updating", v177);
  v18 = *((_BYTE *)this + 1227);
  if ( DWORD >= 0 )
  {
    if ( !v18 || (v40 = 0, v177[0] != *((_DWORD *)this + 305)) )
      v40 = 1;
    if ( v40 && v177[0] <= 1 )
    {
      if ( v177[0] == 1 )
      {
        v41 = v193;
        v42 = 1;
        do
        {
          *--v41 = v42 % 0xA + 48;
          v42 /= 0xAu;
        }
        while ( v42 );
        std::wstring::wstring(v188, v41, v193);
        v44 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
        v45 = (const WCHAR *)v188;
        if ( v189 >= 8 )
          v45 = (const WCHAR *)v188[0];
        pcbData = v45;
        v46 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v43)
                         + 24);
        v184 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"KeyboardTheme_Updating",
          0x17u,
          0x16u);
        v47 = KeyboardHosting::TabTipAdapter::SetShellPreference(v44, v184, v46);
        if ( v47 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x13D5,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v47);
        *((_DWORD *)this + 305) = v177[0];
        std::wstring::_Tidy_deallocate((__int64)v188);
      }
      else
      {
        v14 = 1;
      }
      *((_BYTE *)this + 1227) = 1;
    }
  }
  else if ( v18 && *((_DWORD *)this + 305) == 1 )
  {
    v14 = 1;
    *((_BYTE *)this + 1227) = 0;
  }
  v177[0] = 0;
  v19 = SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"UserKeyboardScalingFactor", v177);
  v20 = *((_BYTE *)this + 1208);
  if ( v19 >= 0 )
  {
    v48 = v177[0];
    if ( !v20 || (v49 = 0, v177[0] != *((_DWORD *)this + 303)) )
      v49 = 1;
    if ( v49 && v177[0] - 1 <= 0x3E7 )
    {
      v50 = v193;
      do
      {
        *--v50 = v48 % 0xA + 48;
        v48 /= 0xAu;
      }
      while ( v48 );
      std::wstring::wstring(v188, v50, v193);
      v52 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
      v53 = (const WCHAR *)v188;
      if ( v189 >= 8 )
        v53 = (const WCHAR *)v188[0];
      pcbData = v53;
      v54 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v51) + 24);
      v184 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"UserKeyboardScalingFactor",
        0x1Au,
        0x19u);
      v55 = KeyboardHosting::TabTipAdapter::SetShellPreference(v52, v184, v54);
      if ( v55 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13F5,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v55);
      *((_DWORD *)this + 303) = v177[0];
      *((_BYTE *)this + 1208) = 1;
      std::wstring::_Tidy_deallocate((__int64)v188);
    }
  }
  else if ( v20 )
  {
    v56 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v57 = v184;
    v191 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v190, L"UserKeyboardScalingFactor", 0x1Au, 0x19u);
    v58 = KeyboardHosting::TabTipAdapter::SetShellPreference(v56, v191, v57);
    if ( v58 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13FC,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v58);
    *((_DWORD *)this + 303) = 0;
    *((_BYTE *)this + 1208) = 0;
  }
  v21 = 0;
  LODWORD(pcbData) = 0;
  pdwType = 4;
  v22 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
          L"IsKeyBackgroundEnabled",
          0x10000012u,
          (LPDWORD)&pcbData,
          v177,
          &pdwType);
  if ( v22 )
  {
    if ( v22 == 234 )
      goto LABEL_19;
    v4 = v22;
    if ( v22 > 0 )
      goto LABEL_19;
  }
  else
  {
    if ( (_DWORD)pcbData == 4 )
    {
      v39 = v177[0] == 1;
      if ( v177[0] > 1 )
      {
LABEL_19:
        v4 = (unsigned __int16)v4 | 0x80070000;
        goto LABEL_20;
      }
    }
    else
    {
      if ( pdwType != 4 || (unsigned __int16)(LOWORD(v177[0]) - 48) > 1u )
        goto LABEL_19;
      v39 = LOWORD(v177[0]) == 49;
    }
    v4 = 0;
    v21 = v39;
  }
LABEL_20:
  if ( v4 >= 0 )
    v5 = v21;
  if ( !*((_BYTE *)this + 1210) || v5 != *((_BYTE *)this + 1209) )
  {
    *((_BYTE *)this + 1209) = v5;
    *((_BYTE *)this + 1210) = 1;
    v24 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v25 = L"1";
    if ( !v5 )
      v25 = L"0";
    pcbData = v25;
    v26 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v23) + 24);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardTheme_IsKeyBackgroundEnabled",
      0x25u,
      0x24u);
    v27 = KeyboardHosting::TabTipAdapter::SetShellPreference(v24, v184, v26);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1410,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v27);
  }
  v177[0] = 0;
  v28 = SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"KeyLabelSize", v177);
  v29 = *((_BYTE *)this + 1225);
  if ( v28 >= 0 )
  {
    v59 = v177[0];
    if ( !v29 || (v60 = 0, v177[0] != *((_DWORD *)this + 304)) )
      v60 = 1;
    if ( v60 && v177[0] <= 2 )
    {
      v61 = v193;
      do
      {
        *--v61 = v59 % 0xA + 48;
        v59 /= 0xAu;
      }
      while ( v59 );
      std::wstring::wstring(v188, v61, v193);
      v63 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
      v64 = (const WCHAR *)v188;
      if ( v189 >= 8 )
        v64 = (const WCHAR *)v188[0];
      pcbData = v64;
      v65 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v62) + 24);
      v184 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"KeyboardTheme_KeyLabelSize",
        0x1Bu,
        0x1Au);
      v66 = KeyboardHosting::TabTipAdapter::SetShellPreference(v63, v184, v65);
      if ( v66 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1421,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v66);
      *((_DWORD *)this + 304) = v177[0];
      *((_BYTE *)this + 1225) = 1;
      std::wstring::_Tidy_deallocate((__int64)v188);
    }
  }
  else if ( v29 )
  {
    v67 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v68 = v184;
    v191 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v190, L"KeyboardTheme_KeyLabelSize", 0x1Bu, 0x1Au);
    v69 = KeyboardHosting::TabTipAdapter::SetShellPreference(v67, v191, v68);
    if ( v69 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1428,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v69);
    *((_DWORD *)this + 304) = 0;
    *((_BYTE *)this + 1225) = 0;
  }
  v177[0] = 0;
  v186 = 0LL;
  v187 = 7LL;
  LOWORD(v185[0]) = 0;
  if ( RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"SelectedThemeName", 2u, 0LL, 0LL, v177)
    || !v177[0] )
  {
    goto LABEL_227;
  }
  v70 = (unsigned __int64)v177[0] >> 1;
  if ( v70 > v186 )
  {
    std::wstring::append(v185, v70 - v186, 0LL);
  }
  else
  {
    v71 = v185;
    if ( v187 >= 8 )
      v71 = (PVOID *)v185[0];
    v186 = (unsigned __int64)v177[0] >> 1;
    *((_WORD *)v71 + v70) = 0;
  }
  v72 = v185;
  if ( v187 >= 8 )
    v72 = (PVOID *)v185[0];
  if ( RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"SelectedThemeName", 2u, 0LL, v72, v177) )
  {
LABEL_227:
    if ( !*((_QWORD *)this + 156) )
      goto LABEL_31;
    v75 = (PVOID *)((char *)this + 1232);
    goto LABEL_122;
  }
  v73 = (unsigned __int64)v177[0] >> 1;
  if ( v73 > v186 )
  {
    std::wstring::append(v185, v73 - v186, 0LL);
  }
  else
  {
    v74 = v185;
    if ( v187 >= 8 )
      v74 = (PVOID *)v185[0];
    v186 = (unsigned __int64)v177[0] >> 1;
    *((_WORD *)v74 + v73) = 0;
  }
  if ( v186 )
  {
    v75 = (PVOID *)((char *)this + 1232);
    if ( (unsigned int)std::wstring::compare(v185, (char *)this + 1232) )
    {
      if ( v75 == v185 )
      {
LABEL_123:
        v77 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
        if ( (unsigned __int64)v75[3] >= 8 )
          v75 = (PVOID *)*v75;
        pcbData = (const WCHAR *)v75;
        v78 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v76)
                         + 24);
        v184 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"KeyboardTheme_SelectedThemeName",
          0x20u,
          0x1Fu);
        v79 = KeyboardHosting::TabTipAdapter::SetShellPreference(v77, v184, v78);
        if ( v79 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x144F,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v79);
        goto LABEL_31;
      }
LABEL_122:
      std::wstring::assign(v75);
      goto LABEL_123;
    }
  }
LABEL_31:
  std::wstring::_Tidy_deallocate((__int64)v185);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardTheming>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardTheming>::GetImpl'::`2'::impl,
    1u,
    v30,
    v31);
  pdwType = 0;
  v177[0] = 0;
  v32 = (char **)std::wstring::wstring(&hstringHeader, L"KeyboardBackgroundImageOpacity");
  std::operator+<unsigned short>((__int64)v188, (char *)L"KeyboardTheme_Dark_", v32);
  std::wstring::_Tidy_deallocate((__int64)&hstringHeader);
  v33 = (char **)std::wstring::wstring(v194, L"KeyboardBackgroundImageOpacity");
  std::operator+<unsigned short>((__int64)v185, (char *)L"KeyboardTheme_Light_", v33);
  std::wstring::_Tidy_deallocate((__int64)v194);
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
              L"KeyboardBackgroundImageOpacity",
              &pdwType) < 0
    || (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
              L"KeyboardBackgroundImageOpacity",
              v177) < 0 )
  {
    if ( !*((_BYTE *)this + 1224) )
      goto LABEL_33;
    v115 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v117 = v184;
    v118 = (const WCHAR *)v188;
    if ( v189 >= 8 )
      v118 = (const WCHAR *)v188[0];
    pcbData = v118;
    v119 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v116);
    v120 = KeyboardHosting::TabTipAdapter::SetShellPreference(v115, *(HSTRING *)(v119 + 24), v117);
    if ( v120 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x134C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v120);
    v121 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v123 = v184;
    v124 = v185;
    if ( v187 >= 8 )
      v124 = (PVOID *)v185[0];
    pcbData = (const WCHAR *)v124;
    v125 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v122);
    v126 = KeyboardHosting::TabTipAdapter::SetShellPreference(v121, *(HSTRING *)(v125 + 24), v123);
    if ( v126 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x134D,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v126);
LABEL_174:
    *((_DWORD *)this + 400) = 0;
    *((_DWORD *)this + 510) = 0;
    *((_BYTE *)this + 1224) = 0;
    goto LABEL_33;
  }
  v80 = *((_BYTE *)this + 1224);
  v81 = pdwType;
  if ( !v80 || pdwType != *((_DWORD *)this + 400) || (v82 = 0, v177[0] != *((_DWORD *)this + 510)) )
    v82 = 1;
  if ( pdwType > 0x64 || (v83 = 1, v177[0] > 0x64) )
    v83 = 0;
  if ( !v82 )
  {
    if ( v83 )
      goto LABEL_33;
    goto LABEL_156;
  }
  if ( !v83 )
  {
LABEL_156:
    if ( !v80 )
      goto LABEL_33;
    v103 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v105 = v184;
    v106 = (const WCHAR *)v188;
    if ( v189 >= 8 )
      v106 = (const WCHAR *)v188[0];
    pcbData = v106;
    v107 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v104);
    v108 = KeyboardHosting::TabTipAdapter::SetShellPreference(v103, *(HSTRING *)(v107 + 24), v105);
    if ( v108 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1342,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v108);
    v109 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v111 = v184;
    v112 = v185;
    if ( v187 >= 8 )
      v112 = (PVOID *)v185[0];
    pcbData = (const WCHAR *)v112;
    v113 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v110);
    v114 = KeyboardHosting::TabTipAdapter::SetShellPreference(v109, *(HSTRING *)(v113 + 24), v111);
    if ( v114 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1343,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v114);
    goto LABEL_174;
  }
  v84 = v193;
  do
  {
    *--v84 = v81 % 0xA + 48;
    v81 /= 0xAu;
  }
  while ( v81 );
  std::wstring::wstring(&hstringHeader, v84, v193);
  v85 = v195;
  v86 = v177[0];
  do
  {
    *--v85 = v86 % 0xA + 48;
    v86 /= 0xAu;
  }
  while ( v86 );
  std::wstring::wstring(&v190, v85, v195);
  v88 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  p_hstringHeader = (const WCHAR *)&hstringHeader;
  if ( (unsigned __int64)v184 >= 8 )
    p_hstringHeader = (const WCHAR *)hstringHeader.Reserved.Reserved1;
  pcbData = p_hstringHeader;
  v90 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v87) + 24);
  v92 = (const WCHAR *)v188;
  if ( v189 >= 8 )
    v92 = (const WCHAR *)v188[0];
  pcbData = v92;
  v93 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v194, &pcbData, v91);
  v94 = KeyboardHosting::TabTipAdapter::SetShellPreference(v88, *(HSTRING *)(v93 + 24), v90);
  if ( v94 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x133A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v94);
  v96 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  Reserved1 = (const WCHAR *)&v190;
  if ( (unsigned __int64)v191 >= 8 )
    Reserved1 = (const WCHAR *)v190.Reserved.Reserved1;
  pcbData = Reserved1;
  v98 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v95) + 24);
  v100 = v185;
  if ( v187 >= 8 )
    v100 = (PVOID *)v185[0];
  pcbData = (const WCHAR *)v100;
  v101 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v194, &pcbData, v99);
  v102 = KeyboardHosting::TabTipAdapter::SetShellPreference(v96, *(HSTRING *)(v101 + 24), v98);
  if ( v102 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x133B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v102);
  *((_DWORD *)this + 400) = pdwType;
  *((_DWORD *)this + 510) = v177[0];
  *((_BYTE *)this + 1224) = 1;
  std::wstring::_Tidy_deallocate((__int64)&v190);
  std::wstring::_Tidy_deallocate((__int64)&hstringHeader);
LABEL_33:
  std::wstring::_Tidy_deallocate((__int64)v185);
  std::wstring::_Tidy_deallocate((__int64)v188);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"KeyboardBackgroundImagePath",
    (PVOID *)this + 205,
    (PVOID *)this + 260);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"KeyboardBackgroundSolidColor",
    (PVOID *)this + 179,
    (PVOID *)this + 234);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"AccentColor",
    (PVOID *)this + 196,
    (PVOID *)this + 251);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"KeyColor",
    (PVOID *)this + 170,
    (PVOID *)this + 225);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"SuggestionTextColor",
    (PVOID *)this + 166,
    (PVOID *)this + 221);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"KeyLabelColor",
    (PVOID *)this + 162,
    (PVOID *)this + 217);
  pdwType = 0;
  v177[0] = 0;
  v34 = (char **)std::wstring::wstring(v194, L"KeyTransparency");
  std::operator+<unsigned short>((__int64)v185, (char *)L"KeyboardTheme_Dark_", v34);
  std::wstring::_Tidy_deallocate((__int64)v194);
  v35 = (char **)std::wstring::wstring(v192, L"KeyTransparency");
  std::operator+<unsigned short>((__int64)v188, (char *)L"KeyboardTheme_Light_", v35);
  std::wstring::_Tidy_deallocate((__int64)v192);
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
              L"KeyTransparency",
              &pdwType) < 0
    || (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
              L"KeyTransparency",
              v177) < 0 )
  {
    if ( !*((_BYTE *)this + 1226) )
      goto LABEL_35;
    v162 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v164 = v184;
    v165 = v185;
    if ( v187 >= 8 )
      v165 = (PVOID *)v185[0];
    pcbData = (const WCHAR *)v165;
    v166 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v163);
    v167 = KeyboardHosting::TabTipAdapter::SetShellPreference(v162, *(HSTRING *)(v166 + 24), v164);
    if ( v167 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x134C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v167);
    v168 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v170 = v184;
    v171 = (const WCHAR *)v188;
    if ( v189 >= 8 )
      v171 = (const WCHAR *)v188[0];
    pcbData = v171;
    v172 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v169);
    v173 = KeyboardHosting::TabTipAdapter::SetShellPreference(v168, *(HSTRING *)(v172 + 24), v170);
    if ( v173 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x134D,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v173);
    goto LABEL_221;
  }
  v127 = *((_BYTE *)this + 1226);
  v128 = pdwType;
  if ( !v127 || pdwType != *((_DWORD *)this + 348) || (v129 = 0, v177[0] != *((_DWORD *)this + 458)) )
    v129 = 1;
  if ( pdwType > 0x64 || (v130 = 1, v177[0] > 0x64) )
    v130 = 0;
  if ( v129 )
  {
    if ( v130 )
    {
      v131 = v195;
      do
      {
        *--v131 = v128 % 0xA + 48;
        v128 /= 0xAu;
      }
      while ( v128 );
      std::wstring::wstring(&v190, v131, v195);
      v132 = v193;
      v133 = v177[0];
      do
      {
        *--v132 = v133 % 0xA + 48;
        v133 /= 0xAu;
      }
      while ( v133 );
      std::wstring::wstring(&hstringHeader, v132, v193);
      v135 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
      v136 = (const WCHAR *)&v190;
      if ( (unsigned __int64)v191 >= 8 )
        v136 = (const WCHAR *)v190.Reserved.Reserved1;
      pcbData = v136;
      v137 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v134)
                        + 24);
      v139 = v185;
      if ( v187 >= 8 )
        v139 = (PVOID *)v185[0];
      pcbData = (const WCHAR *)v139;
      v140 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v194, &pcbData, v138);
      v141 = KeyboardHosting::TabTipAdapter::SetShellPreference(v135, *(HSTRING *)(v140 + 24), v137);
      if ( v141 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x133A,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v141);
      v143 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
      v144 = (const WCHAR *)&hstringHeader;
      if ( (unsigned __int64)v184 >= 8 )
        v144 = (const WCHAR *)hstringHeader.Reserved.Reserved1;
      pcbData = v144;
      v145 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v142)
                        + 24);
      v147 = (const WCHAR *)v188;
      if ( v189 >= 8 )
        v147 = (const WCHAR *)v188[0];
      pcbData = v147;
      v148 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v194, &pcbData, v146);
      v149 = KeyboardHosting::TabTipAdapter::SetShellPreference(v143, *(HSTRING *)(v148 + 24), v145);
      if ( v149 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x133B,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v149);
      *((_DWORD *)this + 348) = pdwType;
      *((_DWORD *)this + 458) = v177[0];
      *((_BYTE *)this + 1226) = 1;
      std::wstring::_Tidy_deallocate((__int64)&hstringHeader);
      std::wstring::_Tidy_deallocate((__int64)&v190);
      goto LABEL_35;
    }
  }
  else if ( v130 )
  {
    goto LABEL_35;
  }
  if ( v127 )
  {
    v150 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v152 = v184;
    v153 = v185;
    if ( v187 >= 8 )
      v153 = (PVOID *)v185[0];
    pcbData = (const WCHAR *)v153;
    v154 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v151);
    v155 = KeyboardHosting::TabTipAdapter::SetShellPreference(v150, *(HSTRING *)(v154 + 24), v152);
    if ( v155 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1342,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v155);
    v156 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v158 = v184;
    v159 = (const WCHAR *)v188;
    if ( v189 >= 8 )
      v159 = (const WCHAR *)v188[0];
    pcbData = v159;
    v160 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v192, &pcbData, v157);
    v161 = KeyboardHosting::TabTipAdapter::SetShellPreference(v156, *(HSTRING *)(v160 + 24), v158);
    if ( v161 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1343,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v161);
LABEL_221:
    *((_DWORD *)this + 348) = 0;
    *((_DWORD *)this + 458) = 0;
    *((_BYTE *)this + 1226) = 0;
  }
LABEL_35:
  std::wstring::_Tidy_deallocate((__int64)v188);
  std::wstring::_Tidy_deallocate((__int64)v185);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"KeyboardBackgroundType",
    (PVOID *)this + 175,
    (PVOID *)this + 230);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"KeyboardBackgroundImageStretchType",
    (PVOID *)this + 201,
    (PVOID *)this + 256);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"KeyboardBackgroundGradientColorTop",
    (PVOID *)this + 183,
    (PVOID *)this + 238);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"KeyboardBackgroundGradientColorBottom",
    (PVOID *)this + 187,
    (PVOID *)this + 242);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesBool(
    (const WCHAR *)this,
    v36,
    (bool *)this + 1228,
    (bool *)this + 1528,
    (bool *)this + 1968);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"BorderColor",
    (PVOID *)this + 192,
    (PVOID *)this + 247);
  TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
    this,
    L"ThemeOverride",
    (PVOID *)this + 209,
    (PVOID *)this + 264);
  if ( v14 )
  {
    v174 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
    v184 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v175 = v184;
    v191 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v190, L"KeyboardTheme_Updating", 0x17u, 0x16u);
    v176 = KeyboardHosting::TabTipAdapter::SetShellPreference(v174, v191, v175);
    if ( v176 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14A3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v176);
    *((_DWORD *)this + 305) = 0;
  }
  return 0LL;
}
