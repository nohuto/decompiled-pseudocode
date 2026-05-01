/*
 * XREFs of ??$_Copy_unchecked@PEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@PEAV12@00@Z @ 0x1804AA220
 * Callers:
 *     ??$_Assign_range@PEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@0Uforward_iterator_tag@1@@Z @ 0x1804AA14C (--$_Assign_range@PEAV-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-.c)
 * Callees:
 *     ??4?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop@@@Z @ 0x1801736CC (--4-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop.c)
 */

__int64 *__fastcall std::_Copy_unchecked<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy> *,wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; ++i )
    wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>::operator=(a3++, *i);
  return a3;
}
