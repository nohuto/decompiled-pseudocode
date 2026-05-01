/*
 * XREFs of _UwpAppPackageInfo::GetActiveViews_::_1_::dtor$0 @ 0x180565951
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1804A1500 (--1-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$com_.c)
 */

void __fastcall UwpAppPackageInfo::GetActiveViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>(*(_QWORD *)(a2 + 72));
  }
}
