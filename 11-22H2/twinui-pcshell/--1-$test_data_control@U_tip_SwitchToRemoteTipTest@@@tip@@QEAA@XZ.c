/*
 * XREFs of ??1?$test_data_control@U_tip_SwitchToRemoteTipTest@@@tip@@QEAA@XZ @ 0x18070E960
 * Callers:
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SwitchToRemoteDesktop_::_1_::dtor$10 @ 0x180719287 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Sw_ea_180719287.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x180733060 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchToRemoteDesktop_::_1_::dtor$6 @ 0x180733456 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchTo_ea_180733456.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x1806523E8 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 */

void __fastcall tip::test_data_control<_tip_SwitchToRemoteTipTest>::~test_data_control<_tip_SwitchToRemoteTipTest>(
        __int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  tip::test_data_control<_tip_TouchGestureTest>::close(a1);
  v2 = (std::_Ref_count_base *)a1[1];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
