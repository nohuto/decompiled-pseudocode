/*
 * XREFs of ?GetBuffer@FxMemoryBufferFromPoolLookaside@@UEAAPEAXXZ @ 0x1C00095D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall FxMemoryBufferFromPoolLookaside::GetBuffer(FxMemoryBufferFromPoolLookaside *this)
{
  return *(void **)&this->m_ObjectFlags;
}
