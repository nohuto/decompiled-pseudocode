/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x18017824C
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180178114 (--$_Emplace_reallocate@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@-$vector.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180178BA4 (-_Reallocate_exactly@-$vector@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V-.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x180177D90 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@.c)
 */

DirectComposition::CDelayedDestructionObject **__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation> *,std::allocator<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>>(
        DirectComposition::CDelayedDestructionObject **a1,
        DirectComposition::CDelayedDestructionObject **a2,
        DirectComposition::CDelayedDestructionObject **a3)
{
  DirectComposition::CDelayedDestructionObject **i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>>(a3, a3);
  return a3;
}
