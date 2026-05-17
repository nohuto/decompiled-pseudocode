/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x180070A24
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180070010 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18001E368 (TppWaitpValidateWait.c)
 */

__int64 __fastcall TpWaitOutstandingCallbackCount(__int64 a1)
{
  __int64 v1; // rbx
  volatile signed __int64 *v2; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9

  v1 = a1;
  TppWaitpValidateWait(a1, 0);
  v2 = (volatile signed __int64 *)(v1 + 240);
  RtlAcquireSRWLockExclusive(v1 + 240, v3, v4, v5);
  LODWORD(v1) = *(_DWORD *)(v1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return (unsigned int)v1;
}
