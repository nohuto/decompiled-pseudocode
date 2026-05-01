/*
 * XREFs of ?subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18014FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *this,
        struct IServiceProvider *a2)
{
  struct wil::details::IFunctorHost *v2; // r8
  _QWORD v3[2]; // [rsp+20h] [rbp-68h] BYREF
  struct DiagnosticsInfo v4; // [rsp+30h] [rbp-58h] BYREF
  const char *v5; // [rsp+38h] [rbp-50h]
  __int64 v6; // [rsp+40h] [rbp-48h]
  __int16 v7; // [rsp+48h] [rbp-40h]
  _BYTE v8[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+64h] [rbp-24h]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+0h]
  char *v12; // [rsp+90h] [rbp+8h] BYREF

  v12 = (char *)this - 8;
  v4 = retaddr;
  v5 = "pcshell\\twinui\\penworkspace\\broker\\lib\\penmenusystemtraymanager.cpp";
  v6 = 0LL;
  v7 = 58;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
    a2);
  v3[0] = &wil::details::functor_wrapper_void<_lambda_9102ab066cd0787a9c4c0ffcea2bf645_ &>::`vftable';
  v3[1] = &v12;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v8, 29702103, &v4);
  wil::details::RunFunctor((wil::details *)v3, (struct wil::details::IFunctor *)v8, v2);
  if ( v9 )
    *(_DWORD *)(v9 + 16) = v10;
}
