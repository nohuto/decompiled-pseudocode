/*
 * XREFs of ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x14001E7F4
 * Callers:
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14001D1D4 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14001D214 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    ATL::AtlThrowImpl(-2147467259);
  return v1 + 16;
}
