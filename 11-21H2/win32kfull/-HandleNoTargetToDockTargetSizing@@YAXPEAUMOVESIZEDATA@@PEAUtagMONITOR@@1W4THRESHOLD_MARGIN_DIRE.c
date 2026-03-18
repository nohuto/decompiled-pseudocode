/*
 * XREFs of ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C020A3AC
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C020B268 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020AF14 (-SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020AF98 (-SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020B688 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 */

void __fastcall HandleNoTargetToDockTargetSizing(
        __int64 a1,
        struct tagMONITOR *a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // ebp
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  __int128 v15; // xmm6
  struct MOVESIZEDATA *v16; // rcx

  v5 = 0;
  if ( a4 == 3 )
  {
    v9 = *(_DWORD *)(a1 + 176) - 3;
  }
  else
  {
    if ( a4 )
      goto LABEL_6;
    v9 = *(_DWORD *)(a1 + 176) - 6;
  }
  if ( v9 <= 2 )
  {
LABEL_14:
    *(_QWORD *)(a1 + 232) = a2;
    return;
  }
LABEL_6:
  v10 = *(_DWORD *)(a1 + 176);
  if ( v10 <= 7 && (v11 = 146, _bittest(&v11, v10)) && a4 == 1
    || v10 <= 8 && (v12 = 292, _bittest(&v12, v10)) && a4 == 2 )
  {
    v13 = *(_DWORD *)(a1 + 200);
    if ( (v13 & 0x6000) == 0x6000 && (v13 & 0x300) == 0x300 )
      goto LABEL_14;
  }
  v14 = *(_DWORD *)(a1 + 200);
  v15 = *(_OWORD *)(a1 + 40);
  if ( (v14 & 0x2000000) == 0 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 200) = v14 | 0x2000000;
  }
  if ( (unsigned int)VerticalSizeRectFromHitTarget(a1, a2, a4, 0LL, *(_DWORD *)(a1 + 264)) )
  {
    if ( v5 && a5 )
      *a5 |= 4u;
    if ( !a4 || a4 == 3 )
    {
      *(_DWORD *)(a1 + 200) |= 0x300u;
      MakeArrangedStateObservable((const struct MOVESIZEDATA *)a1);
      SetDragInToDragOutThreshold((struct MOVESIZEDATA *)a1);
      *(_DWORD *)(a1 + 240) = a4;
      SetCurrentHitTargetMonitor(v16, a2, 1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 200) &= ~0x2000000u;
    *(_QWORD *)(a1 + 232) = a2;
    *(_DWORD *)(a1 + 240) = a4;
    *(_OWORD *)(a1 + 40) = v15;
  }
}
