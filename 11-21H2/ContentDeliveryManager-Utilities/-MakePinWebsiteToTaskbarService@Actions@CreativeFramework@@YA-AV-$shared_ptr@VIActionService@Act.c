/*
 * XREFs of ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800C8E50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180044B20 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall CreativeFramework::Actions::MakePinWebsiteToTaskbarService(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details_abi *v5; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v7; // r8
  __int128 v9; // [rsp+28h] [rbp-21h] BYREF
  void **v10; // [rsp+38h] [rbp-11h] BYREF
  struct wil::details_abi::ThreadLocalData *v11; // [rsp+40h] [rbp-9h]
  int v12; // [rsp+48h] [rbp-1h]
  int v13; // [rsp+4Ch] [rbp+3h]
  _QWORD *v14; // [rsp+50h] [rbp+7h]
  int v15; // [rsp+58h] [rbp+Fh]
  _QWORD v16[3]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v17[3]; // [rsp+78h] [rbp+2Fh] BYREF
  __int16 v18; // [rsp+90h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v20; // [rsp+B0h] [rbp+67h] BYREF

  v20 = a3;
  v17[0] = retaddr;
  v17[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v17[2] = "MakePinWebsiteToTaskbarService";
  v18 = 141;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v9 = 0LL;
  v16[0] = &off_180108030;
  v16[1] = &v20;
  v16[2] = &v9;
  v10 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v5) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v5);
  v11 = ThreadLocalDataCache;
  v12 = 0;
  v13 = 0;
  if ( ThreadLocalDataCache )
  {
    v13 = *((_DWORD *)ThreadLocalDataCache + 4);
    v12 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v12;
  }
  v14 = v17;
  v15 = 11790758;
  wil::details::RunFunctor((wil::details *)v16, (struct wil::details::IFunctor *)&v10, v7);
  if ( v11 )
    *((_DWORD *)v11 + 4) = v13;
  *a1 = v9;
  v9 = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v9);
  return a1;
}
