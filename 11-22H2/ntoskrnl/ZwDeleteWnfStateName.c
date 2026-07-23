/*
 * XREFs of ZwDeleteWnfStateName @ 0x14041C280
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PopFreeRegistration @ 0x140682A04 (PopFreeRegistration.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077F198 (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D1644 (PspAllocateAndQueryProcessNotificationChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
