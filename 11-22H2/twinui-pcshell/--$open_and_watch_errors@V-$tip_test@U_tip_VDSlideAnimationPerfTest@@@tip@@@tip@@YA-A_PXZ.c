/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FE91C
 * Callers:
 *     _lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_::operator() @ 0x180217134 (_lambda_3eaa93ba0c0aad2d24d7515d6dcae78e_--operator().c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1806068E0 (-SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180606CF0 (-SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchTyp.c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x18061684C (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     ?Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ @ 0x180617220 (-Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ.c)
 *     ?SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@PEAUISwitchThumbnailDeviceManager@@PEAUIImmersiveSettingsCache@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4VirtualDesktopSwitchType@@@Z @ 0x180617490 (-SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDi.c)
 *     _lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4_::operator() @ 0x180618D48 (_lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4_--operator().c)
 *     _lambda_9a7bfcc99c4e75b6f719d590bcf52609_::operator() @ 0x180618E48 (_lambda_9a7bfcc99c4e75b6f719d590bcf52609_--operator().c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x18061910C (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x1805FCA14 (--$-0$$TAEAW4TestRetrievalOptions@@@-$_Ref_count_obj2@V-$test_merged_data@U_tip_VDSlideAnimation.c)
 *     ??0?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@@Z @ 0x1805FFFF4 (--0-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ?ensure_data@?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@XZ @ 0x1806078E8 (-ensure_data@-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall tip::open_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>(
        struct wil::details::IFailureCallback *a1)
{
  void *v2; // rax
  std::_Ref_count_base *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-18h]
  std::_Ref_count_base *v7[2]; // [rsp+30h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF

  *(_OWORD *)v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v2 = operator new(0x118uLL);
  v3 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>>(
                                 (__int64)v2,
                                 &v9,
                                 &v8);
  v5 = (__int64)v3 + 16;
  v6 = v3;
  std::shared_ptr<KBViewInfo>::operator=(v7, &v5);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  tip::tip_test<_tip_VDSlideAnimationPerfTest>::ensure_data(v7);
  tip::test_watcher<_tip_VDSlideAnimationPerfTest>::test_watcher<_tip_VDSlideAnimationPerfTest>(a1);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return a1;
}
