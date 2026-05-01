/*
 * XREFs of ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x18002A7BC
 * Callers:
 *     CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___ @ 0x18002A754 (CCrashDetector--TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818.c)
 *     ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x1804DDCA8 (-_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(
        PVOID pv,
        char *hObject,
        struct CCrashDetector::CHandler *a3)
{
  char *v6; // rbx
  char *v7; // rcx
  PTP_WAIT ThreadpoolWait; // rax
  int Error; // esi
  void (__fastcall ***v10)(_QWORD, __int64); // rcx

  v6 = hObject;
  if ( a3 )
  {
    if ( *((_QWORD *)pv + 2) )
    {
      Error = -2147418113;
    }
    else
    {
      v7 = (char *)*((_QWORD *)pv + 1);
      v6 = 0LL;
      *((_QWORD *)pv + 1) = 0LL;
      if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v7);
      *((_QWORD *)pv + 1) = hObject;
      if ( hObject )
      {
        ThreadpoolWait = CreateThreadpoolWait(CCrashDetector::s_ObjectSignaledHandler, pv, 0LL);
        *((_QWORD *)pv + 2) = ThreadpoolWait;
        if ( ThreadpoolWait )
        {
          Error = 0;
LABEL_8:
          v10 = *(void (__fastcall ****)(_QWORD, __int64))pv;
          *(_QWORD *)pv = 0LL;
          if ( v10 )
            (**v10)(v10, 1LL);
          *(_QWORD *)pv = a3;
          SetThreadpoolWait(*((PTP_WAIT *)pv + 2), *((HANDLE *)pv + 1), 0LL);
          return (unsigned int)Error;
        }
        Error = ResultFromKnownLastError();
        if ( Error >= 0 )
          goto LABEL_8;
      }
      else
      {
        Error = -2147024809;
      }
    }
    (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64))a3)(a3, 1LL);
  }
  else
  {
    Error = -2147024809;
  }
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return (unsigned int)Error;
}
