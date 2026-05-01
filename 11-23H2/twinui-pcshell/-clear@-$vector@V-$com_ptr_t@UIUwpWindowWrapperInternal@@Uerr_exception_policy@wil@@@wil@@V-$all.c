/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18019E1AC
 * Callers:
 *     ?v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18019E040 (-v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ @ 0x18019E120 (-PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18009E334 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wi.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::clear(
        __int64 **a1)
{
  __int64 *result; // rax

  std::_Destroy_range<std::allocator<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
