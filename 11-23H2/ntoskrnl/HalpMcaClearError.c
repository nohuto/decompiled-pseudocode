/*
 * XREFs of HalpMcaClearError @ 0x1405034E0
 * Callers:
 *     HalpCmcPollProcessor @ 0x140380538 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x140504068 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A94FA0 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x1403805F8 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankClear @ 0x14050641C (HalpMcaProcessorBankClear.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  HalpMcaProcessorBankClear(a2, *(unsigned int *)(a1 + 36));
  result = HalpWheaWriteMsrStatus(a2, *(_DWORD *)(a1 + 36));
  _mm_mfence();
  return result;
}
