/*
 * XREFs of ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C000310C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0163044 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003280 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0003310 (NdisAcquireRWLockWrite.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00033E4 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C0032F20 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00AAB00 (ndisKillReceiveWorkerThreadPool.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C00ABA84 (ndisTracePeriodicRcvOnOff.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisConfigurePeriodicReceives(struct _NDIS_SET_RECEIVE_RATE *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( !a1 )
  {
    qword_1C00F5228 = 0LL;
    dword_1C00F5204 = -1;
    if ( dword_1C00F520C || (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      goto LABEL_8;
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    byte_1C00F5201 = 1;
LABEL_14:
    NdisReleaseRWLock(Lock, &LockState);
    goto LABEL_8;
  }
  if ( *((_DWORD *)a1 + 1) != -1 )
  {
    if ( !byte_1C00F5201 && (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      goto LABEL_8;
    if ( BYTE2(dword_1C00F76B0) )
    {
      LOBYTE(v2) = 1;
      ndisTracePeriodicRcvOnOff(0LL, v2, *((unsigned int *)a1 + 1), qword_1C00F5228);
    }
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v3 = dword_1C00F5204;
    qword_1C00F5228 = *((_QWORD *)a1 + 1);
    dword_1C00F5204 = *((_DWORD *)a1 + 1);
    byte_1C00F5201 = 1;
    if ( v3 == -1 )
      ndisSwitchMiniportReceiveFunction(6LL);
    goto LABEL_14;
  }
  if ( byte_1C00F5201 == 1 )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    qword_1C00F5228 = 0LL;
    dword_1C00F5204 = -1;
    if ( dword_1C00F520C )
      byte_1C00F5201 = 0;
    ndisSwitchMiniportReceiveFunction(7LL);
    NdisReleaseRWLock(Lock, &LockState);
    if ( dword_1C00F520C )
      ndisKillReceiveWorkerThreadPool();
  }
LABEL_8:
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
