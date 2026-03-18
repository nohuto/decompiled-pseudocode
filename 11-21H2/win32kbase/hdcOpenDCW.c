/*
 * XREFs of hdcOpenDCW @ 0x1C0071480
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0071250 (NtGdiOpenDCW.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     bDeleteDCInternal @ 0x1C00518F0 (bDeleteDCInternal.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     DrvGetHDEV @ 0x1C00718F0 (DrvGetHDEV.c)
 *     UserGetMonitorDC @ 0x1C0071A64 (UserGetMonitorDC.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvDestroyMDEV @ 0x1C00755E0 (DrvDestroyMDEV.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C00C1CDC (IsUMPD_ldevUnloadImageSupported.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     UserGetCurrentDesktopId @ 0x1C0143ED4 (UserGetCurrentDesktopId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HDC __fastcall hdcOpenDCW(
        WCHAR *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        HDC a7,
        ULONG64 a8,
        int a9)
{
  unsigned int v10; // r14d
  struct _devicemodeW *v11; // rbx
  unsigned __int16 *v12; // r12
  HDC MonitorDC; // rdi
  __int64 v14; // r15
  struct _MDEV *v15; // rsi
  HDEV HDEV; // r14
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PERESOURCE v22; // rcx
  void *v24; // rsi
  int v25; // eax
  struct _LDEV *v26; // rbx
  HDEV v27; // rcx
  signed __int32 v28; // ett
  _QWORD *v29; // r8
  _QWORD *v30; // rdx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v40; // rcx
  struct tagKERNELHANDLETABLEENTRY *v41; // rbx
  void *v42; // [rsp+70h] [rbp-88h] BYREF
  HDEV v43; // [rsp+78h] [rbp-80h] BYREF
  struct _UNICODE_STRING v44; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v45[13]; // [rsp+90h] [rbp-68h] BYREF
  HDEV v46; // [rsp+100h] [rbp+8h] BYREF
  struct _devicemodeW *v47; // [rsp+108h] [rbp+10h]
  unsigned int v48; // [rsp+110h] [rbp+18h]

  v48 = a3;
  v47 = a2;
  v46 = (HDEV)SourceString;
  v10 = a3;
  v11 = a2;
  v12 = SourceString;
  MonitorDC = 0LL;
  v14 = (__int64)a7;
  LODWORD(a7) = a7 != 0LL;
  if ( SourceString && !v14 )
  {
    v15 = 0LL;
    HDEV = 0LL;
    v44 = 0LL;
    RtlInitUnicodeString(&v44, SourceString);
    v17 = a9;
    if ( !a9 && v11 )
    {
      v31 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0);
      gptiCurrent = v31;
      if ( v31 )
      {
        *((_DWORD *)v31 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33, v32, v34, v35);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v41 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              *((_QWORD *)v41 + 2) = 0LL;
              v40 = *(_QWORD *)v41;
              if ( !*(_DWORD *)(*(_QWORD *)v41 + 8LL) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v37, v38);
                v40 = *(_QWORD *)v41;
              }
              HMUnlockObject(v40);
            }
            v11 = v47;
          }
        }
      }
    }
    else
    {
      PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
    }
    EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
    if ( v17 )
    {
      HDEV = (HDEV)DrvGetHDEV(&v44);
    }
    else if ( v11 )
    {
      v15 = DrvCreateMDEV(&v44, v11, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
      if ( !v15 )
      {
        v42 = 0LL;
        if ( (unsigned int)UserGetCurrentDesktopId(&v42) )
          v15 = DrvCreateMDEV(&v44, v11, v42, 3u, 0LL, 0, 0, 0, 0LL);
      }
      if ( v15 )
        HDEV = (HDEV)*((_QWORD *)v15 + 5);
    }
    else
    {
      v18 = DrvGetHDEV(&v44);
      HDEV = (HDEV)v18;
      if ( a4 && !v48 )
        MonitorDC = (HDC)UserGetMonitorDC(v18);
    }
    if ( HDEV )
    {
      if ( MonitorDC || (MonitorDC = GreCreateDisplayDC(HDEV, 0, 0)) != 0LL )
      {
        DCOBJ::DCOBJ((DCOBJ *)v45, MonitorDC);
        if ( v45[0] )
        {
          v43 = *(HDEV *)(v45[0] + 48LL);
          if ( v43 )
            PDEVOBJ::vUnreferencePdev(&v43, 0LL);
        }
        DCOBJ::~DCOBJ((DCOBJ *)v45);
      }
      else if ( v15 )
      {
        DrvDestroyMDEV(v15);
      }
      else
      {
        v43 = HDEV;
        PDEVOBJ::vUnreferencePdev(&v43, 0LL);
      }
    }
    if ( v15 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v15);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    v22 = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
    UserSessionSwitchLeaveCrit((__int64)v22, v19, v20, v21);
    v12 = (unsigned __int16 *)v46;
    v10 = v48;
  }
  if ( !MonitorDC )
  {
    v24 = a5;
    if ( a5 )
    {
      if ( v14 )
      {
        if ( qword_1C029B430 )
          v25 = qword_1C029B430();
        else
          v25 = -1073741637;
        if ( v25 >= 0 && qword_1C029B438 )
        {
          LOBYTE(a2) = 2;
          v26 = (struct _LDEV *)qword_1C029B438(*(_QWORD *)(v14 + 24), a2);
        }
        else
        {
          v26 = 0LL;
        }
        if ( v26 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&v46,
            v26,
            v47,
            v12,
            *(unsigned __int16 **)(v14 + 32),
            *(unsigned __int16 **)(v14 + 8),
            v24,
            a6,
            0LL,
            0LL,
            (int)a7,
            0,
            0);
          v27 = v46;
          if ( v46 )
          {
            _m_prefetchw(v46 + 10);
            do
              v28 = *((_DWORD *)v27 + 10);
            while ( v28 != _InterlockedCompareExchange((volatile signed __int32 *)v27 + 10, v28 | 0x80, v28) );
            MonitorDC = GreCreateDisplayDC(v46, v10, 1);
            a7 = MonitorDC;
            if ( MonitorDC )
            {
              v29 = (_QWORD *)a8;
              if ( a8 )
              {
                v30 = (_QWORD *)a8;
                if ( a8 >= MmUserProbeAddress )
                  v30 = (_QWORD *)MmUserProbeAddress;
                *v30 = *v30;
                *v29 = *((_QWORD *)v46 + 221);
              }
            }
            PDEVOBJ::vUnreferencePdev(&v46, 0LL);
          }
          else if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C029B448 )
          {
            qword_1C029B448(v26);
          }
        }
        else
        {
          EngSetLastError(0x77u);
        }
      }
    }
  }
  return MonitorDC;
}
