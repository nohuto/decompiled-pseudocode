/*
 * XREFs of SshpSessionManagerInitialize @ 0x140B754D4
 * Callers:
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     CmSiRWLockInitialize @ 0x14080E150 (CmSiRWLockInitialize.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140864A38 (SshpSessionManagerTraceSystemStart.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&SshpSessionManagerLock);
  memset(SshpSessionManagerContext, 0, 0x448uLL);
  LOWORD(stru_140C38748.Header.Lock) = 0;
  qword_140C38730 = (__int64)SshpSessionManagerControlSessionCallback;
  stru_140C38748.Header.WaitListHead.Blink = &stru_140C38748.Header.WaitListHead;
  stru_140C38748.Header.WaitListHead.Flink = &stru_140C38748.Header.WaitListHead;
  stru_140C38748.Header.Size = 6;
  stru_140C38748.Header.SignalState = 1;
  return SshpSessionManagerTraceSystemStart();
}
