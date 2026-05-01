/*
 * XREFs of _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::_parameters_ @ 0x1806794F8
 * Callers:
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2 @ 0x1802286F8 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1805A9E54 (-_Alloc_sentinel_and_proxy@-$list@V-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@w.c)
 */

_QWORD *__fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *result; // rax

  v3 = a1 + 1;
  *a1 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Alloc_sentinel_and_proxy(a1 + 1);
  v6 = *v3;
  *v3 = *a3;
  v7 = a3[1];
  *a3 = v6;
  v8 = v3[1];
  v3[1] = v7;
  result = a1;
  a3[1] = v8;
  return result;
}
