/*
 * XREFs of ?GetConnected@CBasePin@@QEAAPEAUIPin@@XZ @ 0x14057AE89
 * Callers:
 *     sub_14057AE30 @ 0x14057AE30 (sub_14057AE30.c)
 * Callees:
 *     <none>
 */

struct IPin *__fastcall CBasePin::GetConnected(CBasePin *this)
{
  return (struct IPin *)*((_QWORD *)this + 6);
}
