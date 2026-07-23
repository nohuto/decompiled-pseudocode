/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x18004CB20
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18004C9D0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWaitpValidateWait @ 0x180031BDC (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpWaitOutstandingCallbackCount(__int64 a1)
{
  __int64 v1; // rbx
  _RTL_SRWLOCK *v2; // rdi

  v1 = a1;
  TppWaitpValidateWait(a1, 0LL, 0LL);
  v2 = (_RTL_SRWLOCK *)(v1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 240));
  LODWORD(v1) = *(_DWORD *)(v1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return (unsigned int)v1;
}
