/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002F440
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000D950 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAnimationEngine@@AEAA@XZ @ 0x1800AAC9C (--1CAnimationEngine@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  char v2; // si
  CDesktopManager *v3; // rdi
  CDesktopManager *v4; // rcx
  __int64 v5; // rax
  int v6; // r8d
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+18h] BYREF

  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
    return 0LL;
  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 1;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() != *((_DWORD *)v3 + 150) )
  {
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v6 = 0;
    if ( *(_DWORD *)(v5 + 40) )
    {
      v10 = *(_QWORD *)(v5 + 16);
      v11 = *(unsigned int *)(v5 + 40);
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)v10 + 24LL) != 4 )
          ++v6;
        v10 += 8LL;
        --v11;
      }
      while ( v11 );
      if ( v6 > 0 )
      {
        v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 116));
          v4 = CDesktopManager::s_pDesktopManagerInstance;
        }
        v13 = *((_QWORD *)v4 + 22);
        if ( v13 )
        {
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          if ( *(_DWORD *)(v13 + 64) && *(_BYTE *)(v13 + 120) )
          {
            LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
          }
          else
          {
            LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
            v2 = 0;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 116), 0xFFFFFFFF) == 1 )
          {
            CAnimationEngine::~CAnimationEngine((CAnimationEngine *)v13);
            (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v13);
          }
          if ( !v2 )
            goto LABEL_5;
        }
      }
    }
  }
  updated = CWindowList::ForceUpdateScene(this);
  v8 = updated;
  if ( updated >= 0 )
  {
LABEL_5:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AA9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)updated,
    v14);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v8;
}
