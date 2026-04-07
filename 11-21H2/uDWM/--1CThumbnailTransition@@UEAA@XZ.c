/*
 * XREFs of ??1CThumbnailTransition@@UEAA@XZ @ 0x1800E2D78
 * Callers:
 *     ??_GCThumbnailTransition@@UEAAPEAXI@Z @ 0x1800E2DC0 (--_GCThumbnailTransition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800E32D0 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

void __fastcall CThumbnailTransition::~CThumbnailTransition(CThumbnailTransition *this)
{
  *(_QWORD *)this = &CThumbnailTransition::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
  CThumbnailTransition::StopAnimation(this);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
