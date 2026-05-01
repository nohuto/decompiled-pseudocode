/*
 * XREFs of ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x1801ACCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x18004C3A4 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106354 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::Destroy(CMultitaskingViewManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  __int64 v4; // r8
  __int64 v5; // r9
  struct wil::details::IFunctorHost *v6; // r8
  unsigned __int64 i; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-29h] BYREF
  int v10; // [rsp+38h] [rbp-11h]
  struct DiagnosticsInfo v11; // [rsp+40h] [rbp-9h] BYREF
  const char *v12; // [rsp+48h] [rbp-1h]
  __int64 v13; // [rsp+50h] [rbp+7h]
  __int16 v14; // [rsp+58h] [rbp+Fh]
  _BYTE v15[8]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+2Bh]
  struct DiagnosticsInfo retaddr; // [rsp+A8h] [rbp+5Fh]
  CMultitaskingViewManager *v19; // [rsp+B0h] [rbp+67h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
  v9[2] = v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v10 = v3;
  v19 = this;
  v11 = retaddr;
  v12 = "pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp";
  v13 = 0LL;
  v14 = 524;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  v9[0] = off_1807E2798;
  v9[1] = &v19;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v15, 28777534, &v11);
  wil::details::RunFunctor((wil::details *)v9, (struct wil::details::IFunctor *)v15, v6);
  if ( v16 )
    *(_DWORD *)(v16 + 16) = v17;
  v19 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (CMultitaskingViewManager *)((char *)this + 456),
    (winrt::Windows::Foundation::IUnknown *)&v19);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  for ( i = *((_QWORD *)this + 38); i; CMultitaskingViewManager::_DestroyMTVHost(this, i) )
    --i;
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
