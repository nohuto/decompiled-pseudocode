/*
 * XREFs of ?IsPlaceModeCommitAllowed@WindowArrangementView@@UEAA_NXZ @ 0x18051A880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall WindowArrangementView::IsPlaceModeCommitAllowed(WindowArrangementView *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
