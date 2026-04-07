/*
 * XREFs of ??1CDrawImageInstruction@@EEAA@XZ @ 0x18000DCCC
 * Callers:
 *     ??_GCDrawImageInstruction@@EEAAPEAXI@Z @ 0x18000DC70 (--_GCDrawImageInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDrawImageInstruction::~CDrawImageInstruction(CDrawImageInstruction *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDrawImageInstruction::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
