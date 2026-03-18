/*
 * XREFs of ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z @ 0x1C020B480
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020A5F4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C0209FFC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 */

void __fastcall UpdateDragRectForSizingAway(struct tagWND **a1, struct tagRECT *a2, const struct tagRECT *a3)
{
  char FrameBoundsOverlapInfo; // r8
  int v7; // r9d
  int v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = *(_OWORD *)WindowMargins::ReduceRect(&v9, a1[2], (_DWORD *)(*((_QWORD *)a1[2] + 5) + 88LL));
  FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(a2, &v9, 0);
  if ( (FrameBoundsOverlapInfo & 5) == 5 )
    v7 = (a2->right - a2->left) / 2;
  else
    v7 = a3->right - a3->left;
  if ( (FrameBoundsOverlapInfo & 0xA) == 0xA )
    v8 = (a2->bottom - a2->top) / 2;
  else
    v8 = a3->bottom - a3->top;
  switch ( *((_DWORD *)a1 + 44) )
  {
    case 1:
      goto LABEL_18;
    case 2:
LABEL_16:
      *((_DWORD *)a1 + 10) = *((_DWORD *)a1 + 12) - v7;
      return;
    case 3:
      *((_DWORD *)a1 + 13) = v8 + *((_DWORD *)a1 + 11);
      return;
    case 4:
      *((_DWORD *)a1 + 13) = v8 + *((_DWORD *)a1 + 11);
      goto LABEL_18;
    case 5:
      *((_DWORD *)a1 + 13) = v8 + *((_DWORD *)a1 + 11);
      goto LABEL_16;
    case 6:
      *((_DWORD *)a1 + 11) = *((_DWORD *)a1 + 13) - v8;
      return;
    case 7:
      *((_DWORD *)a1 + 11) = *((_DWORD *)a1 + 13) - v8;
LABEL_18:
      *((_DWORD *)a1 + 12) = v7 + *((_DWORD *)a1 + 10);
      return;
    case 8:
      *((_DWORD *)a1 + 11) = *((_DWORD *)a1 + 13) - v8;
      goto LABEL_16;
  }
}
