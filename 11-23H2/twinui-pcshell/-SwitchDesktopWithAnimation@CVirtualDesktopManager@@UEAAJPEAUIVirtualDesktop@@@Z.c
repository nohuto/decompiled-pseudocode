/*
 * XREFs of ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1806068E0
 * Callers:
 *     ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z @ 0x1802A8D10 (-SwitchDesktopWithAnimation@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAA_NXZ @ 0x180118494 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvemen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180215CC8 (-SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA-AUIAsyncAction@Foundation@Windows@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FE91C (--$open_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FFCCC (--$start_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x180601C38 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180605FD0 (-SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopWithAnimation(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7; // eax
  _BYTE v8[8]; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-21h] BYREF
  int v10; // [rsp+48h] [rbp-9h]
  std::_Ref_count_base *v11; // [rsp+60h] [rbp+Fh]
  _BYTE v12[8]; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v13[24]; // [rsp+70h] [rbp+1Fh] BYREF
  int v14; // [rsp+88h] [rbp+37h]
  std::_Ref_count_base *v15; // [rsp+A0h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v17; // [rsp+B8h] [rbp+67h] BYREF

  if ( *((_QWORD *)this + 28) )
  {
    if ( (unsigned int)CVirtualDesktopManager::GetSwitcherType((__int64)this - 8) == 1 )
    {
      v4 = CVirtualDesktopManager::SwitchDesktop(this, a2);
      if ( v4 < 0 )
      {
        v5 = 452LL;
        goto LABEL_4;
      }
    }
    else
    {
      tip::open_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>((struct wil::details::IFailureCallback *)v8);
      if ( !tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v8) )
      {
        tip::start_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>((struct wil::details::IFailureCallback *)v12);
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        if ( v14 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 56LL))(*((_QWORD *)this + 16));
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D7,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v7);
      }
      CVirtualDesktopManager::SwitchContextForVDAnimation(
        (__int64)this - 8,
        (winrt::Windows::Foundation::IUnknown *)&v17,
        (__int64)a2,
        0);
      if ( v17 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      if ( v10 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
    }
  }
  else
  {
    v4 = CVirtualDesktopManager::SwitchDesktop(this, a2);
    if ( v4 < 0 )
    {
      v5 = 443LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  return 0LL;
}
