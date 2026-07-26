/*
 * XREFs of NdisMFreeSharedMemory @ 0x1C005A700
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0008C44 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qdq @ 0x1C001EAF4 (WPP_RECORDER_SF_qdq_ea_1C001EAF4.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x1C0058694 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     ndisFreeSharedMemoryInternal @ 0x1C0058888 (ndisFreeSharedMemoryInternal.c)
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
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Length,
      0x15u,
      0x22u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)MiniportAdapterHandle,
      Length,
      VirtualAddress);
  _InterlockedIncrement64(&qword_1C00EE880);
  LODWORD(v10) = 13;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _InterlockedExchangeAdd64(&qword_1C00EE890, v6);
  if ( KeGetCurrentIrql() )
  {
    ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, MPREF_RES_FREESHM);
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
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0x15u,
      0x23u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)MiniportAdapterHandle,
      v6,
      VirtualAddress,
      v10);
  if ( PerformanceCounter.QuadPart )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v10);
}
