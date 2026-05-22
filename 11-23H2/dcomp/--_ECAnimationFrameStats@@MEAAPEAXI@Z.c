/*
 * XREFs of ??_ECAnimationFrameStats@@MEAAPEAXI@Z @ 0x180004020
 * Callers:
 *     ?Release@CAnimationFrameStats@@UEAAKXZ @ 0x180003D10 (-Release@CAnimationFrameStats@@UEAAKXZ.c)
 * Callees:
 *     ??1CCompFrameStats@@MEAA@XZ @ 0x180003DC4 (--1CCompFrameStats@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

CAnimationFrameStats *__fastcall CAnimationFrameStats::`vector deleting destructor'(
        CAnimationFrameStats *this,
        char a2)
{
  *(_QWORD *)this = &CAnimationFrameStats::`vftable'{for `CCompFrameStats'};
  *((_QWORD *)this + 20) = &CAnimationFrameStats::`vftable'{for `IDCompositionAnimationStats'};
  CCompFrameStats::~CCompFrameStats(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xAF8uLL);
  return this;
}
