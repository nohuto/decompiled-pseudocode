/*
 * XREFs of ?TransitionDrawingState@CVirtualSurface@DirectComposition@@AEAAXW4SurfaceState@2@@Z @ 0x180038F8C
 * Callers:
 *     ?BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180036F80 (-BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEA.c)
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x180037C40 (-EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 *     ?ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x18003A090 (-ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVirtualSurface::TransitionDrawingState(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax

  if ( *(_DWORD *)(a1 + 128) || a2 != 1 )
  {
    if ( !a2 )
    {
      v2 = *(_QWORD *)(a1 + 104);
      --*(_DWORD *)(v2 + 348);
      result = *(_QWORD *)(v2 + 24);
      --*(_DWORD *)(result + 428);
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 104);
    ++*(_DWORD *)(v4 + 348);
    result = *(_QWORD *)(v4 + 24);
    ++*(_DWORD *)(result + 428);
  }
  if ( a2 == 1 || *(_DWORD *)(a1 + 128) == 1 )
  {
    result = *(_QWORD *)(a1 + 104);
    *(_BYTE *)(result + 353) = a2 == 1;
  }
  *(_DWORD *)(a1 + 128) = a2;
  return result;
}
