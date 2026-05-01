/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1804CF040
 * Callers:
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$19 @ 0x1802C2F6C (_TaskViewHost--TaskViewHost_--_1_--dtor$19.c)
 *     _UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor$2 @ 0x1804D0EA5 (_UwpWindowEventDispatcher--EnsureDuplicateViewDestroyed_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18009E334 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>>(
      v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
