/*
 * XREFs of ??1CDrawBitmapInstruction@@EEAA@XZ @ 0x180037DC0
 * Callers:
 *     ??_ECDrawBitmapInstruction@@EEAAPEAXI@Z @ 0x180037EA0 (--_ECDrawBitmapInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDrawBitmapInstruction::~CDrawBitmapInstruction(CDrawBitmapInstruction *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDrawBitmapInstruction::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
