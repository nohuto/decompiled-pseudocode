/*
 * XREFs of ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800E5820
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180010240 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180102EE0 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180105810 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailAdded(CTopLevelWindow *this, struct CVisual *a2)
{
  int inserted; // eax
  unsigned int v4; // ebx
  int v5; // eax

  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 69) + 32LL), a2, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted >= 0 )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 69) + 72LL) == (*((_QWORD *)this + 62) != 0LL) + 1 )
    {
      v5 = CWindowData::NotifyRepresentationChanged(*((CWindowData **)this + 94));
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x714u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x70Eu);
  }
  return v4;
}
