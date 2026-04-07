/*
 * XREFs of ?_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProxy@@PEAUHWND__@@@Z @ 0x1800D46FC
 * Callers:
 *     ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180052790 (-OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D5414 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D5470 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

struct CCaptureControllerProxy *__fastcall CProjectionBorderManager::_GetCaptureControllerForCapturedWindow(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  RestartKey = 0LL;
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v5 )
      break;
    if ( (HWND)v5[2] == a2 )
    {
      v4 = v5[1];
      break;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return (struct CCaptureControllerProxy *)v4;
}
