/*
 * XREFs of ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x180731570
 * Callers:
 *     <none>
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18070CD04 (--$open_and_watch_errors@V-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x1807110E8 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     ?GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUguid@6@@Z @ 0x18072FEE8 (-GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::DeactivateRemoteDesktop(
        RTL_SRWLOCK **this,
        const struct winrt::guid *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-48h]
  _BYTE v8[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v9[24]; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v12; // [rsp+68h] [rbp-8h]
  volatile signed __int32 *v13; // [rsp+90h] [rbp+20h] BYREF

  tip::open_and_watch_errors<tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>>((struct wil::details::IFailureCallback *)v8);
  if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v8) )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v6,
      &v11);
    v4 = v6;
    tip::details::test_common_data<1>::begin_update(v6 + 8);
    v5 = v4 + 219;
    if ( !v4 )
      v5 = 43LL;
    *(_BYTE *)v5 = 1;
    if ( v4 )
    {
      tip::details::test_common_data<1>::end_update(v4 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v6);
    }
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetSystemIdForDesktop(
    this[17],
    (winrt::hstring *)&v13,
    (__int128 *)a2);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::DisconnectProvider((const struct winrt::hstring *)&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
}
