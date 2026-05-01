/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1805A9E54
 * Callers:
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1805A8444 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::_parameters_ @ 0x1806794F8 (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync_--_13_--_parameters_--_parameters_.c)
 *     ??0?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@XZ @ 0x180679618 (--0-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Interna_ea_180679618.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Alloc_sentinel_and_proxy(
        _QWORD *a1)
{
  size_t size_of; // rax
  _QWORD *result; // rax

  size_of = std::_Get_size_of_n<24>(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *result = result;
  result[1] = result;
  *a1 = result;
  return result;
}
