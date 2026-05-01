/*
 * XREFs of ??0CGITRegistrationList@@QEAA@XZ @ 0x1800D1704
 * Callers:
 *     ??0CFullScreenManager@@QEAA@XZ @ 0x1800D0368 (--0CFullScreenManager@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1800D06D0 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x1800D0ACC (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x1800D13F8 (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x1800D157C (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x1800D163C (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x18014AF08 (--0CShellSnapComponent@@QEAA@XZ.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x1804A6F5C (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0ApplicationViewFilteredCollection@@QEAA@XZ @ 0x1805B59E0 (--0ApplicationViewFilteredCollection@@QEAA@XZ.c)
 * Callees:
 *     InitializeSRWLock_0 @ 0x180189D43 (InitializeSRWLock_0.c)
 */

CGITRegistrationList *__fastcall CGITRegistrationList::CGITRegistrationList(CGITRegistrationList *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  InitializeSRWLock_0((PSRWLOCK)this + 1);
  return this;
}
