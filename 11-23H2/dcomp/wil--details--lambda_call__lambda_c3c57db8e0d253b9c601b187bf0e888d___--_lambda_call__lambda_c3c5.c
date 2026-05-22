/*
 * XREFs of wil::details::lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___::_lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___ @ 0x1800ED7C0
 * Callers:
 *     ?AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EDB38 (-AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1P.c)
 * Callees:
 *     _lambda_c3c57db8e0d253b9c601b187bf0e888d_::operator() @ 0x1800ED8BC (_lambda_c3c57db8e0d253b9c601b187bf0e888d_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___::_lambda_call__lambda_c3c57db8e0d253b9c601b187bf0e888d___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_c3c57db8e0d253b9c601b187bf0e888d_::operator()();
  }
  return result;
}
