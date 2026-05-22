/*
 * XREFs of ?SetRoot@CHwndTarget@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x180012DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHwndTarget::SetRoot(DirectComposition::CHwndTarget *this, struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 4) + 8LL),
           0x34u,
           a2);
}
