/*
 * XREFs of ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180718430
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18008CE7C (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@XZ @ 0x18008D0E8 (-ensure_data@-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_me.c)
 *     ?open@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x18008D19C (-open@-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$assign@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x1800B53F0 (--$assign@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x18070A4C8 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     ?DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x180727B30 (-DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBI@Z @ 0x18072AB1C (-TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnRemote(
        PSRWLOCK *this,
        const struct winrt::hstring *a2,
        __int64 a3)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *v4; // r12
  unsigned int *v5; // rsi
  __int64 **v6; // rdi
  __int64 *v7; // rbx
  unsigned int *v8; // r14
  unsigned int *v9; // r15
  void (__fastcall ****HostServicesForAppProcess)(_QWORD, __int64 *, __int64 *); // rax
  bool v11; // r12
  bool v12; // al
  unsigned int *v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned int *i; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  std::_Ref_count_base *v29[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v31; // [rsp+38h] [rbp-28h]
  __int128 v32; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v33; // [rsp+50h] [rbp-10h]
  __int64 v35; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+58h] BYREF

  v4 = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)this;
  v32 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v6 = *(__int64 ***)(a3 + 8);
  v7 = *v6;
  v8 = 0LL;
  while ( v7 != (__int64 *)v6 )
  {
    v9 = (unsigned int *)(v7 + 2);
    v36 = 0LL;
    HostServicesForAppProcess = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::Windows::Internal::Shell::implementation::RemoteSystemServiceBroker::TryGetHostServicesForAppProcess(
                                                                                        &v35,
                                                                                        v7 + 2);
    v11 = winrt::Windows::Foundation::operator==(HostServicesForAppProcess, &v36) == 0;
    if ( v35 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
    if ( v11 )
    {
      if ( v8 == v5 )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((const void **)&v32, v8, (_DWORD *)v7 + 4);
        v5 = v33;
        v8 = (unsigned int *)*((_QWORD *)&v32 + 1);
      }
      else
      {
        *v8++ = *v9;
        *((_QWORD *)&v32 + 1) = v8;
      }
      v4 = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)this;
    }
    else
    {
      v4 = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)this;
      winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteProcessId(this[4], *v9, a2);
    }
    v7 = (__int64 *)*v7;
  }
  *(_OWORD *)v29 = 0LL;
  tip::tip_test<_tip_RecoverRemoteSessionTipTest>::open(v29);
  v12 = tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v29);
  v13 = (unsigned int *)v32;
  if ( v12 )
  {
    v14 = tip::tip_test<_tip_RecoverRemoteSessionTipTest>::ensure_data(v29);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v30,
      v14);
    v15 = v30;
    tip::details::test_common_data<1>::begin_update(v30 + 8);
    v16 = v15 + 280;
    if ( !v15 )
      v16 = 104LL;
    *(_BYTE *)v16 = 0;
    if ( v15 )
    {
      tip::details::test_common_data<1>::end_update(v15 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v30);
    }
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    v17 = tip::tip_test<_tip_RecoverRemoteSessionTipTest>::ensure_data(v29);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v30,
      v17);
    v18 = v30;
    tip::details::test_common_data<1>::begin_update(v30 + 8);
    v20 = v18 + 184;
    if ( !v18 )
      v20 = 8LL;
    std::wstring::assign<winrt::hstring,0>(v20, (__int64)a2, v19);
    if ( v18 )
    {
      tip::details::test_common_data<1>::end_update(v18 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v30);
    }
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    v21 = tip::tip_test<_tip_RecoverRemoteSessionTipTest>::ensure_data(v29);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v30,
      v21);
    v22 = v30;
    tip::details::test_common_data<1>::begin_update(v30 + 8);
    v23 = v22 + 264;
    if ( !v22 )
      v23 = 88LL;
    *(_QWORD *)v23 = v8 - v13;
    if ( v22 )
    {
      tip::details::test_common_data<1>::end_update(v22 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v30);
    }
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    v4 = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)this;
  }
  if ( v29[1] )
    std::_Ref_count_base::_Decref(v29[1]);
  v24 = 0LL;
  for ( i = v13; i != v8; ++i )
  {
    v35 = 0LL;
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(
      v4,
      (struct winrt::impl::hstring_header *)*i,
      (const struct winrt::Windows::Foundation::Uri *)&v35,
      1);
    if ( v35 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
    ++v24;
  }
  *(_OWORD *)v29 = 0LL;
  tip::tip_test<_tip_RecoverRemoteSessionTipTest>::open(v29);
  if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v29) )
  {
    v26 = tip::tip_test<_tip_RecoverRemoteSessionTipTest>::ensure_data(v29);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v30,
      v26);
    v27 = v30;
    tip::details::test_common_data<1>::begin_update(v30 + 8);
    v28 = v27 + 272;
    if ( !v27 )
      v28 = 96LL;
    *(_QWORD *)v28 = v24;
    if ( v27 )
    {
      tip::details::test_common_data<1>::end_update(v27 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v30);
    }
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
  }
  if ( v29[1] )
    std::_Ref_count_base::_Decref(v29[1]);
  if ( v13 )
    std::_Deallocate<16,0>(v13, ((char *)v5 - (char *)v13) & 0xFFFFFFFFFFFFFFFCuLL);
}
