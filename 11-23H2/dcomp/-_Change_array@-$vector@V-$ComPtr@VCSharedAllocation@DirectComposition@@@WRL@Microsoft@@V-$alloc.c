/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@_K1@Z @ 0x180178AA8
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180178114 (--$_Emplace_reallocate@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@-$vector.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180178BA4 (-_Reallocate_exactly@-$vector@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@V-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x180177D90 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DirectComposition::CDelayedDestructionObject **v6; // rcx
  __int64 result; // rax

  v6 = *(DirectComposition::CDelayedDestructionObject ***)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>>(
      v6,
      *(DirectComposition::CDelayedDestructionObject ***)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
