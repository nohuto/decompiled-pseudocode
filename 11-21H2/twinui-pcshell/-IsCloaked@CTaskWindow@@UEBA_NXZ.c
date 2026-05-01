/*
 * XREFs of ?IsCloaked@CTaskWindow@@UEBA_NXZ @ 0x1801823A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CTaskWindow::IsCloaked(CTaskWindow *this)
{
  return *((_BYTE *)this + 56);
}
