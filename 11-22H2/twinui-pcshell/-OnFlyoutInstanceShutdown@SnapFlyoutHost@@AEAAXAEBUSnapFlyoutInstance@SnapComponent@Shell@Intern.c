/*
 * XREFs of ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B68FC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801BA844 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802259C8 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x180225A6C (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1802D2A56 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_81c5145ef34e7f56f193ed620fca7ca3___ @ 0x18067946C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_SnapFly.c)
 *     _lambda_ea48c415f368778e5bf263367a992acf_::operator() @ 0x18067A464 (_lambda_ea48c415f368778e5bf263367a992acf_--operator().c)
 *     ?Id@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067ACF8 (-Id@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@Snap.c)
 *     ?SnapControlType@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067C67C (-SnapControlType@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyout.c)
 *     ?TryGetFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18067D080 (-TryGetFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@.c)
 *     ?erase@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@0@Z @ 0x18067DEC8 (-erase@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapFlyoutHost::OnFlyoutInstanceShutdown(
        SnapFlyoutHost *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 *v10; // rbx
  __int64 *i; // rdi
  __int64 *v12; // rbx
  __int64 **v13; // rax
  __int64 *v14; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-8h]
  void *v16; // [rsp+80h] [rbp+40h] BYREF
  const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *v17; // [rsp+88h] [rbp+48h] BYREF
  char *v18; // [rsp+90h] [rbp+50h]

  v4 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Id((__int64 *)a2);
  v6 = WindowManagementLogging::Provider(v5);
  if ( *(_DWORD *)v6 > 5u )
  {
    LODWORD(v16) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v6,
      byte_1808748CC,
      0LL,
      v7,
      (__int64)&v16);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 22);
  v18 = (char *)this + 176;
  SnapFlyoutHost::TryGetFlyoutInstance(this, &v14, a2);
  v8 = v14;
  if ( v14
    && (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v14) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                  (__int64)v8,
                  (__int64 *)&v16)
             + 266) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v16);
    tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete(v8);
  }
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  v9 = (__int64 *)*((_QWORD *)this + 4);
  v10 = (__int64 *)*((_QWORD *)this + 3);
  v17 = a2;
  v16 = a2;
  while ( v10 != v9 && !lambda_ea48c415f368778e5bf263367a992acf_::operator()(&v16, (__int64)v10) )
    v10 += 2;
  if ( v10 != v9 )
  {
    for ( i = v10 + 2; i != v9; i += 2 )
    {
      if ( !lambda_ea48c415f368778e5bf263367a992acf_::operator()(&v17, (__int64)i) )
      {
        std::shared_ptr<KBViewInfo>::operator=(v10, i);
        v10 += 2;
      }
    }
  }
  std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase((char *)this + 24, &v16, v10, v9);
  if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::SnapControlType(a2) == 2 )
  {
    v12 = (__int64 *)*((_QWORD *)this + 4);
    v13 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_81c5145ef34e7f56f193ed620fca7ca3___(
            (__int64 **)&v16,
            *((__int64 **)this + 3),
            v12);
    std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase((char *)this + 24, &v17, *v13, v12);
  }
  if ( this != (SnapFlyoutHost *)-176LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 22);
}
