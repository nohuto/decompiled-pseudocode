/*
 * XREFs of ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C8B80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180044B20 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke(
        CreativeFramework::Actions::PinWebsiteToTaskbarService *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v6; // r8
  _QWORD v7[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v9; // [rsp+48h] [rbp-38h]
  void **v10; // [rsp+50h] [rbp-30h] BYREF
  struct wil::details_abi::ThreadLocalData *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  _QWORD *v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h]
  CreativeFramework::Actions::PinWebsiteToTaskbarService *v17; // [rsp+90h] [rbp+10h] BYREF

  v17 = this;
  v8[0] = retaddr;
  v8[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v8[2] = "Invoke";
  v9 = 127;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    1u,
    1u,
    a4);
  v7[0] = &wil::details::functor_wrapper_void<_lambda_62158d46a05af21ae3d227fe228597be_ &>::`vftable';
  v7[1] = &v17;
  v10 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v11 = ThreadLocalDataCache;
  v12 = 0;
  v13 = 0;
  if ( ThreadLocalDataCache )
  {
    v13 = *((_DWORD *)ThreadLocalDataCache + 4);
    v12 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v12;
  }
  v14 = v8;
  v15 = 11790758;
  wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)&v10, v6);
  if ( v11 )
    *((_DWORD *)v11 + 4) = v13;
}
