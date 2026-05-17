/*
 * XREFs of EtwpFreeRegistration @ 0x18002FF34
 * Callers:
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A4C80 (RtlpInterlockedPushEntrySList.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 result; // rax

  memset_thunk_772440563353939046((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
