/*
 * XREFs of HalpMcaClearError @ 0x140502F90
 * Callers:
 *     HalpCmcPollProcessor @ 0x140380398 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x140503B18 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A95130 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaWriteMsrStatus @ 0x140380458 (HalpWheaWriteMsrStatus.c)
 *     HalpMcaProcessorBankClear @ 0x140505ECC (HalpMcaProcessorBankClear.c)
 */

__int64 __fastcall HalpMcaClearError(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  HalpMcaProcessorBankClear(a2, *(unsigned int *)(a1 + 36));
  result = HalpWheaWriteMsrStatus(a2, *(_DWORD *)(a1 + 36));
  _mm_mfence();
  return result;
}
