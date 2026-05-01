/*
 * XREFs of ?CanResize@CSnappedWindow@@UEBA_NXZ @ 0x1801866C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSnappedWindow::CanResize(CSnappedWindow *this)
{
  return *((_BYTE *)this + 16);
}
