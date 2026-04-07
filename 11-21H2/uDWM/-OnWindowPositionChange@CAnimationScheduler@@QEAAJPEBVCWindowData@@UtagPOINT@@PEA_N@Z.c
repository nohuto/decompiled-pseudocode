/*
 * XREFs of ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18001ADD0
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x1800A7F2C (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800D10E8 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnWindowPositionChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        struct tagPOINT a3,
        bool *a4)
{
  CAnimationScheduler *v8; // rcx
  signed int v9; // ebp
  __int64 i; // rdi
  const struct CStoryboard *v12; // r15
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  *a4 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v12 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
    if ( CAnimationScheduler::_ShouldTrack(v8, a2, v12, 0) )
    {
      v9 = CWindowPropertyTracker::OnWindowPositionChange((CAnimationScheduler *)((char *)this + 48), v12, a2, a3);
      LOBYTE(v8) = v9 >= 0;
      *a4 |= v9 >= 0;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return (unsigned int)v9;
}
