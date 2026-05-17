/*
 * XREFs of EtwpFreeRegistration @ 0x180030104
 * Callers:
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x1800327E0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A2BC0 (RtlpInterlockedPushEntrySList.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 result; // rax

  memset_thunk_772440563353939046((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
