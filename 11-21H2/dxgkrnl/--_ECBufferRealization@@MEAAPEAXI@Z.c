/*
 * XREFs of ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x1C0004570
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C00045B4 (--1CBufferRealization@@MEAA@XZ.c)
 */

CBufferRealization *__fastcall CBufferRealization::`vector deleting destructor'(CBufferRealization *P, char a2)
{
  CBufferRealization::~CBufferRealization(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
