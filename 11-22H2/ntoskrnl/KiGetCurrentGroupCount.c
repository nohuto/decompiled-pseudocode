/*
 * XREFs of KiGetCurrentGroupCount @ 0x14036EB24
 * Callers:
 *     KiUpdateProcessorCount @ 0x140A894FC (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C6AE64;
}
