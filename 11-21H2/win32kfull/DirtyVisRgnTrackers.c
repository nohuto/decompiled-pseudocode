/*
 * XREFs of DirtyVisRgnTrackers @ 0x1C006C250
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C00202CC (ComposeWindowIfNeeded.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     UnlinkWindow @ 0x1C0072CAC (UnlinkWindow.c)
 *     CreateVisRgnTracker @ 0x1C008300C (CreateVisRgnTracker.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     OffsetChildren @ 0x1C00848F0 (OffsetChildren.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     DecomposeWindowIfNeeded @ 0x1C00B3750 (DecomposeWindowIfNeeded.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 * Callees:
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C006A698 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C006B80C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C006C39C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 */

void __fastcall DirtyVisRgnTrackers(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rax
  char v3; // si
  _QWORD *v4; // rdi
  CVisRgnTrackerProp *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v2 )
    {
      v3 = 1;
      if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 && (*((_DWORD *)a1 + 80) & 0x2000000) != 0 )
      {
        v4 = (_QWORD *)*((_QWORD *)a1 + 13);
        if ( (unsigned int)IsVisible(v4) )
        {
          EtwTraceDwmVisRgnDirty(*(_QWORD *)v1, *v4);
          if ( !(unsigned int)IsTopLevelWindow(v1) )
          {
            v3 = 0;
            if ( v1 != (struct tagWND *)GetDesktopWindow(v1) && (*(_BYTE *)(v4[5] + 31LL) & 2) != 0 )
            {
              v5 = 0LL;
              if ( CWindowProp::GetProp<CVisRgnTrackerProp>((__int64)v4, (__int64 *)&v5) )
                CVisRgnTrackerProp::MarkDirty(v5);
            }
          }
          MarkDirtyWorker(v1);
          if ( !v3 )
          {
            while ( 1 )
            {
              v1 = (struct tagWND *)*((_QWORD *)v1 + 11);
              if ( !v1 )
                break;
              if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x14) == 0x14 )
                MarkDirtyWorker(v1);
            }
          }
        }
      }
    }
  }
}
