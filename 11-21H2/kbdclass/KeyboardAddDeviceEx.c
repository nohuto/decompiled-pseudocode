/*
 * XREFs of KeyboardAddDeviceEx @ 0x1C000D9F0
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000D5A0 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000D780 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002610 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002F40 (memmove.c)
 *     KeyboardClassLogError @ 0x1C00050A8 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061CC (WPP_RECORDER_SF_.c)
 *     KbdSendConnectRequest @ 0x1C000F340 (KbdSendConnectRequest.c)
 */

__int64 __fastcall KeyboardAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  unsigned int v4; // r15d
  NTSTATUS v5; // esi
  __int64 v8; // rdx
  __int64 v9; // rdi
  struct _DEVICE_OBJECT *v10; // rdx
  IRP *v11; // rax
  __int64 v12; // rdx
  NTSTATUS v13; // eax
  int v14; // edx
  int v15; // r8d
  void *Pool2; // r12
  __int64 v18; // rcx
  char v19; // cl
  int OutputBuffer; // [rsp+20h] [rbp-A8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-68h] BYREF
  _QWORD InputBuffer[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0;
  v5 = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 72));
  v9 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v9 = a1;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v9;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
  {
LABEL_19:
    if ( a1 == v9 )
    {
LABEL_15:
      v5 = RtlWriteRegistryValue(4u, stru_1C000A338.Buffer, a2, 1u, P, (unsigned __int16)word_1C000A328 + 2);
      if ( v5 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v14, v15, 16, OutputBuffer, (__int64)a2);
        }
        KeyboardClassLogError((void *)a1, -2147155963, 10014, v5, 0, 0LL, 0);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v14, v15, 17, OutputBuffer, (__int64)a2);
      }
    }
    return (unsigned int)v5;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels != v9 )
  {
    if ( a1 == v9 )
    {
      IoStatusBlock = 0LL;
      memset(&Event, 0, sizeof(Event));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v8) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v8, 3LL);
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = *(struct _DEVICE_OBJECT **)(a1 + 16);
      InputBuffer[0] = *(_QWORD *)(a1 + 8);
      InputBuffer[1] = KeyboardClassServiceCallback;
      v11 = IoBuildDeviceIoControlRequest(0xB0203u, v10, InputBuffer, 0x10u, 0LL, 0, 1u, &Event, &IoStatusBlock);
      if ( v11 )
      {
        v13 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 16), v11);
        if ( v13 == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        else
          IoStatusBlock.Status = v13;
      }
      else
      {
        IoStatusBlock.Status = -1073741670;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v12) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v12, 3LL);
      }
      goto LABEL_15;
    }
    return (unsigned int)v5;
  }
  v5 = KbdSendConnectRequest(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v4 + 19) )
    {
      if ( ++v4 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_26;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v4 + 19) = 0;
  }
LABEL_26:
  if ( v4 != LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_32:
    *(_DWORD *)(a1 + 196) = v4;
    v18 = 3LL * v4;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v18 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v18) = a3;
    v19 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    if ( *(char *)(*(_QWORD *)v9 + 76LL) >= v19 )
      v19 = *(_BYTE *)(*(_QWORD *)v9 + 76LL);
    *(_BYTE *)(*(_QWORD *)v9 + 76LL) = v19;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_19;
  }
  Pool2 = (void *)ExAllocatePool2(
                    64LL,
                    24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1),
                    1130652235LL);
  if ( Pool2 )
  {
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      memmove(Pool2, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    }
    ++LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)Pool2;
    goto LABEL_32;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  return 3221225626LL;
}
