/*
 * XREFs of ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180011764
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180022FD0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180023EE8 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18004CAB8 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180069ED6 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnClipUpdated(CAccent **this)
{
  CAccent *v2; // rcx
  int updated; // eax
  unsigned int v4; // ebx
  CAccent *v6; // rdx

  if ( (*((_BYTE *)this[94] + 665) & 4) != 0 )
    CTopLevelWindow::OnBlurBehindUpdated((CTopLevelWindow *)this);
  v2 = this[35];
  if ( v2 )
  {
    v6 = this[94];
    if ( (*((_BYTE *)v6 + 172) & 0x10) != 0 )
      CAccent::SetClipRegion(v2, *((struct CBaseGeometryProxy **)v6 + 53));
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity((CTopLevelWindow *)this);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x704u);
  return v4;
}
