/*
 * XREFs of ??1CDrawBitmapInstruction@@EEAA@XZ @ 0x18000E1AC
 * Callers:
 *     ??_ECDrawBitmapInstruction@@EEAAPEAXI@Z @ 0x18000E150 (--_ECDrawBitmapInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
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
