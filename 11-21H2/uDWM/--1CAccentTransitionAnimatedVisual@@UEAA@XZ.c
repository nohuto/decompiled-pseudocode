/*
 * XREFs of ??1CAccentTransitionAnimatedVisual@@UEAA@XZ @ 0x180099454
 * Callers:
 *     ??_ECAccentTransitionAnimatedVisual@@UEAAPEAXI@Z @ 0x180099498 (--_ECAccentTransitionAnimatedVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAccentTransitionAnimatedVisual::~CAccentTransitionAnimatedVisual(
        CAccentTransitionAnimatedVisual *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 1) = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  *((_QWORD *)this + 1) = &CGlassColorizationResources::`vftable';
}
