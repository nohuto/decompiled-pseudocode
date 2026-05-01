/*
 * XREFs of ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18043761C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_751d5c2eb760f3feee04107585bbd528___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke @ 0x180436570 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180436570.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnControlCenterVisibilityChanged(
        CToastCenterExperienceManager *this,
        char a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r9
  struct wil::details::IFunctorHost *v6; // r8
  _QWORD v8[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-9h] BYREF
  struct DiagnosticsInfo v10; // [rsp+40h] [rbp+7h] BYREF
  const char *v11; // [rsp+48h] [rbp+Fh]
  __int64 v12; // [rsp+50h] [rbp+17h]
  __int16 v13; // [rsp+58h] [rbp+1Fh]
  _BYTE v14[8]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+74h] [rbp+3Bh]
  struct DiagnosticsInfo retaddr; // [rsp+98h] [rbp+5Fh]
  char v18; // [rsp+A8h] [rbp+6Fh] BYREF

  v18 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v8[0] = this;
  v8[1] = &v18;
  v10 = retaddr;
  v11 = "pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp";
  v12 = 0LL;
  v13 = 480;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    1u,
    3u,
    v5);
  v9[0] = &off_1807D4B50;
  v9[1] = v8;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v14, 29702941, &v10);
  wil::details::RunFunctor((wil::details *)v9, (struct wil::details::IFunctor *)v14, v6);
  if ( v15 )
    *(_DWORD *)(v15 + 16) = v16;
  return 0LL;
}
