/*
 * XREFs of ?SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJE@Z @ 0x18014FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::SetPenMenuVisibility(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *this,
        __int64 a2)
{
  struct wil::details::IFunctorHost *v2; // r8
  _QWORD v4[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-68h] BYREF
  struct DiagnosticsInfo v6; // [rsp+40h] [rbp-58h] BYREF
  const char *v7; // [rsp+48h] [rbp-50h]
  __int64 v8; // [rsp+50h] [rbp-48h]
  __int16 v9; // [rsp+58h] [rbp-40h]
  _BYTE v10[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+74h] [rbp-24h]
  struct DiagnosticsInfo retaddr; // [rsp+98h] [rbp+0h]
  char v14; // [rsp+A8h] [rbp+10h] BYREF

  v14 = a2;
  v4[0] = this;
  v4[1] = &v14;
  v6 = retaddr;
  v7 = "pcshell\\twinui\\penworkspace\\broker\\lib\\penmenusystemtraymanager.cpp";
  v8 = 0LL;
  v9 = 91;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
    a2);
  v5[0] = &wil::details::functor_wrapper_void<_lambda_ef4795d9d67b2631c82caa1661802619_ &>::`vftable';
  v5[1] = v4;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v10, 29702103, &v6);
  wil::details::RunFunctor((wil::details *)v5, (struct wil::details::IFunctor *)v10, v2);
  if ( v11 )
    *(_DWORD *)(v11 + 16) = v12;
  return 0LL;
}
