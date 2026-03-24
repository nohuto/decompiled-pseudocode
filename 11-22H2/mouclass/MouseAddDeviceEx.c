/*
 * XREFs of MouseAddDeviceEx @ 0x1C000D540
 * Callers:
 *     MouseAddDevice @ 0x1C000D3F0 (MouseAddDevice.c)
 *     MouseClassFindMorePorts @ 0x1C000DD10 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C00112E0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00023A0 (WPP_RECORDER_SF_S.c)
 *     memmove @ 0x1C0002C00 (memmove.c)
 *     MouseClassLogError @ 0x1C0004BA8 (MouseClassLogError.c)
 *     MouSendConnectRequest @ 0x1C000D660 (MouSendConnectRequest.c)
 */

__int64 __fastcall MouseAddDeviceEx(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS v6; // esi
  __int64 v7; // rdi
  int v8; // edx
  __int64 v10; // r15
  void *Pool2; // r12
  __int64 v12; // rcx
  char v13; // cl
  int ValueData; // [rsp+20h] [rbp-58h]

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
      v6 = RtlWriteRegistryValue(4u, DestinationString.Buffer, a2, 1u, P, (unsigned __int16)word_1C000A300 + 2);
      if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, 1, 19, ValueData, (__int64)a2);
        }
        MouseClassLogError((void *)a1, -2147155963, 20014, v6, 0, 0LL, 0);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, 1, 20, ValueData, (__int64)a2);
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
  v10 = 0LL;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
    while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v10 + 19) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
        goto LABEL_18;
    }
    *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v10 + 19) = 0;
  }
LABEL_18:
  if ( (_DWORD)v10 != LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
  {
LABEL_24:
    *(_DWORD *)(a1 + 180) = v10;
    v12 = 3 * v10;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v12 + 1) = a1;
    *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v12) = a3;
    v13 = *(_BYTE *)(*(_QWORD *)a1 + 76LL);
    if ( *(char *)(*(_QWORD *)v7 + 76LL) >= v13 )
      v13 = *(_BYTE *)(*(_QWORD *)v7 + 76LL);
    *(_BYTE *)(*(_QWORD *)v7 + 76LL) = v13;
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
