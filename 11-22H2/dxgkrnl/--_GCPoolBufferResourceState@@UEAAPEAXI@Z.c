/*
 * XREFs of ??_GCPoolBufferResourceState@@UEAAPEAXI@Z @ 0x1C00858A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C00856DC (--1CFlipResourceState@@MEAA@XZ.c)
 */

CFlipResource **__fastcall CPoolBufferResourceState::`scalar deleting destructor'(CFlipResource **P, char a2)
{
  *P = (CFlipResource *)&CPoolBufferResourceState::`vftable';
  CFlipResourceState::~CFlipResourceState(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
