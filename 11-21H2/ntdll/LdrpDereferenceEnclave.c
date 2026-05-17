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
