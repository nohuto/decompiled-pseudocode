/*
 * XREFs of ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800B63A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18002AFCC (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003F750 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8A28 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall CreativeFramework::Actions::MakePinWebsiteToTaskbarService(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct wil::details::IFunctorHost *v5; // r8
  __int128 v7; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-11h] BYREF
  struct DiagnosticsInfo v9; // [rsp+50h] [rbp+7h] BYREF
  const char *v10; // [rsp+58h] [rbp+Fh]
  const char *v11; // [rsp+60h] [rbp+17h]
  __int16 v12; // [rsp+68h] [rbp+1Fh]
  _BYTE v13[8]; // [rsp+70h] [rbp+27h] BYREF
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+3Bh]
  struct DiagnosticsInfo retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v17; // [rsp+B0h] [rbp+67h] BYREF

  v17 = a3;
  v9 = retaddr;
  v10 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v11 = "MakePinWebsiteToTaskbarService";
  v12 = 140;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v7 = 0LL;
  v8[0] = off_1800EAC08;
  v8[1] = &v17;
  v8[2] = &v7;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v13, 11790758, &v9);
  wil::details::RunFunctor((wil::details *)v8, (struct wil::details::IFunctor *)v13, v5);
  if ( v14 )
    *(_DWORD *)(v14 + 16) = v15;
  *a1 = v7;
  return a1;
}
