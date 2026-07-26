/*
 * XREFs of ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0155C5C
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0006198 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     NdisInitializeTimer @ 0x1C0018B40 (NdisInitializeTimer.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0021140 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateRWLock @ 0x1C00227D0 (NdisAllocateRWLock.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0157260 (ndisUnloadPeriodicReceives.c)
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
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+40h] [rbp-28h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)&Parameters.Header.Revision = 0LL;
  ProcNumber = 0;
  ProcessorNumberFromIndex = 0;
  *(unsigned int *)((char *)&Parameters.PoolTag + 1) = 0;
  *(_WORD *)((char *)&Parameters.DataSize + 1) = 0;
  HIBYTE(Parameters.DataSize) = 0;
  ndisPerCpuPoisonPills = (PVOID)ExAllocatePool2(64LL, 32LL * ndisMaxNumberOfProcessors, 538985550);
  if ( !ndisPerCpuPoisonPills )
    goto LABEL_15;
  qword_1C00EC288 = (PVOID)ExAllocatePool2(64LL, 8LL * ndisMaxNumberOfProcessors, 538985550);
  if ( !qword_1C00EC288 )
    goto LABEL_15;
  qword_1C00EC280 = (PVOID)ExAllocatePool2(66LL, (unsigned __int64)ndisMaxNumberOfProcessors << 6, 538985550);
  if ( !qword_1C00EC280 )
    goto LABEL_15;
  v1 = ndisMaxNumberOfProcessors;
  for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
  {
    v3 = (char *)qword_1C00EC280 + 64 * (unsigned __int64)i;
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    KeInitializeSpinLock((PKSPIN_LOCK)v3 + 2);
    *((_DWORD *)v3 + 6) = 0;
    KeInitializeSemaphore((PRKSEMAPHORE)v3 + 1, 0, 0x7FFFFFFF);
    v1 = ndisMaxNumberOfProcessors;
  }
  qword_1C00EC278 = (PVOID)ExAllocatePool2(64LL, 4LL * v1, 538985550);
  if ( !qword_1C00EC278 )
    goto LABEL_15;
  qword_1C00EC270 = (PVOID)ExAllocatePool2(66LL, (unsigned __int64)ndisMaxNumberOfProcessors << 7, 538985550);
  if ( !qword_1C00EC270 )
    goto LABEL_15;
  for ( j = 0; j < ndisNumberOfActiveProcessorsAtBoot; ++j )
  {
    v5 = (unsigned __int64)j << 7;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(j, &ProcNumber);
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)qword_1C00EC270 + v5),
      (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
      0LL);
    KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C00EC270 + v5 + 64), &ProcNumber);
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
    &stru_1C00EC340,
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
