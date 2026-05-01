/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@_K1@Z @ 0x1803E72C4
 * Callers:
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x18022D5B0 (-_Reallocate_exactly@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1803DD858 (--$_Emplace_reallocate@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@M.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18041CBA4 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@0@@Z @ 0x18003DD98 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@Y.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Change_array(
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
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>>(v6, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
