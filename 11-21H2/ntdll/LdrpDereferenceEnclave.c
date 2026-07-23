/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800D8A60
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800D8380 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800D8410 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800D8510 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800D85B0 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800D89DC (LdrpDeleteEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8EB0 (LdrpIssueEnclaveCall.c)
 *     LdrpObtainLockedEnclave @ 0x1800D9138 (LdrpObtainLockedEnclave.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
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
