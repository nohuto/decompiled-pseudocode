/*
 * XREFs of BgpGxRectangleSize @ 0x14038831C
 * Callers:
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwConfigureProgressResources @ 0x140AEE920 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x140AEEAD8 (BgpGxReservePoolRectangleSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
