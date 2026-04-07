/*
 * XREFs of ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180010F54
 * Callers:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18001D4F4 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180028668 (--1CTopLevelWindow@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

void __fastcall CTopLevelWindow::ReleaseHolographicSlate(CTopLevelWindow *this)
{
  CBaseObject *v2; // rcx
  struct CVisual *v3; // rdx
  VisualCollection *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 103);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    v3 = (struct CVisual *)*((_QWORD *)this + 62);
    v4 = (VisualCollection *)(*((_QWORD *)this + 104) + 32LL);
    *((_QWORD *)this + 103) = 0LL;
    VisualCollection::InsertRelative(v4, v3, 0LL, 1, 1);
    v5 = (CBaseObject *)*((_QWORD *)this + 104);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 104) = 0LL;
    }
  }
}
