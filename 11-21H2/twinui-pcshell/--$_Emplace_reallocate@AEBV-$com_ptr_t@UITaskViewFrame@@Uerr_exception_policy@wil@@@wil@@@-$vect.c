/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180011D40
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800165F8 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180013338 (--$_Uninitialized_move@PEAV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18003F498 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@s.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> const &>(
        __int64 *a1,
        void *a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 size_of; // rax
  __int64 v12; // rsi
  __int64 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx

  v5 = ((__int64)a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64 *)(v12 + 8 * v5);
  v14 = *a3;
  *v13 = *a3;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = a1[1];
  v16 = (_QWORD *)v12;
  v17 = *a1;
  if ( a2 != (void *)v15 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
      v17,
      a2,
      v12);
    v16 = v13 + 1;
    v15 = a1[1];
    v17 = (__int64)a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
    v17,
    v15,
    v16);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>((void *)*a1);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v12;
  a1[1] = v12 + 8 * v8;
  a1[2] = v12 + 8 * v7;
  return v13;
}
