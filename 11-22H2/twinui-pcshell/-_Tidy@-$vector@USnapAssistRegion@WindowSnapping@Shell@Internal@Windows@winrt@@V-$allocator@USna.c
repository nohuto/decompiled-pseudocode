/*
 * XREFs of ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18066E41C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@EEAAXXZ @ 0x1802E9300 (-_Destroy@-$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@EEAAXXZ.c)
 *     ??1?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180669F30 (--1-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     ??4?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180689FA0 (--4-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x180689FF4 (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x18076A52C (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     ??1SnapAssistState@@QEAA@XZ @ 0x18078B1EC (--1SnapAssistState@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
