/*
 * XREFs of ?Release@CStoryboard@@QEAAKXZ @ 0x1800D86A0
 * Callers:
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A6B4C (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800A6CD0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800A778C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800D506C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800D5EB0 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x1800D5EF0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x1800D5F30 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800D5F60 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x1800D80E0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x1800D8C18 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DBBA0 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::Release(CStoryboard *this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    CStoryboard::_Cleanup(this);
  return CBaseObject::Release(this);
}
