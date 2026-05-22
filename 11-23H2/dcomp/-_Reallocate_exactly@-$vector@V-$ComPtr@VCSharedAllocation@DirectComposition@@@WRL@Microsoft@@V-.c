/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180178BA4
 * Callers:
 *     ?MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z @ 0x180178740 (-MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnim.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x18017824C (--$_Uninitialized_move@PEAV-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V-$all.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>::_Reallocate_exactly(
        DirectComposition::CDelayedDestructionObject ***a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  DirectComposition::CDelayedDestructionObject **v6; // rbx

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(a2);
  v6 = (DirectComposition::CDelayedDestructionObject **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation> *,std::allocator<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>>(
    *a1,
    a1[1],
    v6);
  return std::vector<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>::_Change_array(
           (__int64)a1,
           (__int64)v6,
           v4,
           a2);
}
