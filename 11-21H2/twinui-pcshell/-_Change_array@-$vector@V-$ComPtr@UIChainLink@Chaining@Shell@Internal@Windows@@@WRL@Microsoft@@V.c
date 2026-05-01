/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@_K1@Z @ 0x18022AEDC
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV234@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180302880 (--$_Emplace_reallocate@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@-$vector@V-$ComPtr@UI.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18022AD8A (--$_Destroy_range@V-$allocator@V-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Micro.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>>(
      v6,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
