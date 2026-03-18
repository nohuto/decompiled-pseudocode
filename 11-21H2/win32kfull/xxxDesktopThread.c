/*
 * XREFs of xxxDesktopThread @ 0x1C00A4360
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxDesktopThreadWaiter @ 0x1C00A4844 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A4A14 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0117970 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C011F8B0 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01226E8 (xxxCleanupMotherDesktopWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG __fastcall xxxDesktopThread(PRKEVENT *a1)
{
  unsigned int v2; // r12d
  int v3; // esi
  __int64 v4; // rcx
  const WCHAR *v5; // rdx
  __int64 CurrentThreadWin32Thread; // rax
  const wchar_t *v7; // rdx
  struct _KEVENT *ThreadWin32Thread; // rax
  struct _KEVENT *v9; // r15
  struct _KEVENT *v10; // r14
  unsigned int v11; // edx
  __int64 v12; // rcx
  struct _KEVENT *v13; // rcx
  PRKEVENT v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ebx
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  int Flink; // eax
  LegacyInputDispatcher *v29; // rcx
  LegacyInputDispatcher *v30; // rcx
  LONG result; // eax
  PRKEVENT v32; // rcx
  __int64 v33; // rcx
  struct _KEVENT *v34; // rcx
  bool v35; // zf
  __int64 v36; // rcx
  PRKEVENT v37; // rcx
  PRKEVENT v38; // rcx
  signed __int32 v39[8]; // [rsp+8h] [rbp-89h] BYREF
  char v40; // [rsp+38h] [rbp-59h]
  LegacyInputDispatcher *v41; // [rsp+40h] [rbp-51h] BYREF
  int ProcessInformation; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-45h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v45[10]; // [rsp+68h] [rbp-29h] BYREF

  v43 = 0;
  v40 = 0;
  v41 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset(v45, 0, sizeof(v45));
  v3 = *(_DWORD *)a1 & 2;
  SetThreadBasePriority(KeGetCurrentThread(), v3 != 0 ? 12 : 16);
  if ( !v3 )
  {
    if ( Event )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    Event = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  }
  v5 = L"IO_DT";
  if ( v3 )
    v5 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v5);
  if ( v3 )
  {
    v7 = L"Win32k Desktop Thread (NOIO_DT)";
  }
  else
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 48) = 1;
    v7 = L"Win32k Desktop Thread (IO_DT)";
  }
  SetThreadName(-2LL, v7);
  if ( (int)InitSystemThread(&DestinationString) < 0 || !v3 && !Event )
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v39, 0);
    result = KeSetEvent(a1[5], 1, 0);
    if ( v3 )
      return result;
    v32 = Event;
    if ( !Event )
      return result;
LABEL_80:
    result = Win32FreePool(v32);
    Event = 0LL;
    return result;
  }
  ThreadWin32Thread = (struct _KEVENT *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  a1[2] = ThreadWin32Thread;
  v9 = ThreadWin32Thread;
  v10 = *(struct _KEVENT **)&ThreadWin32Thread[18].Header.Lock;
  a1[3] = v10;
  ++LODWORD(v10[16].Header.WaitListHead.Flink);
  ThreadWin32Thread[19].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)gpkdiStatic;
  ThreadWin32Thread[25].Header.WaitListHead.Blink = 0LL;
  if ( (int)LegacyInputDispatcher::Create(&v41) < 0 )
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v39, 0);
    result = KeSetEvent(a1[5], 1, 0);
    if ( v3 )
      return result;
    v32 = Event;
    goto LABEL_80;
  }
  if ( !v3 )
  {
    v11 = 1;
    v45[0] = Feedback::gpevtPointerCursorOperation;
    v45[1] = OnPointerCursorOperation;
    if ( !gDWMCapable )
    {
      v11 = 2;
      v45[3] = OnPTPMouseOperation;
      v45[2] = gpevtPTPOperation;
    }
    v2 = v11 + 1;
    v12 = 2LL * v11;
    v43 = v11 + 1;
    v45[v12] = Event;
    v45[v12 + 1] = lambda_512f5916cb944740d11e96e056576eff_::_lambda_invoker_cdecl_;
    if ( gSessionId == gServiceSessionId )
    {
      CBaseInput::InitializeSensor(gpMouseSensor);
      v40 = 1;
    }
    else if ( !gDWMCapable )
    {
      v40 = 1;
      if ( (int)CBaseInput::InitializeSensor(gpMouseSensor) >= 0 )
      {
        if ( gProtocolType )
        {
          EnterCrit(1LL, 0LL);
          CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
          UserSessionSwitchLeaveCrit(v33);
        }
        CBaseInput::Read(gpMouseSensor);
      }
    }
  }
  EnterCrit(1LL, 0LL);
  v13 = a1[5];
  *(_DWORD *)a1 |= 4u;
  KeSetEvent(v13, 1, 0);
  v14 = a1[7];
  ObReferenceObjectByPointer(v14, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  UserSessionSwitchLeaveCrit(v15);
  KeWaitForSingleObject(v14, WrUserRequest, 0, 0, 0LL);
  EnterCrit(1LL, 0LL);
  ObfDereferenceObject(v14);
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    _InterlockedOr(v39, 0);
    if ( a1[1] )
      xxxCleanupMotherDesktopWindow(a1, v16, v17);
    v34 = a1[5];
    if ( v34 )
      KeSetEvent(v34, 1, 0);
    v35 = LODWORD(v10[16].Header.WaitListHead.Flink)-- == 1;
    if ( v35 && !tagQ::IsAnyThreadAttached((tagQ *)v10) && (v10[16].Header.SignalState & 0x4000000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
    v37 = a1[7];
    a1[2] = 0LL;
    a1[3] = 0LL;
    *(_DWORD *)a1 = 0;
    if ( v37 )
    {
      ObfDereferenceObject(v37);
      a1[7] = 0LL;
    }
    if ( v40 )
      CleanupSensorExplicitly(0LL);
    v30 = v41;
    if ( v41 )
      LegacyInputDispatcher::`scalar deleting destructor'(v41, v16);
    if ( !v3 )
    {
      v38 = Event;
      if ( !Event )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
        v38 = Event;
      }
      Win32FreePool(v38);
      Event = 0LL;
    }
  }
  else
  {
    a1[8] = *(PRKEVENT *)&a1[2]->Header.Lock;
    ProcessInformation = 1;
    ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
    v18 = v2 + 1;
    v45[2 * v2] = *(_QWORD *)&v9[59].Header.Lock;
    if ( v2 + 1 > 5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(2LL * v2);
    if ( v3 || (v19 = v2 + 10, gDWMCapable) )
      v19 = v18;
    LegacyInputDispatcher::Initialize(v41, 1, 0, v19, v18, (struct LegacyDispatcherObject *)v45);
    if ( v19 != v18 && !gDWMCapable )
      CBaseInput::RegisterDispatcherObject(gpMouseSensor, v41);
    v23 = v43;
    *((_DWORD *)v41 + 15) = v43;
    if ( v3 )
      qword_1C03361C0 = (__int64)v41;
    else
      qword_1C03361C8 = (__int64)v41;
    do
    {
      do
        LOBYTE(v20) = 1;
      while ( (unsigned int)xxxDesktopThreadWaiter(v20, 0LL, v21, v22) != v23 );
    }
    while ( (unsigned int)xxxHandleDesktopMessages((struct tagTHREADINFO *)v9, (struct tagTERMINAL *)a1) );
    if ( a1 == (PRKEVENT *)gTermIO[0] )
      gdwHydraHint |= 0x100000u;
    a1[2] = 0LL;
    a1[3] = 0LL;
    *((_DWORD *)a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
    v25 = *(_QWORD *)&v9[19].Header.Lock;
    if ( v25 )
    {
      HMAssignmentUnlock(v25 + 184);
      v26 = *(_QWORD *)&v9[19].Header.Lock;
      v27 = (_QWORD *)(*(_QWORD *)(v26 + 8) + 24LL);
      if ( *v27 )
      {
        *(_QWORD *)(**(_QWORD **)(v26 + 8) + 8LL) = 0LL;
        HMAssignmentUnlock(v27);
      }
    }
    v9[19].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)gpkdiStatic;
    Flink = (int)v10[16].Header.WaitListHead.Flink;
    if ( !Flink )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gpkdiStatic);
      Flink = (int)v10[16].Header.WaitListHead.Flink;
    }
    LODWORD(v10[16].Header.WaitListHead.Flink) = Flink - 1;
    if ( *(struct _KEVENT **)&v9[18].Header.Lock != v10 )
      zzzDestroyQueue(v10, v9);
    if ( v40 )
      CleanupSensorExplicitly(0LL);
    v29 = v41;
    if ( v41 )
      LegacyInputDispatcher::`scalar deleting destructor'(v41, v24);
    v41 = 0LL;
    UserSessionSwitchLeaveCrit(v29);
    if ( !v3 )
    {
      Win32FreePool(Event);
      Event = 0LL;
    }
    ProcessInformation = 0;
    ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
    EnterCrit(1LL, 0LL);
    a1[8] = 0LL;
  }
  return UserSessionSwitchLeaveCrit(v30);
}
