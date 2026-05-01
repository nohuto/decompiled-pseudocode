/*
 * XREFs of ?get_ViewPosition@CViewPositionChangedEventArgs@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x1801C0AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewPositionChangedEventArgs::get_ViewPosition(
        CViewPositionChangedEventArgs *this,
        struct Windows::Foundation::Rect *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *((_OWORD *)this + 4);
  return result;
}
