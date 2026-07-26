/*
 * XREFs of ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0006198
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0155C5C (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C00063A0 (NdisAcquireRWLockWrite.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0006474 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C0030BC8 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00A4094 (ndisKillReceiveWorkerThreadPool.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C00A53D8 (ndisTracePeriodicRcvOnOff.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisConfigurePeriodicReceives(struct _NDIS_SET_RECEIVE_RATE *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 1) == -1 )
    {
      if ( byte_1C00EC241 == 1 )
      {
        NdisAcquireRWLockWrite(Lock, &LockState, 0);
        DueTime.QuadPart = 0LL;
        dword_1C00EC244 = -1;
        if ( dword_1C00EC24C )
          byte_1C00EC241 = 0;
        ndisSwitchMiniportReceiveFunction(7LL);
        NdisReleaseRWLock(Lock, &LockState);
        if ( dword_1C00EC24C )
          ndisKillReceiveWorkerThreadPool();
      }
    }
    else if ( byte_1C00EC241 || !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      if ( BYTE2(dword_1C00EE5E8) )
      {
        LOBYTE(v2) = 1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
          0LL,
          v2,
          *((unsigned int *)a1 + 1),
          (LARGE_INTEGER)DueTime.QuadPart);
      }
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      v3 = dword_1C00EC244;
      DueTime = *(LARGE_INTEGER *)((char *)a1 + 8);
      dword_1C00EC244 = *((_DWORD *)a1 + 1);
      byte_1C00EC241 = 1;
      if ( v3 == -1 )
        ndisSwitchMiniportReceiveFunction(6LL);
      goto LABEL_8;
    }
  }
  else
  {
    DueTime.QuadPart = 0LL;
    dword_1C00EC244 = -1;
    if ( !dword_1C00EC24C && !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      byte_1C00EC241 = 1;
LABEL_8:
      NdisReleaseRWLock(Lock, &LockState);
    }
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
