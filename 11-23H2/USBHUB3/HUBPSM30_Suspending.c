/*
 * XREFs of HUBPSM30_Suspending @ 0x1C00139A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Suspend30PortUsingControlTransfer @ 0x1C0004B08 (HUBHTX_Suspend30PortUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM30_Suspending(__int64 a1)
{
  HUBHTX_Suspend30PortUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
