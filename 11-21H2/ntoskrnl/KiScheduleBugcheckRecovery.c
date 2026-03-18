/*
 * XREFs of KiScheduleBugcheckRecovery @ 0x140579780
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405788B0 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KiRecordRecoveryFailure @ 0x14057958C (KiRecordRecoveryFailure.c)
 *     KiStallBugcheckThread @ 0x1405798A8 (KiStallBugcheckThread.c)
 */

char KiScheduleBugcheckRecovery()
{
  bool v0; // bl
  char result; // al

  v0 = KeAreInterruptsEnabled();
  _enable();
  LODWORD(KiDeferredBugcheckRecoveryDpc) = 531;
  qword_140C2A9A0 = 0LL;
  qword_140C2A998 = (__int64)KiScheduleBugcheckRecoveryWorkItem;
  qword_140C2A9B8 = 0LL;
  qword_140C2A990 = 0LL;
  if ( (unsigned __int8)KiInsertQueueDpc((ULONG_PTR)&KiDeferredBugcheckRecoveryDpc, 0LL, 0LL, 0LL, 0) )
    result = KiStallBugcheckThread();
  else
    result = KiRecordRecoveryFailure(4u);
  if ( !v0 )
    _disable();
  return result;
}
