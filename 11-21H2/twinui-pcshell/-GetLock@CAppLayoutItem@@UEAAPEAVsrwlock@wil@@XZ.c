/*
 * XREFs of ?GetLock@CAppLayoutItem@@UEAAPEAVsrwlock@wil@@XZ @ 0x180186E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct wil::srwlock *__fastcall CAppLayoutItem::GetLock(CAppLayoutItem *this)
{
  return (CAppLayoutItem *)((char *)this + 32);
}
