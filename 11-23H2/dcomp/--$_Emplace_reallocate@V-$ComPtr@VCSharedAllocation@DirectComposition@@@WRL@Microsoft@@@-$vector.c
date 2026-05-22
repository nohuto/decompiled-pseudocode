/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180178114
 * Callers:
 *     ?MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z @ 0x180178740 (-MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnim.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x18017824C (--$_Uninitialized_move@PEAV-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V-$all.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@_K1@Z @ 0x180178AA8 (-_Change_array@-$vector@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V-$alloc.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>(
        const char *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v7 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = (_QWORD *)(v13 + 8 * v5);
  *v15 = 0LL;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = *((_QWORD *)a1 + 1);
  v17 = (_QWORD *)v13;
  v18 = *(_QWORD *)a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation> *,std::allocator<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>>(
      v18,
      a2,
      v13);
    v16 = *((_QWORD *)a1 + 1);
    v17 = v15 + 1;
    v18 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation> *,std::allocator<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>>(
    v18,
    v16,
    v17);
  std::vector<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>::_Change_array(a1, v14, v9, v3);
  return v15;
}
