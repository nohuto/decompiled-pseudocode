/*
 * XREFs of KdTrap @ 0x14030DF3C
 * Callers:
 *     KiDispatchException @ 0x14030CCA0 (KiDispatchException.c)
 * Callees:
 *     KdpStub @ 0x1403D074C (KdpStub.c)
 *     KdpTrap @ 0x140AB037C (KdpTrap.c)
 */

__int64 __fastcall KdTrap(int a1, int a2, int a3, int a4, char a5, char a6)
{
  if ( KdpDebugRoutineSelect )
    return KdpTrap(a1, a2, a3, a4, a5, a6);
  else
    return KdpStub(a1, a2, a3, a4, a5, a6);
}
