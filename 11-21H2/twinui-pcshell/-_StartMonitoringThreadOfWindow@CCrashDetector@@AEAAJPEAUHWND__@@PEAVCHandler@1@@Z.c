/*
 * XREFs of ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x1803FCB40
 * Callers:
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___ @ 0x1803FC0EC (CCrashDetector--StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_ad23e8dd0e41a5c9c2f47d777b3bbcff___ @ 0x18040508C (CCrashDetector--StartMonitoringThreadOfWindow__lambda_ad23e8dd0e41a5c9c2f47d777b3bbcff___.c)
 * Callees:
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x1800C6258 (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrashDetector::_StartMonitoringThreadOfWindow(
        PVOID pv,
        HWND hWnd,
        struct CCrashDetector::CHandler *a3)
{
  signed int Error; // ebx
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
