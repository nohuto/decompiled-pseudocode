/*
 * XREFs of ZwDeleteWnfStateName @ 0x14041C940
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PopFreeRegistration @ 0x140682A04 (PopFreeRegistration.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EC88 (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D10C4 (PspAllocateAndQueryProcessNotificationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
