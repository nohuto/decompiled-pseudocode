/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x180177D90
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x18017824C (--$_Uninitialized_move@PEAV-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V-$all.c)
 *     ??_EPathKeyFrameAnimationResources@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801782F0 (--_EPathKeyFrameAnimationResources@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@_K1@Z @ 0x180178AA8 (-_Change_array@-$vector@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V-$alloc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>>(
        DirectComposition::CDelayedDestructionObject **a1,
        DirectComposition::CDelayedDestructionObject **a2)
{
  DirectComposition::CDelayedDestructionObject **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
