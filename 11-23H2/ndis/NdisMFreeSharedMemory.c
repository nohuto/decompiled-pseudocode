/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C005F990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLq @ 0x1C0023D98 (WPP_RECORDER_SF_qLq.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00243B0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x1C005D8FC (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     ndisFreeSharedMemoryInternal @ 0x1C005DAF8 (ndisFreeSharedMemoryInternal.c)
 */

void __stdcall NdisMFreeSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID VirtualAddress,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  unsigned __int64 v6; // rdi
  int v9; // edx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-20h]

  v6 = Length;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      0x15u,
      0x22u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)MiniportAdapterHandle,
      Length,
      VirtualAddress);
  _InterlockedIncrement64(&qword_1C00F7950);
  LODWORD(v10) = 13;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _InterlockedExchangeAdd64(&qword_1C00F7960, v6);
  if ( KeGetCurrentIrql() )
  {
    ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x42u);
    *((NDIS_PHYSICAL_ADDRESS *)VirtualAddress + 8) = PhysicalAddress;
    *((_QWORD *)VirtualAddress + 4) = MiniportAdapterHandle;
    *((_DWORD *)VirtualAddress + 10) = v6;
    *((_BYTE *)VirtualAddress + 44) = Cached;
    *((_QWORD *)VirtualAddress + 6) = VirtualAddress;
    *(_QWORD *)VirtualAddress = 0LL;
    *((_QWORD *)VirtualAddress + 2) = ndisMQueuedFreeSharedHandler;
    *((_QWORD *)VirtualAddress + 3) = VirtualAddress;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)VirtualAddress, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  }
  else
  {
    ndisFreeSharedMemoryInternal(
      (ULONG_PTR)MiniportAdapterHandle,
      v6,
      Cached,
      (ULONG_PTR)VirtualAddress,
      PhysicalAddress.QuadPart);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0x15u,
      0x23u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)MiniportAdapterHandle,
      v6,
      VirtualAddress,
      v10);
  if ( PerformanceCounter.QuadPart )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v10);
}
