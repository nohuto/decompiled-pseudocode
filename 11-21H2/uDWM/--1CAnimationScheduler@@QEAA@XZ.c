/*
 * XREFs of ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A6B4C
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AF75C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18003FB04 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800D86A0 (-Release@CStoryboard@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAnimationScheduler::~CAnimationScheduler(CAnimationScheduler *this)
{
  __int64 v2; // rdi
  _QWORD *i; // rsi
  CStoryboard *v4; // rcx
  CWindowPropertyTracker *v5; // rbx

  *(_QWORD *)this = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 1) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
  v2 = 0LL;
  for ( i = (_QWORD *)((char *)this + 16); (unsigned int)v2 < *((_DWORD *)this + 10); v2 = (unsigned int)(v2 + 1) )
  {
    v4 = *(CStoryboard **)(*i + 8 * v2);
    if ( v4 )
      CStoryboard::Release(v4);
  }
  v5 = (CAnimationScheduler *)((char *)this + 48);
  CWindowPropertyTracker::StopTrackingAllWindows(v5);
  CWindowPropertyTracker::StopTrackingAllWindows(v5);
  DynArrayImpl<0>::~DynArrayImpl<0>(v5);
  DynArrayImpl<0>::~DynArrayImpl<0>(i);
}
