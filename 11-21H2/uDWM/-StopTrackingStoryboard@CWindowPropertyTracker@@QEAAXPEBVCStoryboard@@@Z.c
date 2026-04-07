/*
 * XREFs of ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x1800D1270
 * Callers:
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800D8BC0 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x1800D1750 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowPropertyTracker::StopTrackingStoryboard(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2)
{
  int v4; // ebx
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // edx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 >= 0 )
    {
      v6 = 8LL * v5;
      do
      {
        v7 = *(_QWORD *)(v6 + *(_QWORD *)this);
        v8 = 0LL;
        v9 = *(_QWORD *)(v7 + 8);
        v10 = *(_DWORD *)(v7 + 32);
        if ( v10 )
        {
          do
          {
            if ( a2 == *(const struct CStoryboard **)(v9 + 8 * v8) )
              break;
            v8 = (unsigned int)(v8 + 1);
          }
          while ( (unsigned int)v8 < v10 );
        }
        if ( (unsigned int)v8 < v10 )
        {
          while ( (unsigned int)v8 < v10 - 1 )
          {
            *(_QWORD *)(v9 + 8 * v8) = *(_QWORD *)(v9 + 8LL * (unsigned int)(v8 + 1));
            v8 = (unsigned int)(v8 + 1);
            v10 = *(_DWORD *)(v7 + 32);
          }
          *(_DWORD *)(v7 + 32) = v10 - 1;
        }
        if ( !*(_DWORD *)(*(_QWORD *)(v6 + *(_QWORD *)this) + 32LL) )
          CWindowPropertyTracker::_StopTrackingWindowByIndex(this, v5);
        v6 -= 8LL;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
}
