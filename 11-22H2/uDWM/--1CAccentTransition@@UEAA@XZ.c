/*
 * XREFs of ??1CAccentTransition@@UEAA@XZ @ 0x1800A2144
 * Callers:
 *     ??_ECAccentTransition@@UEAAPEAXI@Z @ 0x1800A2190 (--_ECAccentTransition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAccentTransition::~CAccentTransition(CAccentTransition *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CAccentTransition::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 1) = &CAccentTransition::`vftable'{for `CBaseObject'};
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 1) = &CGlassColorizationResources::`vftable';
}
