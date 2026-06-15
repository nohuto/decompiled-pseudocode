/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x14005DC98
 * Callers:
 *     ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14005E0DC (-DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVC.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x14005E7E4 (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 *     ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x14005ECAC (-LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDisplayNode@@PEAV312@1@Z @ 0x14005ED90 (-NewNode@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCN.c)
 */

__int64 __fastcall ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::NewNode(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
