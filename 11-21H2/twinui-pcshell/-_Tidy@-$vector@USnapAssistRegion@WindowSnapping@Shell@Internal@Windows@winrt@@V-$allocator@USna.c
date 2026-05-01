/*
 * XREFs of ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18059F038
 * Callers:
 *     ??1?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18059B69C (--1-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     ?_Destroy@?$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@EEAAXXZ @ 0x18059E1A0 (-_Destroy@-$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@EEAAXXZ.c)
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1805B6B18 (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
