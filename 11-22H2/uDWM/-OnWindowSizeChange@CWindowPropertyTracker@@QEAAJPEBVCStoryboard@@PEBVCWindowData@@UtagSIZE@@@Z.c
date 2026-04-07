/*
 * XREFs of ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800D64F8
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180013F88 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::OnWindowSizeChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        struct tagSIZE a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v12; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, a3, &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (unsigned int)v12;
    *(struct tagSIZE *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v12) + 112LL) = a4;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v10) + 40LL) |= 2u;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x25u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v9;
}
