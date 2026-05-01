/*
 * XREFs of ?_Change_array@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@std@@@std@@AEAAXQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@_K1@Z @ 0x180604660
 * Callers:
 *     ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@std@@@std@@QEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@QEAU234567@AEBU234567@@Z @ 0x1805FFA28 (--$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@-$vector.c)
 *     ?_Reallocate_exactly@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@std@@@std@@AEAAX_K@Z @ 0x1806046D0 (-_Reallocate_exactly@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@V-$al.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
