/*
 * XREFs of ?get_RectInCortanaVisibleMonitor@CCortanaShownEventArgs@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180182DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCortanaShownEventArgs::get_RectInCortanaVisibleMonitor(
        CCortanaShownEventArgs *this,
        struct Windows::Foundation::Rect *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *((_OWORD *)this + 2);
  return result;
}
