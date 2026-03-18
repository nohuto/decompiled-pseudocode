/*
 * XREFs of MiRestoreIdealProcessorThread @ 0x1406670B4
 * Callers:
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 * Callees:
 *     KeSetIdealProcessorThreadEx @ 0x1403CE7F8 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall MiRestoreIdealProcessorThread(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 != -1 )
    return KeSetIdealProcessorThreadEx((__int64)KeGetCurrentThread(), a1, 0LL);
  return result;
}
