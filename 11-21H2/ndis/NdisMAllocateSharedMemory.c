/*
 * XREFs of NdisMAllocateSharedMemory @ 0x1C0059F00
 * Callers:
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C0058A90 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qdq @ 0x1C001EAF4 (WPP_RECORDER_SF_qdq_ea_1C001EAF4.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x1C0058694 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 */

void __stdcall NdisMAllocateSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID *VirtualAddress,
        PNDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG_PTR v5; // rbx
  ULONG_PTR v8; // r14
  LARGE_INTEGER PerformanceCounter; // rbp
  bool v12; // zf
  KIRQL CurrentIrql; // al
  ULONG_PTR BugCheckParameter4; // r15
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  __int64 v17; // r9
  __int64 (__fastcall *v18)(PNDIS_PHYSICAL_ADDRESS, __int64, ULONG_PTR, __int64); // r10
  __int64 v19; // r15
  __int64 v20; // rax
  ULONG_PTR v21; // rbp
  ULONG_PTR v22; // rbp
  volatile signed __int64 *v23; // rax
  int v24; // edx
  __int64 v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER v27; // [rsp+48h] [rbp-30h]
  PNDIS_PHYSICAL_ADDRESS PhysicalAddressa; // [rsp+A0h] [rbp+28h]

  v5 = *((_QWORD *)MiniportAdapterHandle + 63);
  v8 = Length;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x1Cu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  _InterlockedIncrement64(&qword_1C00EE860);
  LODWORD(v26) = 9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v27 = PerformanceCounter;
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 4) != 0 )
  {
    *VirtualAddress = 0LL;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = v8;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x1Du,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        (char)MiniportAdapterHandle,
        v25);
    }
    goto LABEL_6;
  }
  if ( !v5 )
  {
    *VirtualAddress = 0LL;
LABEL_6:
    v12 = PerformanceCounter.QuadPart == 0;
    goto LABEL_30;
  }
  PhysicalAddressa = *(PNDIS_PHYSICAL_ADDRESS *)(v5 + 40);
  CurrentIrql = KeGetCurrentIrql();
  BugCheckParameter4 = CurrentIrql;
  if ( CurrentIrql >= 2u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 482),
      "Allocating Shared Memory at raised IRQL");
    KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v8, BugCheckParameter4);
  }
  v15 = 72;
  if ( (unsigned int)v8 >= 0x48 )
    v15 = v8;
  if ( v15 + ndisDmaAlignment + 8 < v15 )
  {
    *VirtualAddress = 0LL;
    goto LABEL_6;
  }
  v16 = (v15 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
  v18 = *(__int64 (__fastcall **)(PNDIS_PHYSICAL_ADDRESS, __int64, ULONG_PTR, __int64))(PhysicalAddressa[1].QuadPart + 16);
  v19 = Cached != 0 ? 4 : 0;
  if ( *(_DWORD *)(v19 + v5 + 120) >= v16 )
    goto LABEL_21;
  LOBYTE(v17) = Cached;
  if ( (unsigned __int64)v16 + 8 < 0x1000 )
  {
    v20 = v18(PhysicalAddressa, 4096LL, v5 + (Cached != 0 ? 136LL : 128LL), v17);
    *(_QWORD *)((Cached != 0 ? 8 : 0) + v5 + 104) = v20;
    if ( !v20 )
    {
      *(_DWORD *)(v19 + v5 + 120) = 0;
      *VirtualAddress = 0LL;
      goto LABEL_24;
    }
    *(_QWORD *)(v20 + 4088) = 1752384590LL;
    *(_DWORD *)(v19 + v5 + 120) = 4088;
LABEL_21:
    v21 = *(_QWORD *)((Cached != 0 ? 8 : 0) + v5 + 104);
    if ( *(_DWORD *)(v21 + 4088) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 482),
        "Overwrote past allocated shared memory");
      KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v21, v5);
    }
    ++*(_DWORD *)(v21 + 4092);
    v22 = v21 - *(unsigned int *)(v19 + v5 + 120);
    *VirtualAddress = (PVOID)(v22 + 4088);
    PhysicalAddress->QuadPart = *(_QWORD *)((Cached != 0 ? 8 : 0) + v5 + 128) + (((_DWORD)v22 + 4088) & 0xFFF);
    *(_DWORD *)(v19 + v5 + 120) -= v16;
    goto LABEL_24;
  }
  *VirtualAddress = (PVOID)v18(PhysicalAddressa, v16, (ULONG_PTR)PhysicalAddress, v17);
LABEL_24:
  if ( *VirtualAddress )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 88));
    v23 = (volatile signed __int64 *)&unk_1C00EE870;
  }
  else
  {
    v23 = (volatile signed __int64 *)&unk_1C00EE878;
  }
  _InterlockedExchangeAdd64(v23, v16);
  ExReleaseResourceLite(&SharedMemoryResource);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v24,
      0x15u,
      0x1Fu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)MiniportAdapterHandle,
      v16,
      *VirtualAddress,
      v26);
  KeLeaveCriticalRegion();
  v12 = v27.QuadPart == 0;
LABEL_30:
  if ( !v12 )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v26);
}
