/*
 * XREFs of HvlSetGuestSchedulerEventRegister @ 0x1405405B0
 * Callers:
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B2E20 (KiHvEnlightenedGuestPriorityKick.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140548E30 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlSetGuestSchedulerEventRegister(__int64 a1)
{
  return HvlpSetRegister64(589851LL, a1);
}
