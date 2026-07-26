/*
 * XREFs of NdisMAllocateSharedMemory @ 0x1C005F180
 * Callers:
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C005DD00 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C0023D98 (WPP_RECORDER_SF_qLq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x1C005D8FC (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
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
  bool v11; // zf
  KIRQL CurrentIrql; // al
  ULONG_PTR BugCheckParameter4; // r12
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  __int64 v16; // r9
  unsigned __int64 v17; // rbp
  __int64 (__fastcall *v18)(__int64, __int64, ULONG_PTR, __int64); // r10
  _BOOL8 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rbp
  ULONG_PTR v23; // rbp
  ULONG_PTR v24; // rbp
  volatile signed __int64 *v25; // rax
  int v26; // edx
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER v29; // [rsp+48h] [rbp-30h]
  __int64 v30; // [rsp+80h] [rbp+8h]

  v5 = *((_QWORD *)MiniportAdapterHandle + 63);
  v8 = Length;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x1Cu,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  _InterlockedIncrement64(&qword_1C00F7930);
  LODWORD(v28) = 9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v29 = PerformanceCounter;
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 4) != 0 )
  {
    *VirtualAddress = 0LL;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = v8;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x1Du,
        (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
        (char)MiniportAdapterHandle,
        v27);
    }
    goto LABEL_6;
  }
  if ( !v5 )
  {
    *VirtualAddress = 0LL;
LABEL_6:
    v11 = PerformanceCounter.QuadPart == 0;
    goto LABEL_32;
  }
  v30 = *(_QWORD *)(v5 + 40);
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
  v14 = 72;
  if ( (unsigned int)v8 >= 0x48 )
    v14 = v8;
  if ( v14 + ndisDmaAlignment + 8 < v14 )
  {
    *VirtualAddress = 0LL;
    goto LABEL_6;
  }
  v15 = (v14 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
  v17 = v15;
  v18 = *(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR, __int64))(*(_QWORD *)(v30 + 8) + 16LL);
  v19 = Cached != 0;
  if ( *(_DWORD *)(v5 + 4 * v19 + 120) >= v15 )
  {
    v22 = (Cached != 0) + 13LL;
    v20 = (Cached != 0) + 16LL;
    goto LABEL_22;
  }
  LOBYTE(v16) = Cached;
  if ( (unsigned __int64)v15 + 8 < 0x1000 )
  {
    v20 = (Cached != 0) + 16LL;
    v21 = v18(v30, 4096LL, v5 + 8 * v20, v16);
    v22 = (Cached != 0) + 13LL;
    *(_QWORD *)(v5 + 8 * v22) = v21;
    if ( !v21 )
    {
      *(_DWORD *)(v5 + 4 * v19 + 120) = 0;
      *VirtualAddress = 0LL;
LABEL_25:
      v17 = v15;
      goto LABEL_26;
    }
    *(_DWORD *)(v21 + 4092) = 0;
    *(_DWORD *)(v21 + 4088) = 1752384590;
    *(_DWORD *)(v5 + 4 * v19 + 120) = 4088;
LABEL_22:
    v23 = *(_QWORD *)(v5 + 8 * v22);
    if ( *(_DWORD *)(v23 + 4088) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 482),
        "Overwrote past allocated shared memory");
      KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v23, v5);
    }
    ++*(_DWORD *)(v23 + 4092);
    v24 = v23 - *(unsigned int *)(v5 + 4 * v19 + 120);
    *VirtualAddress = (PVOID)(v24 + 4088);
    PhysicalAddress->QuadPart = *(_QWORD *)(v5 + 8 * v20) + (((_DWORD)v24 + 4088) & 0xFFF);
    *(_DWORD *)(v5 + 4 * v19 + 120) -= v15;
    goto LABEL_25;
  }
  *VirtualAddress = (PVOID)v18(v30, v15, (ULONG_PTR)PhysicalAddress, v16);
LABEL_26:
  if ( *VirtualAddress )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 88));
    v25 = (volatile signed __int64 *)&unk_1C00F7940;
  }
  else
  {
    v25 = (volatile signed __int64 *)&unk_1C00F7948;
  }
  _InterlockedExchangeAdd64(v25, v17);
  ExReleaseResourceLite(&SharedMemoryResource);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v26,
      0x15u,
      0x1Fu,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)MiniportAdapterHandle,
      v15,
      *VirtualAddress,
      v28);
  KeLeaveCriticalRegion();
  v11 = v29.QuadPart == 0;
LABEL_32:
  if ( !v11 )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v28);
}
