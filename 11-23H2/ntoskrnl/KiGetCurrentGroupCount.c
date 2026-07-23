/*
 * XREFs of KiGetCurrentGroupCount @ 0x14036F314
 * Callers:
 *     KiUpdateProcessorCount @ 0x140A88CA8 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C6AD64;
}
