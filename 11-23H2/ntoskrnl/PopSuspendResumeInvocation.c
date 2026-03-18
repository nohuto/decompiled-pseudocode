/*
 * XREFs of PopSuspendResumeInvocation @ 0x1409982D0
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140983CF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A528 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x14098A724 (PopSendSuspendResumeServiceNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 PopSuspendResumeInvocation()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C6AF48 )
    return ((__int64 (*)(void))qword_140C6AF48)();
  return result;
}
