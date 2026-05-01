/*
 * XREFs of ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x18066FF94
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke @ 0x18066FB70 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_ee45b684567.c)
 * Callees:
 *     ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180030948 (-HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009D174 (-CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18009D394 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18009D5A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_18009D5A0.c)
 *     ?SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009D5E8 (-SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_stora.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SnapInteraction::InteractionTracker::UpdateTelemetry(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  char v3; // r12
  __int64 *v4; // rbx
  SnapInteraction::InteractionRecord *v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  char v9; // al
  char v10; // r14
  __int64 *v11; // rdi
  std::_Ref_count_base *v12; // rcx
  SnapInteraction::InteractionRecord *v13; // [rsp+20h] [rbp-10h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-8h]
  __int64 *v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 *v16; // [rsp+78h] [rbp+48h] BYREF
  RTL_SRWLOCK *v17; // [rsp+80h] [rbp+50h]

  v2 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  v17 = v2;
  v3 = 0;
  v4 = *(__int64 **)this[11].Ptr;
  v16 = v4;
  while ( v4 != this[11].Ptr )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v13,
      v4 + 5);
    v5 = v13;
    v6 = (__int64 *)((char *)v13 + 40);
    AcquireSRWLockExclusive((PSRWLOCK)v13 + 5);
    v15 = v6;
    SnapInteraction::InteractionRecord::CommitInteraction((__int64)v5, v7);
    SnapInteraction::InteractionRecord::SendTotalInteraction((__int64 *)v5, v8);
    if ( v6 )
      ReleaseSRWLockExclusive((PSRWLOCK)v6);
    if ( SnapInteraction::InteractionRecord::HasInteraction((RTL_SRWLOCK *)v5) )
      v3 = 1;
    AcquireSRWLockShared((PSRWLOCK)v6);
    v9 = *((_BYTE *)v5 + 9);
    LOBYTE(v15) = v9;
    if ( v6 )
    {
      ReleaseSRWLockShared((PSRWLOCK)v6);
      v9 = (char)v15;
    }
    if ( v9 )
      goto LABEL_18;
    AcquireSRWLockShared((PSRWLOCK)v6);
    v10 = *((_BYTE *)v5 + 8);
    if ( v6 )
      ReleaseSRWLockShared((PSRWLOCK)v6);
    if ( v10 )
    {
LABEL_18:
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v16);
      v4 = v16;
    }
    else
    {
      v15 = v4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v15);
      v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(
              &this[11].Ptr,
              v4);
      v12 = (std::_Ref_count_base *)v11[6];
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      if ( v11[4] )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v11 + 4);
      std::_Deallocate<16,0>(v11, 0x38uLL);
      v4 = v15;
      v16 = v15;
    }
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  if ( !v3 )
  {
    if ( this[14].Ptr )
    {
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&this[14].Ptr);
      v15 = 0LL;
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)&this[14],
        (winrt::Windows::Foundation::IUnknown *)&v15);
      if ( v15 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
