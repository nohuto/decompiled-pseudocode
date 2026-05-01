/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800BD900
 * Callers:
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18003A918 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18004F428 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 size_of; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // rcx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 *v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rcx
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (unsigned __int64)a2 - *a1;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v25 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = v13 + v12;
  v15 = *a3;
  *(_QWORD *)(v13 + v12) = *a3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = (__int64 *)a1[1];
  v17 = (__int64 *)*a1;
  v18 = (__int64 *)v12;
  if ( v4 == v16 )
  {
    while ( v17 != v16 )
    {
      v20 = *v17;
      *v17 = 0LL;
      *v18++ = v20;
      ++v17;
    }
  }
  else
  {
    while ( v17 != v4 )
    {
      v21 = *v17;
      *v17 = 0LL;
      *v18++ = v21;
      ++v17;
    }
    v22 = (__int64 *)a1[1];
    if ( v4 != v22 )
    {
      v23 = v13 - (_QWORD)v4;
      do
      {
        v24 = *v4;
        *v4 = 0LL;
        *(__int64 *)((char *)v4++ + v23 + v12 + 8) = v24;
      }
      while ( v4 != v22 );
    }
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
      (__int64 *)*a1,
      (__int64 *)a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v12;
  a1[1] = v12 + 8 * v25;
  a1[2] = v12 + 8 * v8;
  return v14;
}
