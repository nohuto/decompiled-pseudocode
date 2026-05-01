/*
 * XREFs of _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x18004F828
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::Run @ 0x18004F7A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___--Run.c)
 * Callees:
 *     ?ContinueOnCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001D128 (-ContinueOnCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1800253E8 (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004F960 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QE.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x18004FB74 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1803A4DBC (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_201adf67891f12ccd8a16b46f471aeff_::operator()(_QWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v6[24]; // [rsp+50h] [rbp-38h] BYREF
  int v7; // [rsp+68h] [rbp-20h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 120LL) + 48LL))(*(_QWORD *)(a1[1] + 120LL), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationStateBugFix>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetImpl'::`2'::impl,
    v2);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(a1[1] + 104LL) + 208LL))(
    **(_QWORD **)(a1[1] + 104LL),
    *(_QWORD *)(a1[1] + 128LL),
    0LL);
  CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
    (CFrameApplicationPresentation::PresentedWindow *)(a1[1] + 64LL),
    (struct CFrameApplicationPresentation *)a1[1],
    0LL,
    **(_QWORD **)(a1[1] + 112LL));
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v3 = *(_DWORD *)(a1[1] + 48LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids, v4, v3);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*(HWND *)(a1[1] + 128LL), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible((CFrameApplicationPresentation *)a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 2, 0LL);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v5);
}
