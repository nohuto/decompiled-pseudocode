/*
 * XREFs of ?GetStreamEventHandle@CBaseStreamControl@@AEBAPEAXXZ @ 0x14057AECB
 * Callers:
 *     sub_14057AE30 @ 0x14057AE30 (sub_14057AE30.c)
 * Callees:
 *     <none>
 */

void *__fastcall CBaseStreamControl::GetStreamEventHandle(CBaseStreamControl *this)
{
  return (void *)*((_QWORD *)this + 12);
}
