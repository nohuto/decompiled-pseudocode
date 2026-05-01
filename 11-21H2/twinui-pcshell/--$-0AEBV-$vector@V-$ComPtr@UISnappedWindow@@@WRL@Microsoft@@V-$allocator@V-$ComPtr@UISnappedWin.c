/*
 * XREFs of ??$?0AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@1@AEBUCRect@Geometry@@AEAH@?$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@QEAA@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@1@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@1@AEBUCRect@Geometry@@AEAH@Z @ 0x18059A43C
 * Callers:
 *     ??$make_shared@VGuidedSnapAssistData@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@AEAH@std@@YA?AV?$shared_ptr@VGuidedSnapAssistData@@@0@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@0@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@0@AEBUCRect@Geometry@@AEAH@Z @ 0x18059B044 (--$make_shared@VGuidedSnapAssistData@@AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-.c)
 * Callees:
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1805B6B18 (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj2<GuidedSnapAssistData>::_Ref_count_obj2<GuidedSnapAssistData>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int *a5)
{
  int v7; // edx

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<GuidedSnapAssistData>::`vftable';
  v7 = *a5;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  GuidedSnapAssistData::Initialize(a1 + 16, a2, a3, a4, v7);
  return a1;
}
