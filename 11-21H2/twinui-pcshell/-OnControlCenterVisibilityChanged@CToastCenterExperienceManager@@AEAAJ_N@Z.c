/*
 * XREFs of ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x180149520
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_ecba7abb6e149a1daef5bae68efd6426___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke @ 0x180196BD0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180196BD0.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnControlCenterVisibilityChanged(
        CToastCenterExperienceManager *this,
        __int64 a2)
{
  __int64 v3; // rdx
  struct wil::details::IFunctorHost *v4; // r8
  _QWORD v6[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-9h] BYREF
  struct DiagnosticsInfo v8; // [rsp+40h] [rbp+7h] BYREF
  const char *v9; // [rsp+48h] [rbp+Fh]
  __int64 v10; // [rsp+50h] [rbp+17h]
  __int16 v11; // [rsp+58h] [rbp+1Fh]
  _BYTE v12[8]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+3Bh]
  struct DiagnosticsInfo retaddr; // [rsp+98h] [rbp+5Fh]
  char v16; // [rsp+A8h] [rbp+6Fh] BYREF

  v16 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2);
  v6[0] = this;
  v6[1] = &v16;
  v8 = retaddr;
  v9 = "pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp";
  v10 = 0LL;
  v11 = 467;
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    v3);
  v7[0] = &off_180642848;
  v7[1] = v6;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v12, 29702941, &v8);
  wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)v12, v4);
  if ( v13 )
    *(_DWORD *)(v13 + 16) = v14;
  return 0LL;
}
