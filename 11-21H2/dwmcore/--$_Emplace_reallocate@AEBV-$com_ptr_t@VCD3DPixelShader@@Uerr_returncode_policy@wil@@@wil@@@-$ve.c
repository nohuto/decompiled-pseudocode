/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800ED52C
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x180039560 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B7030 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800E8B50 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800ED650 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v7; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rsi
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  __int64 *result; // rax

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64 *)(v13 + 8 * v5);
  v15 = *a3;
  *v14 = *a3;
  if ( v15 )
  {
    v16 = *(int *)(*(_QWORD *)(v15 + 8) + 4LL) + v15 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  }
  v17 = a1[1];
  v18 = (_QWORD *)v13;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>>(
      v19,
      a2,
      v13);
    v17 = a1[1];
    v18 = v14 + 1;
    v19 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>>(
    v19,
    v17,
    v18);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = v13 + 8 * v9;
  result = v14;
  a1[2] = v13 + 8 * v3;
  return result;
}
