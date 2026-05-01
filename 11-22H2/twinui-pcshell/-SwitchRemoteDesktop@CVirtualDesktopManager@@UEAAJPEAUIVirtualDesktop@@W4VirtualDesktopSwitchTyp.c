/*
 * XREFs of ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180606CF0
 * Callers:
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1802A8D30 (-SwitchRemoteDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E1A74 (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180215CC8 (-SwitchContextForVDAnimation@CVirtualDesktopManager@@AEAA-AUIAsyncAction@Foundation@Windows@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FE91C (--$open_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FFCCC (--$start_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::SwitchRemoteDesktop(__int64 a1, struct IVirtualDesktop *a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 (__fastcall **v10)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  __int64 v20; // [rsp+20h] [rbp-59h] BYREF
  std::_Ref_count_base *v21; // [rsp+28h] [rbp-51h]
  _BYTE v22[48]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v24[48]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v25[6]; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  int v27; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)(a1 + 224) )
  {
    tip::open_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>((struct wil::details::IFailureCallback *)v22);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v22) )
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v20,
        v23);
      v6 = v20;
      tip::details::test_common_data<1>::begin_update(v20 + 8);
      v7 = v6 + 232;
      if ( !v6 )
        v7 = 56LL;
      *(_DWORD *)v7 = 1;
      if ( v6 )
      {
        tip::details::test_common_data<1>::end_update(v6 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v20);
      }
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v20,
        v23);
      v8 = v20;
      tip::details::test_common_data<1>::begin_update(v20 + 8);
      v9 = v8 + 191;
      if ( !v8 )
        v9 = 15LL;
      *(_BYTE *)v9 = 1;
      if ( v8 )
      {
        tip::details::test_common_data<1>::end_update(v8 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v20);
      }
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
LABEL_35:
      CVirtualDesktopManager::SwitchContextForVDAnimation(
        a1 - 8,
        (winrt::Windows::Foundation::IUnknown *)&v27,
        (__int64)a2,
        a3);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v27);
      v12 = 0;
      goto LABEL_36;
    }
    v10 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2;
    v28 = 0LL;
    v11 = (*v10)(a2, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v28);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 64LL))(v28, &v27);
      v12 = v11;
      if ( v11 >= 0 )
      {
        if ( v27 )
        {
          tip::start_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>((struct wil::details::IFailureCallback *)v24);
          std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
            &v20,
            v25);
          v14 = v20;
          tip::details::test_common_data<1>::begin_update(v20 + 8);
          v15 = v14 + 232;
          if ( !v14 )
            v15 = 56LL;
          *(_DWORD *)v15 = 1;
          if ( v14 )
          {
            tip::details::test_common_data<1>::end_update(v14 + 8);
            std::shared_ptr<PeoplePaneViewInfo>::reset(&v20);
          }
          if ( v21 )
            std::_Ref_count_base::_Decref(v21);
          std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
            &v20,
            v25);
          v16 = v20;
          tip::details::test_common_data<1>::begin_update(v20 + 8);
          v17 = v16 + 191;
          if ( !v16 )
            v17 = 15LL;
          *(_BYTE *)v17 = 1;
          if ( v16 )
          {
            tip::details::test_common_data<1>::end_update(v16 + 8);
            std::shared_ptr<PeoplePaneViewInfo>::reset(&v20);
          }
          if ( v21 )
            std::_Ref_count_base::_Decref(v21);
          tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v24);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
        goto LABEL_35;
      }
      v13 = 317LL;
    }
    else
    {
      v13 = 315LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
LABEL_36:
    tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v22);
    return v12;
  }
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 152) + 32LL))(*(_QWORD *)(a1 + 152), &v27);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**(_QWORD **)(a1 + 96) + 32LL))(
         *(_QWORD *)(a1 + 96),
         a2) )
  {
    v18 = CVirtualDesktopManager::SwitchDesktopInternalPrivate(a1 - 8, a2, a3);
    v12 = v18;
    if ( v18 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v18);
  }
  else
  {
    v12 = -2147024809;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v27);
  return v12;
}
