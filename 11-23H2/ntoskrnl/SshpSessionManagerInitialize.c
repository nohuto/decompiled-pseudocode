/*
 * XREFs of SshpSessionManagerInitialize @ 0x140B754D4
 * Callers:
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CmSiRWLockInitialize @ 0x14080E420 (CmSiRWLockInitialize.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140864C78 (SshpSessionManagerTraceSystemStart.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize(&SshpSessionManagerLock);
  memset(SshpSessionManagerContext, 0, 0x448uLL);
  LOWORD(stru_140C386E8.Header.Lock) = 0;
  qword_140C386D0 = (__int64)SshpSessionManagerControlSessionCallback;
  stru_140C386E8.Header.WaitListHead.Blink = &stru_140C386E8.Header.WaitListHead;
  stru_140C386E8.Header.WaitListHead.Flink = &stru_140C386E8.Header.WaitListHead;
  stru_140C386E8.Header.Size = 6;
  stru_140C386E8.Header.SignalState = 1;
  return SshpSessionManagerTraceSystemStart();
}
