/*
 * XREFs of NdisIfDeleteIfStackEntry @ 0x1C00B7460
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_ll @ 0x1C0019064 (WPP_RECORDER_SF_ll.c)
 *     ndisIfFindStackEntry @ 0x1C00195C0 (ndisIfFindStackEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisIfDeleteIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  __int64 v2; // r8
  KIRQL v5; // si
  PVOID *StackEntry; // rax
  PVOID *v7; // rdx
  PVOID **v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // [rsp+20h] [rbp-28h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 8), *(__int64 *)&LowerLayerIfIndex, v2, 0xCu, v11);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&qword_1C00F5D98);
  StackEntry = ndisIfFindStackEntry(HigherLayerIfIndex, LowerLayerIfIndex);
  if ( StackEntry )
  {
    --*((_DWORD *)StackEntry[3] + 324);
    --*((_DWORD *)StackEntry[4] + 325);
    v7 = (PVOID *)*StackEntry;
    if ( *((PVOID **)*StackEntry + 1) != StackEntry || (v8 = (PVOID **)StackEntry[1], *v8 != StackEntry) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    ExFreePoolWithTag(StackEntry, 0);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_1C00F5D98);
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, 0xDu, v11);
}
