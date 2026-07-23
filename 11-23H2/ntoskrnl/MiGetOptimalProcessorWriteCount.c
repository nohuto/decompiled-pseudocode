/*
 * XREFs of MiGetOptimalProcessorWriteCount @ 0x14036F1A4
 * Callers:
 *     MiInitializeZeroEngines @ 0x1406B2824 (MiInitializeZeroEngines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetOptimalProcessorWriteCount(unsigned int a1, int a2)
{
  return *(unsigned int *)(*(_QWORD *)(376LL * a1 + qword_140C65AA0 + 368) + 96LL * a2 + 108);
}
