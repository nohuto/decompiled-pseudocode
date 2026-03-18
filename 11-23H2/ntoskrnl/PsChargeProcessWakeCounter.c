/*
 * XREFs of PsChargeProcessWakeCounter @ 0x14077F020
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x140739E80 (AlpcpCompleteDispatchMessage.c)
 *     EtwpQueueNotification @ 0x1407811E4 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x140800D04 (PspCreateActivityReference.c)
 *     PopPowerRequestSpecialRequestSet @ 0x1409819DC (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1402B6B20 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1407383D0 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}
