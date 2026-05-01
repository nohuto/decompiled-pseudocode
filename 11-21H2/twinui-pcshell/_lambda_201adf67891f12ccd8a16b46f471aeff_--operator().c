/*
 * XREFs of _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x180137198
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::Run @ 0x180137110 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801372D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@details@wil@@QE.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x180137354 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x180137454 (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013751C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1802EC594 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_201adf67891f12ccd8a16b46f471aeff_::operator()(struct CFrameApplicationPresentation **a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v6[24]; // [rsp+50h] [rbp-38h] BYREF
  int v7; // [rsp+68h] [rbp-20h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 2,
    v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1[1] + 15) + 48LL))(*((_QWORD *)a1[1] + 15), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PresentationStateBugFix>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetImpl'::`2'::impl,
    v2);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***((_QWORD ***)a1[1] + 13) + 208LL))(
    **((_QWORD **)a1[1] + 13),
    *((_QWORD *)a1[1] + 16),
    0LL);
  CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
    (struct CFrameApplicationPresentation *)((char *)a1[1] + 64),
    a1[1],
    0LL,
    **((HWND **)a1[1] + 14));
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v3 = *((_DWORD *)a1[1] + 12);
    v4 = (*(__int64 (__fastcall **)(struct CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids, v4, v3);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*((HWND *)a1[1] + 16), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible(a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v5);
}
