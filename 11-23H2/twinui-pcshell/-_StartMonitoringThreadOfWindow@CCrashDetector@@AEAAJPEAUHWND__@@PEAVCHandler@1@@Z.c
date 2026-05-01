/*
 * XREFs of ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x1804DDCA8
 * Callers:
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___ @ 0x1804DC814 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_92e83516b3218b4cf35de230f3d7f6be___ @ 0x1804E1CFC (CCrashDetector--StartMonitoringThreadOfWindow__lambda_92e83516b3218b4cf35de230f3d7f6be___.c)
 * Callees:
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x18002A7BC (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrashDetector::_StartMonitoringThreadOfWindow(
        PVOID pv,
        HWND hWnd,
        struct CCrashDetector::CHandler *a3)
{
  signed int Error; // edi
  DWORD WindowThreadProcessId; // ebp
  char *v7; // rax
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)pv + 2) )
  {
    Error = -2147418113;
  }
  else
  {
    WindowThreadProcessId = GetWindowThreadProcessId(hWnd, &dwProcessId);
    if ( WindowThreadProcessId || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      v7 = (char *)OpenThread(0x100000u, 0, WindowThreadProcessId);
      if ( v7 )
        return (unsigned int)CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(pv, v7, a3);
      Error = ResultFromKnownLastError();
    }
  }
  if ( a3 )
    (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64))a3)(a3, 1LL);
  return (unsigned int)Error;
}
