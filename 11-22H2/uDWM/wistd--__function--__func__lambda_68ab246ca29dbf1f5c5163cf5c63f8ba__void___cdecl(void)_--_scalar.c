/*
 * XREFs of wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1800A5040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (int const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
