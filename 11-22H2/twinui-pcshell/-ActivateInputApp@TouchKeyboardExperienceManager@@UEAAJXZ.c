/*
 * XREFs of ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18050D570
 * Callers:
 *     _lambda_251c98e664c8db8f4dd28d1d1fb5cd17_::operator() @ 0x180206FD0 (_lambda_251c98e664c8db8f4dd28d1d1fb5cd17_--operator().c)
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?is_running@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x1801BEAF4 (-is_running@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?complete@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ @ 0x18020C3B4 (-complete@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x1804F6CEC (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??$?0$$V@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180507D28 (--$-0$$V@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integral_constant@D$0A.c)
 *     ??1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C350 (--1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?ActivationSkipped@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18050D814 (-ActivationSkipped@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18050FEF8 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     ?Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1805178A8 (-Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?close@?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ @ 0x18051CC14 (-close@-$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18051CD38 (-ensure_data@-$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV-$sh.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ActivateInputApp(TouchKeyboardExperienceManager *this, char a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  char v9; // r15
  char v10; // al
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  char *v17; // r14
  int DefautInputAppIdAndContinue; // eax
  int v19; // ebx
  int v21[4]; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  std::_Ref_count_base *v25; // [rsp+50h] [rbp-B8h]
  char v26; // [rsp+58h] [rbp-B0h]
  _QWORD v27[3]; // [rsp+68h] [rbp-A0h] BYREF
  char v28; // [rsp+80h] [rbp-88h]
  char *v29; // [rsp+88h] [rbp-80h]
  _QWORD *v30; // [rsp+A0h] [rbp-68h]
  __int128 v31; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v32[320]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::ActivateInputApp((__int64)v32, a2);
  v3 = 0;
  if ( *((_BYTE *)this + 813) )
  {
    v4 = *((_QWORD *)this + 247);
    if ( v4 && tip::details::test_common_data<0>::is_running(v4 + 8) )
    {
      v5 = tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data((char *)this + 1976);
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v24 = *(_QWORD *)v5;
      v25 = *(std::_Ref_count_base **)(v5 + 8);
      tip::details::test_common_data<0>::begin_update(v24 + 8);
      v7 = v24 + 200;
      if ( !v24 )
        v7 = 24LL;
      *(_BYTE *)v7 = 1;
      tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::close(&v24);
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete((__int64 *)this + 247);
    }
    v8 = L"SkippedDuringConnectedStandby";
LABEL_30:
    TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::Stop(
      (TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v32,
      v8);
    goto LABEL_31;
  }
  v9 = 0;
  v10 = *((_BYTE *)this + 812);
  *((_BYTE *)this + 812) = 1;
  if ( v10 )
  {
    TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::ActivationSkipped((TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v32);
    v9 = 1;
LABEL_28:
    v8 = L"SkippedDuringAnotherActivation";
    if ( !v9 )
      v8 = L"Activated";
    goto LABEL_30;
  }
  v11 = (_QWORD *)((char *)this + 1976);
  v12 = *((_QWORD *)this + 247);
  if ( v12 && tip::details::test_common_data<0>::is_running(v12 + 8) )
  {
    v13 = tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data((char *)this + 1976);
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v22 = *(_QWORD *)v13;
    v23 = *(std::_Ref_count_base **)(v13 + 8);
    tip::details::test_common_data<0>::begin_update(v22 + 8);
    v15 = v22 + 197;
    if ( !v22 )
      v15 = 21LL;
    *(_BYTE *)v15 = 1;
    tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::close(&v22);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
    tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete((__int64 *)this + 247);
  }
  if ( *v11 && tip::details::test_common_data<0>::has_ever_started(*v11 + 8LL) )
    std::shared_ptr<PeoplePaneViewInfo>::reset((_QWORD *)this + 247);
  v16 = (_QWORD *)tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data((char *)this + 1976);
  tip::details::test_common_data<0>::start(*v16 + 8LL, &v31);
  v17 = (char *)this - 200;
  *(_QWORD *)v21 = TouchKeyboardExperienceManager::OnInputAppChangeApproved;
  v21[2] = 0;
  v27[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (TouchKeyboardExperienceManager::*)(unsigned short const *),TouchKeyboardExperienceManager *,std::_Ph<1> const &>,long,unsigned short const *>::`vftable';
  *(_OWORD *)&v27[1] = *(_OWORD *)v21;
  v28 = v26;
  v29 = v17;
  v30 = v27;
  DefautInputAppIdAndContinue = TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue(v17, v27);
  v19 = DefautInputAppIdAndContinue;
  if ( DefautInputAppIdAndContinue >= 0 )
    goto LABEL_28;
  v17[1012] = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2CF,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)DefautInputAppIdAndContinue);
  v3 = v19;
LABEL_31:
  TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::~ActivateInputApp((TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v32);
  return v3;
}
