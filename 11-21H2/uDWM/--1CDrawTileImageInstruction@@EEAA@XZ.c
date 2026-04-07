/*
 * XREFs of ??1CDrawTileImageInstruction@@EEAA@XZ @ 0x1800184BC
 * Callers:
 *     ??_GCDrawTileImageInstruction@@EEAAPEAXI@Z @ 0x180018460 (--_GCDrawTileImageInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDrawTileImageInstruction::~CDrawTileImageInstruction(CDrawTileImageInstruction *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDrawTileImageInstruction::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
