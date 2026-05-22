/*
 * XREFs of ??_ECTouchFrameStats@@MEAAPEAXI@Z @ 0x1801A5420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CTouchFrameStats@@MEAA@XZ @ 0x1801A5280 (--1CTouchFrameStats@@MEAA@XZ.c)
 */

CTouchFrameStats *__fastcall CTouchFrameStats::`vector deleting destructor'(CTouchFrameStats *this, char a2)
{
  CTouchFrameStats::~CTouchFrameStats(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
