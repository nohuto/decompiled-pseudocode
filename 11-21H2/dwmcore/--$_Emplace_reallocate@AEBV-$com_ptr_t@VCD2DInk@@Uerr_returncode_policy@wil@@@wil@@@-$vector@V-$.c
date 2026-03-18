/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180203568
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180204608 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1802177CC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B7030 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18019A298 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18019A4B0 (-_Change_array@-$vector@V-$com_ptr_t@VCSceneObject@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  __int64 *v16; // r14
  __int64 *v17; // rdx
  __int64 *v18; // r8
  __int64 *v19; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = a1[2] - *a1;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = *a3;
  v15 = (__int64 *)v13;
  v16 = (__int64 *)(v13 + 8 * v5);
  *v16 = *a3;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>>>(
      v19,
      a2,
      v15);
    v17 = a1[1];
    v18 = v16 + 1;
    v19 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>>>(
    v19,
    v17,
    v18);
  std::vector<wil::com_ptr_t<CSceneObject,wil::err_returncode_policy>>::_Change_array((__int64)a1, (__int64)v15, v9, v3);
  return v16;
}
