/*
 * XREFs of HUBMISC_DsmEventTimer @ 0x1C002E940
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8DC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMISC_DsmEventTimer(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a2 + 504, 1002);
}
