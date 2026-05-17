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
