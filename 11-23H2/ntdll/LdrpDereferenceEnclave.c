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

LOGICAL __fastcall LdrpDereferenceEnclave(PVOID BaseAddress)
{
  LOGICAL result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 15, 0xFFFFFFFF);
  if ( result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *((PVOID *)BaseAddress + 14));
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
