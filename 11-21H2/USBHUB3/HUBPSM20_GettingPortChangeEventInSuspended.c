/*
 * XREFs of HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C0011C10
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00047A8 (HUBHTX_Get20PortChangeEvent.c)
 */

__int64 __fastcall HUBPSM20_GettingPortChangeEventInSuspended(__int64 a1)
{
  return HUBHTX_Get20PortChangeEvent(*(_QWORD *)(a1 + 960));
}
