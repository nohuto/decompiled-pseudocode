/*
 * XREFs of ??_ECPresentationBuffer@@MEAAPEAXI@Z @ 0x1801AF160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CPresentationBuffer@@MEAA@XZ @ 0x1801AF034 (--1CPresentationBuffer@@MEAA@XZ.c)
 */

CPresentationBuffer *__fastcall CPresentationBuffer::`vector deleting destructor'(CPresentationBuffer *this, char a2)
{
  CPresentationBuffer::~CPresentationBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
