/*
 * XREFs of ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180124120
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800443EC (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011A568 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011EA0C (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18011F30C (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18011F364 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18011FE30 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180124530 (-TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180119D8C (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x1801233DC (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::Terminate(CMonitor *this, char a2, struct _TP_CALLBACK_INSTANCE *a3)
{
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  void *v13; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)this + 14) != 6 && (!a2 || *((_DWORD *)this + 14) != 5) )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
    v15 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( *((_DWORD *)this + 14) == 6 || *((_DWORD *)this + 14) == 5 && a2 && *((_QWORD *)this + 63) )
    {
LABEL_15:
      if ( v15 )
        LeaveCriticalSection(lpCriticalSection);
      return;
    }
    *((_DWORD *)this + 14) = 5;
    if ( a2 && *((_QWORD *)this + 63) )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x15u,
          (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
          this);
      }
      (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
      SubmitThreadpoolWork(*((PTP_WORK *)this + 63));
      goto LABEL_15;
    }
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
        this);
    }
    v6 = (void *)*((_QWORD *)this + 38);
    if ( v6 )
    {
      SetEvent(v6);
      v7 = (void *)*((_QWORD *)this + 36);
      if ( v7 )
      {
        WaitForSingleObjectEx(v7, 0xFFFFFFFF, 0);
        ATL::CHandle::Close((void **)this + 36);
      }
      ATL::CHandle::Close((void **)this + 38);
    }
    v8 = *((_QWORD *)this + 15);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, *((_QWORD *)this + 22));
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 15);
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 22);
    }
    CoTaskMemFree(*((LPVOID *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
    ATL::CHandle::Close((void **)this + 16);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 13);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 11);
    v9 = *((_QWORD *)this + 12);
    if ( v9 )
    {
      *((_QWORD *)this + 12) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    CoTaskMemFree(*((LPVOID *)this + 10));
    *((_QWORD *)this + 10) = 0LL;
    v10 = *((_QWORD *)this + 29);
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 88LL))(v10, *((_QWORD *)this + 30));
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 29);
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 30);
    }
    CoTaskMemFree(*((LPVOID *)this + 27));
    *((_QWORD *)this + 27) = 0LL;
    ATL::CHandle::Close((void **)this + 31);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 26);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 24);
    v11 = *((_QWORD *)this + 25);
    if ( v11 )
    {
      *((_QWORD *)this + 25) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    CoTaskMemFree(*((LPVOID *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 14) = 6;
    if ( *((_QWORD *)this + 35) )
    {
      if ( a3 )
      {
        v12 = (void *)*((_QWORD *)this + 35);
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x17u,
            (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
            this);
          v12 = (void *)*((_QWORD *)this + 35);
        }
        SetEventWhenCallbackReturns(a3, v12);
      }
      else
      {
        v13 = (void *)*((_QWORD *)this + 35);
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x18u,
            (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
            this);
          v13 = (void *)*((_QWORD *)this + 35);
        }
        SetEvent(v13);
      }
    }
  }
}
