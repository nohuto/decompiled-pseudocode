/*
 * XREFs of ?get_IsReady@HomeGestureReadyChangedEventArgs@@UEAAJPEAE@Z @ 0x18002E790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HomeGestureReadyChangedEventArgs::get_IsReady(
        HomeGestureReadyChangedEventArgs *this,
        unsigned __int8 *a2)
{
  *a2 = *((_BYTE *)this + 32);
  return 0LL;
}
