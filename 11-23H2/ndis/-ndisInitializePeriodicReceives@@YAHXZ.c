/*
 * XREFs of ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0163044
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C000329C (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     NdisInitializeTimer @ 0x1C0018C70 (NdisInitializeTimer.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001ABE0 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateRWLock @ 0x1C001B350 (NdisAllocateRWLock.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0164330 (ndisUnloadPeriodicReceives.c)
 */

__int64 ndisInitializePeriodicReceives(void)
{
  unsigned int ProcessorNumberFromIndex; // edi
  unsigned int v1; // eax
  unsigned int i; // esi
  char *v3; // rbx
  ULONG j; // esi
  unsigned __int64 v5; // rbx
  SIZE_T v6; // rax
  SIZE_T v7; // rax
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+40h] [rbp-38h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF

  ProcNumber = 0;
  ProcessorNumberFromIndex = 0;
  memset(&Parameters.Header.Revision, 0, 19);
  ndisPerCpuPoisonPills = (PVOID)ExAllocatePool2(64LL, 32LL * ndisMaxNumberOfProcessors, 538985550);
  if ( !ndisPerCpuPoisonPills )
    goto LABEL_15;
  qword_1C00F5248 = (PVOID)ExAllocatePool2(64LL, 8LL * ndisMaxNumberOfProcessors, 538985550);
  if ( !qword_1C00F5248 )
    goto LABEL_15;
  qword_1C00F5240 = (PVOID)ExAllocatePool2(66LL, (unsigned __int64)ndisMaxNumberOfProcessors << 6, 538985550);
  if ( !qword_1C00F5240 )
    goto LABEL_15;
  v1 = ndisMaxNumberOfProcessors;
  for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
  {
    v3 = (char *)qword_1C00F5240 + 64 * (unsigned __int64)i;
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    KeInitializeSpinLock((PKSPIN_LOCK)v3 + 2);
    *((_DWORD *)v3 + 6) = 0;
    KeInitializeSemaphore((PRKSEMAPHORE)v3 + 1, 0, 0x7FFFFFFF);
    v1 = ndisMaxNumberOfProcessors;
  }
  qword_1C00F5238 = (PVOID)ExAllocatePool2(64LL, 4LL * v1, 538985550);
  if ( !qword_1C00F5238 )
    goto LABEL_15;
  qword_1C00F5230 = (PVOID)ExAllocatePool2(66LL, (unsigned __int64)ndisMaxNumberOfProcessors << 7, 538985550);
  if ( !qword_1C00F5230 )
    goto LABEL_15;
  for ( j = 0; j < ndisNumberOfActiveProcessorsAtBoot; ++j )
  {
    v5 = (unsigned __int64)j << 7;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(j, &ProcNumber);
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)qword_1C00F5230 + v5),
      (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
      0LL);
    KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C00F5230 + v5 + 64), &ProcNumber);
  }
  Lock = NdisAllocateRWLock(&ndisDummyObject);
  if ( !Lock
    || (Parameters.Header = (_NDIS_OBJECT_HEADER)1048960,
        *(_DWORD *)&Parameters.ProtocolId = 256,
        *(_QWORD *)&Parameters.PoolTag = 1953645646LL,
        (PoolHandle = NdisAllocateNetBufferListPool(0LL, &Parameters)) == 0LL) )
  {
LABEL_15:
    ProcessorNumberFromIndex = -1073741823;
    goto LABEL_14;
  }
  v6 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    &Lookaside,
    0LL,
    0LL,
    0x200u,
    ((v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7270444Eu,
    0);
  v7 = MmSizeOfMdl((PVOID)0xFFF, 0x5EEuLL);
  ExInitializeNPagedLookasideList(
    &stru_1C00F5300,
    0LL,
    0LL,
    0x200u,
    ((v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1518,
    0x7270444Eu,
    0);
  ndisPeriodicReceives = 1;
  ndisConfigurePeriodicReceives(0LL);
  if ( ProcessorNumberFromIndex )
LABEL_14:
    ndisUnloadPeriodicReceives();
  return ProcessorNumberFromIndex;
}
