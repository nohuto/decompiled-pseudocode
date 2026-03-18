/*
 * XREFs of rimObsDeliverToExclusiveObservers @ 0x1C000415C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C019A7B0 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimObsIsObserverTarget_0 @ 0x1C01B2E20 (rimObsIsObserverTarget_0.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01B2E5C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C01B3FC8 (rimObsDeliverInputToObserver.c)
 */

__int64 __fastcall rimObsDeliverToExclusiveObservers(__int64 a1)
{
  int v2; // edx
  __int64 v3; // r8
  unsigned int v4; // ebx
  char v5; // di
  void *v6; // r9
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v8; // r12
  struct _LIST_ENTRY *v10; // rsi
  __int64 v11; // rdx
  int v12; // r14d
  PDEVICE_OBJECT v13; // rcx
  struct _KPROCESS *v14; // rbp
  int v15; // edx
  int v16; // r8d
  char v17; // al
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  void *v20; // rdx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  RIMLockExclusive(&gInputObserverLock);
  RIMLockExclusive(&gObListLock);
  v4 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v2) = 0;
  }
  v6 = &WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids;
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      44,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
  Flink = gObRimInputObserverList.Flink;
  v8 = 0LL;
  while ( Flink != &gObRimInputObserverList )
  {
    v10 = Flink - 1;
    if ( ((__int64)Flink[6].Blink & 2) != 0 && (unsigned int)rimObsIsObserverTarget_0(&Flink[-1], a1, v3, v6) )
    {
      if ( (unsigned int)rimObsIsRegisteredObserverAllowed() )
      {
        v8 = Flink - 1;
        if ( Flink == (struct _LIST_ENTRY *)16 )
          break;
        if ( ((__int64)v10[7].Blink & 1) != 0 )
        {
          v12 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              v3,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              46,
              (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
          v14 = (struct _KPROCESS *)v10[2].Flink;
          if ( v14 != (struct _KPROCESS *)PsGetCurrentProcess(v13, v11, v3, v6) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v15) = 0;
            }
            if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v16,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                23,
                47,
                (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
              v14 = (struct _KPROCESS *)v10[2].Flink;
            }
            KeStackAttachProcess(v14, &ApcState);
            v12 = 1;
          }
          rimObsDeliverInputToObserver(a1, v10);
          if ( v12 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              v3,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              48,
              (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
          }
        }
        if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
        {
          v17 = *(_BYTE *)(a1 + 48);
          if ( v17 )
          {
            if ( v17 == 1 )
            {
              *(_DWORD *)(a1 + 688) = 0;
              v18 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
              {
                v5 = 0;
              }
              LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v19 = 50;
LABEL_67:
                v20 = &WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids;
                LOBYTE(v20) = v5;
                WPP_RECORDER_AND_TRACE_SF_(
                  v18->AttachedDevice,
                  (_DWORD)v20,
                  v3,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  23,
                  v19,
                  (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 912) = 0;
            v18 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v5 = 0;
            }
            LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v19 = 49;
              goto LABEL_67;
            }
          }
        }
        InputTraceLogging::RIM::DropInput(a1, 11LL);
        break;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          45,
          (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
    }
    Flink = Flink->Flink;
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C029A158 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v4) = v8 != 0LL;
  return v4;
}
