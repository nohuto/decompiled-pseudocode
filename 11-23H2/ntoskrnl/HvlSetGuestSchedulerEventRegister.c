/*
 * XREFs of HvlSetGuestSchedulerEventRegister @ 0x140540C70
 * Callers:
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0 (KiHvEnlightenedGuestPriorityKick.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1405494F0 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlSetGuestSchedulerEventRegister(__int64 a1)
{
  return HvlpSetRegister64(589851LL, a1);
}
