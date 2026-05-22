/*
 * XREFs of ??_GCIndependentFlipFramePresentStatistics@@UEAAPEAXI@Z @ 0x1801B10F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

CIndependentFlipFramePresentStatistics *__fastcall CIndependentFlipFramePresentStatistics::`scalar deleting destructor'(
        CIndependentFlipFramePresentStatistics *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
