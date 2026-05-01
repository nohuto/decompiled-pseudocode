/*
 * XREFs of ?GetLock@CAppLayoutItem@@UEAAPEAVsrwlock@wil@@XZ @ 0x1801C5A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct wil::srwlock *__fastcall CAppLayoutItem::GetLock(CAppLayoutItem *this)
{
  return (CAppLayoutItem *)((char *)this + 32);
}
