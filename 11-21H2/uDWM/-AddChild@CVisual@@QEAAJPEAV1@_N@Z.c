/*
 * XREFs of ?AddChild@CVisual@@QEAAJPEAV1@_N@Z @ 0x180100588
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024870 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CVisual::AddChild(CVisual *this, struct CVisual *a2, bool a3)
{
  return VisualCollection::InsertRelative((CVisual *)((char *)this + 32), a2, 0LL, 0, a3);
}
