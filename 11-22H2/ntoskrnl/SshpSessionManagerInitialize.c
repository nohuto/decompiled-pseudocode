/*
 * XREFs of SshpSessionManagerInitialize @ 0x140B76400
 * Callers:
 *     SshInitialize @ 0x140B51AA0 (SshInitialize.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     CmSiRWLockInitialize @ 0x1408106D0 (CmSiRWLockInitialize.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140864E58 (SshpSessionManagerTraceSystemStart.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize(&SshpSessionManagerLock);
  memset(SshpSessionManagerContext, 0, 0x448uLL);
  LOWORD(stru_140C38768.Header.Lock) = 0;
  qword_140C38750 = (__int64)SshpSessionManagerControlSessionCallback;
  stru_140C38768.Header.WaitListHead.Blink = &stru_140C38768.Header.WaitListHead;
  stru_140C38768.Header.WaitListHead.Flink = &stru_140C38768.Header.WaitListHead;
  stru_140C38768.Header.Size = 6;
  stru_140C38768.Header.SignalState = 1;
  return SshpSessionManagerTraceSystemStart();
}
