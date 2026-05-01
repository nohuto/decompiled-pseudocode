/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1805FE42C
 * Callers:
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$17 @ 0x180213B54 (_TaskViewHost--TaskViewHost_--_1_--dtor$17.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18003F498 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@s.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>::~vector<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
      v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
