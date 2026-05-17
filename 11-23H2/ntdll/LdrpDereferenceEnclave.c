/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800D8720
 * Callers:
 *     LdrpObtainLockedEnclave @ 0x180021F1C (LdrpObtainLockedEnclave.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpIssueEnclaveCall @ 0x1800AF2E0 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x1800D8030 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D80C0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D81D0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D8270 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800D869C (LdrpDeleteEnclave.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpDereferenceEnclave(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 60), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 112));
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
