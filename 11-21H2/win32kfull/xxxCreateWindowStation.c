/*
 * XREFs of xxxCreateWindowStation @ 0x1C00D22F8
 * Callers:
 *     xxxConnectService @ 0x1C00D159C (xxxConnectService.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1C00D1B20 (EditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     zzzSetDesktop @ 0x1C005DB40 (zzzSetDesktop.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00D2948 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00D2FB4 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxInitWindowStation @ 0x1C00D42E4 (xxxInitWindowStation.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01226E8 (xxxCleanupMotherDesktopWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        char a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        HANDLE *a10)
{
  __int64 v10; // r14
  void *v11; // r15
  void *SecurityDescriptor; // r13
  int v13; // edi
  int *v14; // r12
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  int GlobalAtomTable; // eax
  NTSTATUS DesktopNotificationEvent; // esi
  struct tagWND **v19; // rdi
  NTSTATUS inserted; // eax
  _QWORD *i; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v32; // esi
  __int64 Window; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  void *v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  ULONG v39; // esi
  ULONG v40; // edi
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG v45; // eax
  __int64 v46; // rdx
  NTSTATUS v47; // ecx
  ULONG v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r8
  void *v52; // r8
  __int64 v53; // rdx
  __int64 v54; // r8
  ULONG v55; // eax
  __int64 v56; // rdx
  int v57; // edi
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // r8
  int v63; // edi
  int v64; // [rsp+98h] [rbp-59h]
  PVOID Object; // [rsp+A0h] [rbp-51h] BYREF
  int v66; // [rsp+A8h] [rbp-49h]
  void *v67; // [rsp+B0h] [rbp-41h]
  HANDLE Handle; // [rsp+B8h] [rbp-39h] BYREF
  __int64 v69[2]; // [rsp+C8h] [rbp-29h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-19h]
  __int64 v71; // [rsp+E8h] [rbp-9h]
  __int64 v72; // [rsp+F0h] [rbp-1h]
  char v73; // [rsp+138h] [rbp+47h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+148h] [rbp+57h]
  __int64 v75; // [rsp+150h] [rbp+5Fh]

  v75 = a4;
  DesiredAccess = a3;
  v72 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Object = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v13 = 0;
  v64 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = &gTermNOIO;
  }
  else
  {
    v14 = (int *)gTermIO[0];
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 216, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v45 = RtlNtStatusToDosError(v15);
    UserSetLastError(v45, v46);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset(Object, 0, 0xD8uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 7) = v14;
    if ( (*v14 & 2) != 0 )
      *((_DWORD *)Object + 16) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 168);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v47 = GlobalAtomTable;
      goto LABEL_49;
    }
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v47 = -1073741801;
LABEL_49:
      v48 = RtlNtStatusToDosError(v47);
      UserSetLastError(v48, v49);
      goto LABEL_61;
    }
    v19 = (struct tagWND **)(v14 + 2);
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 16) & 4) != 0 )
        goto LABEL_12;
      v39 = RtlLengthSid(SeExports->SeWorldSid);
      v40 = v39 + 8;
      v41 = Win32AllocPoolWithQuotaZInit(v39 + 8, 1702064981LL);
      v42 = v41;
      if ( v41
        && (*(_WORD *)v41 = 0,
            *(_WORD *)(v41 + 2) = v40,
            *(_DWORD *)(v41 + 4) = 0x100000,
            RtlCopySid(v39, (PSID)(v41 + 8), SeExports->SeWorldSid),
            SecurityDescriptor = (void *)CreateSecurityDescriptor(v42, v40, 0LL),
            Win32FreePool(v42),
            SecurityDescriptor) )
      {
        DesktopNotificationEvent = CreateDesktopNotificationEvent(SecurityDescriptor);
        if ( DesktopNotificationEvent >= 0 )
        {
          Win32FreePool(SecurityDescriptor);
LABEL_12:
          inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
          DesktopNotificationEvent = inserted;
          if ( inserted < 0 )
          {
            Object = 0LL;
            SecurityDescriptor = 0LL;
          }
          else
          {
            if ( inserted == 0x40000000 )
              goto LABEL_20;
            DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v72);
            if ( DesktopNotificationEvent >= 0 )
            {
              for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
                ;
              LockObjectAssignment(i, Object);
              if ( (*((_DWORD *)Object + 16) & 4) == 0 )
              {
                v43 = a8;
                if ( a8 )
                {
                  *(_OWORD *)v69 = 0LL;
                  v70 = 0LL;
                  PushW32ThreadLock((__int64)Object, v69, UserDereferenceObject);
                  if ( !xxxSafeLoadKeyboardLayoutEx(Object, v75, 0LL, a5, a6, a7, v43, a9, -2147483647) )
                    DesktopNotificationEvent = -1073741823;
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  *(_QWORD *)(ThreadWin32Thread + 16) = v69[0];
                }
              }
            }
            SecurityDescriptor = 0LL;
            if ( DesktopNotificationEvent >= 0 )
            {
LABEL_20:
              ObfDereferenceObject(Object);
              *a10 = Handle;
              return 0LL;
            }
          }
        }
      }
      else
      {
        DesktopNotificationEvent = -1073741801;
      }
      v13 = v64;
      goto LABEL_61;
    }
    v10 = gptiCurrent;
    v23 = *(_QWORD *)(gptiCurrent + 424LL);
    v24 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    v11 = *(void **)(gptiCurrent + 456LL);
    v67 = *(void **)(gptiCurrent + 592LL);
    v71 = v23;
    *(_QWORD *)(gptiCurrent + 424LL) = v24;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 744LL) != gptiCurrent + 744LL )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
    }
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v73);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 456LL) && v11 )
        zzzSetDesktop(gptiCurrent, (__int64)v11, v67);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v73, v25, v26);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 424LL) = v23;
    }
    else
    {
      v27 = *(_DWORD *)(gptiCurrent + 488LL);
      v28 = v27 | 0x10000000;
      v29 = v27 & 0x10000000;
      *(_DWORD *)(gptiCurrent + 488LL) = v28;
      v66 = v29;
      v32 = 0;
      if ( PsGetCurrentProcessWin32Process(v29) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
        if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
          v32 = 1;
      }
      SmartObjStackRefBase<tagMENU>::Init(v69, 0LL);
      v70 = 0LL;
      Window = xxxCreateWindowEx(
                 0,
                 (wchar_t *)0x8001,
                 32769LL,
                 0LL,
                 0x82000000,
                 -32768,
                 -32768,
                 0xFFFF,
                 0xFFFF,
                 0LL,
                 (__int64)v69,
                 hModuleWin,
                 0LL,
                 1u,
                 0x30Au,
                 v32,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v69);
      if ( Window )
      {
        v69[0] = (__int64)(v14 + 2);
        v69[1] = Window;
        HMAssignmentLock(v69, 0LL);
        *(_DWORD *)(gptiCurrent + 488LL) = v66 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        SetVisible(*v19, 1u);
        HMChangeOwnerThread(*v19, *((_QWORD *)v14 + 2));
        v13 = 1;
        v36 = v67;
        *(_QWORD *)(gptiCurrent + 424LL) = v71;
        v64 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v11, v36);
        if ( DesktopNotificationEvent < 0 )
        {
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v73, v37, v38);
          zzzEndDeferWinEventNotify();
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v73, v53, v54);
          goto LABEL_61;
        }
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v73, v37, v38);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v73, v34, v35);
      zzzEndDeferWinEventNotify();
      v52 = v67;
      *(_QWORD *)(gptiCurrent + 424LL) = v71;
      zzzSetDesktop(gptiCurrent, (__int64)v11, v52);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v73, v50, v51);
    v13 = 0;
    goto LABEL_61;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_61:
  v55 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v55, v56);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v57 = *(_DWORD *)(v10 + 488);
    v58 = *(_QWORD *)(v10 + 424);
    *(_DWORD *)(v10 + 488) = v57 | 0x10000000;
    *(_QWORD *)(v10 + 424) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v73);
    xxxCleanupMotherDesktopWindow(v14, v59, v60);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v73, v61, v62);
    v63 = (*(_DWORD *)(v10 + 488) ^ v57) & 0x10000000;
    *(_QWORD *)(v10 + 424) = v58;
    *(_DWORD *)(v10 + 488) ^= v63;
    zzzEndDeferWinEventNotify();
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)DesktopNotificationEvent;
}
