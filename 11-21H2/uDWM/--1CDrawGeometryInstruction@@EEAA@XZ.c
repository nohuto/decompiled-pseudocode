/*
 * XREFs of ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x18001CFEC
 * Callers:
 *     ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x18001CF90 (--_ECDrawGeometryInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDrawGeometryInstruction::~CDrawGeometryInstruction(CDrawGeometryInstruction *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CDrawGeometryInstruction::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v3 )
    CBaseObject::Release(v3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
