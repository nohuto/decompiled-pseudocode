/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800405C0
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800158DC (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rdi
  __int64 v3; // rcx
  int v4; // edx
  int updated; // eax
  unsigned int v6; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  CAnimationEngine *v11; // rax
  CAnimationEngine *v12; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
    return 0LL;
  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() != *((_DWORD *)v2 + 146) )
  {
    v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    v4 = 0;
    if ( *(_DWORD *)(v3 + 40) )
    {
      v8 = *(_QWORD *)(v3 + 16);
      v9 = *(unsigned int *)(v3 + 40);
      do
      {
        v10 = v4 + 1;
        if ( *(_DWORD *)(*(_QWORD *)v8 + 24LL) == 4 )
          v10 = v4;
        v4 = v10;
        v8 += 8LL;
        --v9;
      }
      while ( v9 );
      if ( v10 > 0 )
      {
        v11 = CDesktopManager::AcquireAnimationEngine();
        v12 = v11;
        if ( v11 )
        {
          if ( CAnimationEngine::IsIdle(v11) )
          {
            CAnimationEngine::Release(v12);
            goto LABEL_5;
          }
          CAnimationEngine::Release(v12);
        }
      }
    }
  }
  updated = CWindowList::ForceUpdateScene(this);
  v6 = updated;
  if ( updated >= 0 )
  {
LABEL_5:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A45,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)updated);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v6;
}
