/*
 * XREFs of MouseAddDeviceEx @ 0x1C000C6E0
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000C3B0 (MouseClassFindMorePorts.c)
 *     MouseAddDevice @ 0x1C000C590 (MouseAddDevice.c)
 *     DriverEntry @ 0x1C000F2D0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00026A0 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002F40 (memmove.c)
 *     MouseClassLogError @ 0x1C0004D88 (MouseClassLogError.c)
 *     MouSendConnectRequest @ 0x1C000CD90 (MouSendConnectRequest.c)
 */

__int64 __fastcall MouseAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS v6; // esi
  __int64 v7; // rdi
  __int64 v9; // r15
  void *Pool2; // r12
  __int64 v11; // rcx
  char v12; // cl
  int ValueData; // [rsp+20h] [rbp-48h]

  v6 = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v7 = a1;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v7;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
  {
LABEL_11:
    if ( a1 == v7 )
    {
LABEL_7:
      v6 = RtlWriteRegistryValue(4u, stru_1C0009310.Buffer, a2, 1u, P, (unsigned __int16)word_1C0009300 + 2);
      if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, 0x13u, ValueData, a2);
        MouseClassLogError((void *)a1, -2147155963, 20014, v6, 0, 0LL, 0);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x14u, ValueData, a2);
      }
    }
    return (unsigned int)v6;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels != v7 )
  {
    if ( a1 == v7 )
    {
      MouSendConnectRequest(a1);
      goto LABEL_7;
    }
    return (unsigned int)v6;
  }
  v6 = MouSendConnectRequest(a1);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  v9 = 0LL;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v9 + 19) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_18;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v9 + 19) = 0;
  }
LABEL_18:
  if ( (_DWORD)v9 != LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_24:
    *(_DWORD *)(a1 + 180) = v9;
    v11 = 3 * v9;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v11 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v11) = a3;
    v12 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    if ( *(char *)(*(_QWORD *)v7 + 76LL) >= v12 )
      v12 = *(_BYTE *)(*(_QWORD *)v7 + 76LL);
    *(_BYTE *)(*(_QWORD *)v7 + 76LL) = v12;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_11;
  }
  Pool2 = (void *)ExAllocatePool2(
                    64LL,
                    24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1),
                    1131769677LL);
  if ( Pool2 )
  {
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      memmove(Pool2, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    }
    ++LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)Pool2;
    goto LABEL_24;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  return 3221225626LL;
}
