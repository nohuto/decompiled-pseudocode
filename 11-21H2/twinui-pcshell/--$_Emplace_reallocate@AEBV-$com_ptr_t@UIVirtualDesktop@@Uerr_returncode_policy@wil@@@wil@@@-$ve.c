/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18009D0E0
 * Callers:
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180029F94 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009D220 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016978C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy> const &>(
        _QWORD *a1,
        void *a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rsi
  char *v13; // r14
  void *v14; // rdx
  char *v15; // r8
  void *v16; // rcx

  v5 = ((__int64)a2 - *a1) >> 3;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[8 * v5];
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    v13,
    *a3);
  v14 = (void *)a1[1];
  v15 = v12;
  v16 = (void *)*a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
      v16,
      a2,
      v12);
    v15 = v13 + 8;
    v14 = (void *)a1[1];
    v16 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
    v16,
    v14,
    v15);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>((void *)*a1);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v12;
  a1[1] = &v12[8 * v8];
  a1[2] = &v12[8 * v7];
  return v13;
}
