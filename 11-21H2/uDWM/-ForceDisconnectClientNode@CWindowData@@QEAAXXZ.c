/*
 * XREFs of ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001EBC8
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001E000 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18001D4F4 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowData::ForceDisconnectClientNode(CWindowData *this)
{
  struct CVisual **v2; // rcx
  CBaseObject *v3; // rcx

  v2 = (struct CVisual **)*((_QWORD *)this + 55);
  if ( v2 )
    CTopLevelWindow::ForceDisconnectClientArea(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 18) = 0LL;
  }
}
