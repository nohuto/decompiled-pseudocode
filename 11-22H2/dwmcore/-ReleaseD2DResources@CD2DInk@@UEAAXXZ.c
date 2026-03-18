/*
 * XREFs of ?ReleaseD2DResources@CD2DInk@@UEAAXXZ @ 0x18029CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Ink@@@@YAXAEAPEAUID2D1Ink@@@Z @ 0x18022F3FC (--$ReleaseInterface@UID2D1Ink@@@@YAXAEAPEAUID2D1Ink@@@Z.c)
 */

void __fastcall CD2DInk::ReleaseD2DResources(CD2DInk *this)
{
  ReleaseInterface<ID2D1Ink>((__int64 *)this + 10);
  ReleaseInterface<ID2D1InkStyle>((__int64 *)this + 11);
}
