/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x180264394
 * Callers:
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x1802643E0 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1802663B0 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180266AD0 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007F480 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x1800994A0 (--$ReleaseInterface@V-$CWeakReference@VCResource@@@@@@YAXAEAPEAV-$CWeakReference@VCResource@@@@@.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180265074 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop(this);
  ReleaseInterface<CWeakReference<CResource>>((__int64 *)this + 44);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 400);
  CBaseExpression::~CBaseExpression(this);
}
