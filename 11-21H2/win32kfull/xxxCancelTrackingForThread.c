/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C02104C0
 * Callers:
 *     xxxCancelTracking @ 0x1C00DCB94 (xxxCancelTracking.c)
 * Callees:
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     IsInsideMenuLoop @ 0x1C010931C (IsInsideMenuLoop.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     ChangeComposableCursor @ 0x1C01CFAF0 (ChangeComposableCursor.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 672);
    if ( v1 )
    {
      v3 = *(_DWORD *)(v1 + 200);
      if ( (v3 & 0x4000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v3 = *(_DWORD *)(v1 + 200) & 0xFBFFFFFF;
      }
      *(_DWORD *)(v1 + 200) = v3 | 8;
      if ( (*(_DWORD *)(a1 + 488) & 0x10) != 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 200) & 0x20) == 0 )
          xxxDrawDragRectEx((struct MOVESIZEDATA *)v1, 0LL, 2, (struct tagRECT *)(v1 + 24));
      }
      *(_DWORD *)(a1 + 488) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 432) )
        SetWakeBit(a1, 2u);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v4 = *(_QWORD *)(a1 + 672);
        if ( v4 )
          PostMessage(*(_QWORD *)(v4 + 16), 31, 0, 0);
      }
      xxxCapture(a1, 0LL, 0);
    }
  }
}
