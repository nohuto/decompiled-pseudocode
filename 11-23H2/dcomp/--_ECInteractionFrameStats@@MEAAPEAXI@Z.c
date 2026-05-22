/*
 * XREFs of ??_ECInteractionFrameStats@@MEAAPEAXI@Z @ 0x1801A53E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CInteractionFrameStats@@MEAA@XZ @ 0x1801A51F0 (--1CInteractionFrameStats@@MEAA@XZ.c)
 */

CInteractionFrameStats *__fastcall CInteractionFrameStats::`vector deleting destructor'(
        CInteractionFrameStats *this,
        char a2)
{
  CInteractionFrameStats::~CInteractionFrameStats(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
