/*
 * XREFs of ?subscribe_to_services@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180105E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018F8E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     ?UpdateMonitorInfoCollectionAsync@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x1801F262C (-UpdateMonitorInfoCollectionAsync@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *this,
        struct IServiceProvider *a2)
{
  char *v2; // rbx
  struct wil::details::IFunctorHost *v3; // r8
  _QWORD v4[2]; // [rsp+20h] [rbp-68h] BYREF
  struct DiagnosticsInfo v5; // [rsp+30h] [rbp-58h] BYREF
  const char *v6; // [rsp+38h] [rbp-50h]
  __int64 v7; // [rsp+40h] [rbp-48h]
  __int16 v8; // [rsp+48h] [rbp-40h]
  _BYTE v9[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+64h] [rbp-24h]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+0h]
  char v13; // [rsp+90h] [rbp+8h] BYREF
  char *v14; // [rsp+A0h] [rbp+18h] BYREF

  v2 = (char *)this - 8;
  v14 = (char *)this - 8;
  v5 = retaddr;
  v6 = "pcshell\\twinui\\penworkspace\\broker\\lib\\penmenusystemtraymanager.cpp";
  v7 = 0LL;
  v8 = 59;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
    a2);
  v4[0] = &wil::details::functor_wrapper_void<_lambda_9102ab066cd0787a9c4c0ffcea2bf645_ &>::`vftable';
  v4[1] = &v14;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v9, 0x1C537D7u, &v5);
  wil::details::RunFunctor((wil::details *)v4, (struct wil::details::IFunctor *)v9, v3);
  if ( v10 )
    *(_DWORD *)(v10 + 16) = v11;
  winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync(v2, &v13);
}
