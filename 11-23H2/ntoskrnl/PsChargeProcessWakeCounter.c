/*
 * XREFs of PsChargeProcessWakeCounter @ 0x14077F210
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14073A070 (AlpcpCompleteDispatchMessage.c)
 *     EtwpQueueNotification @ 0x1407813D4 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x140800FD4 (PspCreateActivityReference.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140981BDC (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1402B6DB0 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1407385C0 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}
