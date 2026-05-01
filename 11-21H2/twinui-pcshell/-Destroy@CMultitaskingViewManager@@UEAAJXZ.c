/*
 * XREFs of ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x18005D470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180052C3C (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117C2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::Destroy(CMultitaskingViewManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  __int64 v4; // r8
  __int64 v5; // rdx
  struct wil::details::IFunctorHost *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 i; // rbx
  _QWORD v11[3]; // [rsp+20h] [rbp-29h] BYREF
  int v12; // [rsp+38h] [rbp-11h]
  struct DiagnosticsInfo v13; // [rsp+40h] [rbp-9h] BYREF
  const char *v14; // [rsp+48h] [rbp-1h]
  __int64 v15; // [rsp+50h] [rbp+7h]
  __int16 v16; // [rsp+58h] [rbp+Fh]
  _BYTE v17[8]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+74h] [rbp+2Bh]
  struct DiagnosticsInfo retaddr; // [rsp+A8h] [rbp+5Fh]
  CMultitaskingViewManager *v21; // [rsp+B0h] [rbp+67h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
  v11[2] = v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v2, 1LL);
  v12 = v3;
  v21 = this;
  v13 = retaddr;
  v14 = "pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp";
  v15 = 0LL;
  v16 = 511;
  LOBYTE(v4) = 3;
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
    v5,
    v4);
  v11[0] = &off_180646CF0;
  v11[1] = &v21;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v17, 0x1B71C3Eu, &v13);
  wil::details::RunFunctor((wil::details *)v11, (struct wil::details::IFunctor *)v17, v6);
  if ( v18 )
    *(_DWORD *)(v18 + 16) = v19;
  LOBYTE(v8) = 3;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
    v7,
    v8);
  if ( *((_QWORD *)this + 56) )
  {
    v21 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=((char *)this + 448, &v21);
    if ( v21 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  for ( i = *((_QWORD *)this + 37); i; CMultitaskingViewManager::_DestroyMTVHost(this, i) )
    --i;
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
