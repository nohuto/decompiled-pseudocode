/*
 * XREFs of ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180132294
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A588 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18012C9E8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012EBFC (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18012F540 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18012F598 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z @ 0x180130144 (-HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z.c)
 *     ?TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801325C0 (-TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x180131B7C (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::Terminate(CMonitor *this, char a2, struct _TP_CALLBACK_INSTANCE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)this + 14) != 6 && (!a2 || *((_DWORD *)this + 14) != 5) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
    v9 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( *((_DWORD *)this + 14) == 6 || *((_DWORD *)this + 14) == 5 && a2 && *((_QWORD *)this + 22) )
    {
      ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    }
    else
    {
      *((_DWORD *)this + 14) = 5;
      if ( a2 && *((_QWORD *)this + 22) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x13u,
            (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
            this);
        }
        (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
        SubmitThreadpoolWork(*((PTP_WORK *)this + 22));
        if ( v9 )
          LeaveCriticalSection(lpCriticalSection);
      }
      else
      {
        if ( v9 )
          LeaveCriticalSection(lpCriticalSection);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x14u,
            (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
            this);
        }
        v6 = *((_QWORD *)this + 13);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, *((_QWORD *)this + 16));
          ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 13);
          ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 16);
        }
        CoTaskMemFree(*((LPVOID *)this + 12));
        *((_QWORD *)this + 12) = 0LL;
        ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 11);
        CoTaskMemFree(*((LPVOID *)this + 10));
        *((_QWORD *)this + 10) = 0LL;
        v7 = *((_QWORD *)this + 19);
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, *((_QWORD *)this + 20));
          ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 19);
          ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 20);
        }
        ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 18);
        CoTaskMemFree(*((LPVOID *)this + 17));
        *((_QWORD *)this + 17) = 0LL;
        *((_DWORD *)this + 14) = 6;
        if ( *((_QWORD *)this + 21) )
        {
          if ( a3 )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x15u,
                (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
                this);
            }
            SetEventWhenCallbackReturns(a3, *((HANDLE *)this + 21));
          }
          else
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x16u,
                (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
                this);
            }
            SetEvent(*((HANDLE *)this + 21));
          }
        }
      }
    }
  }
}
