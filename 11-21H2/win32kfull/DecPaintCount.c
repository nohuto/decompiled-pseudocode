/*
 * XREFs of DecPaintCount @ 0x1C005DF94
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     InternalInvalidate3 @ 0x1C004C894 (InternalInvalidate3.c)
 *     xxxDoPaint @ 0x1C005C838 (xxxDoPaint.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ClrFTrueVis @ 0x1C00C98CC (ClrFTrueVis.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F4854 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 600))-- == 1 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 448) + 8LL), 0xFFFFFFDF);
    result = *(_QWORD *)(v1 + 448);
    _InterlockedAnd((volatile signed __int32 *)(result + 4), 0xFFFFFFDF);
  }
  return result;
}
