/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800D8D70
 * Callers:
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrpIssueEnclaveCall @ 0x1800AD210 (LdrpIssueEnclaveCall.c)
 *     LdrDeleteEnclave @ 0x1800D8680 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D8710 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D8820 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D88C0 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800D8CEC (LdrpDeleteEnclave.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
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
