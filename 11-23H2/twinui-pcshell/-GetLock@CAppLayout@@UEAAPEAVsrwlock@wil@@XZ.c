/*
 * XREFs of ?GetLock@CAppLayout@@UEAAPEAVsrwlock@wil@@XZ @ 0x1801C5A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct wil::srwlock *__fastcall CAppLayout::GetLock(CAppLayout *this)
{
  return (CAppLayout *)((char *)this + 24);
}
