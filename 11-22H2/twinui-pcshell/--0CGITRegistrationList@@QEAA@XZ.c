/*
 * XREFs of ??0CGITRegistrationList@@QEAA@XZ @ 0x180109900
 * Callers:
 *     ??0BroadcastDVRComponent@@QEAA@XZ @ 0x180108E30 (--0BroadcastDVRComponent@@QEAA@XZ.c)
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x18010905C (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0CFullScreenManager@@QEAA@XZ @ 0x1801091E4 (--0CFullScreenManager@@QEAA@XZ.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180109290 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x180109350 (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x180109400 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x180109480 (--0CShellSnapComponent@@QEAA@XZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x180109838 (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x180564690 (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0ApplicationViewFilteredCollection@@QEAA@XZ @ 0x180688D10 (--0ApplicationViewFilteredCollection@@QEAA@XZ.c)
 * Callees:
 *     InitializeSRWLock_0 @ 0x1801C7D63 (InitializeSRWLock_0.c)
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
