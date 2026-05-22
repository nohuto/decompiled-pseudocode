/*
 * XREFs of ??_GCCompFrameStats@@MEAAPEAXI@Z @ 0x1801A3F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompFrameStats@@MEAA@XZ @ 0x180003DC4 (--1CCompFrameStats@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

CCompFrameStats *__fastcall CCompFrameStats::`scalar deleting destructor'(CCompFrameStats *this, char a2)
{
  CCompFrameStats::~CCompFrameStats(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
