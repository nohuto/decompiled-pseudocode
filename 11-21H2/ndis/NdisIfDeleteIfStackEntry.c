/*
 * XREFs of NdisIfDeleteIfStackEntry @ 0x1C00B2240
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIfFindStackEntry @ 0x1C0022D64 (ndisIfFindStackEntry.c)
 *     WPP_RECORDER_SF_ll @ 0x1C0022E04 (WPP_RECORDER_SF_ll.c)
 */

void __stdcall NdisIfDeleteIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  int v2; // r8d
  KIRQL v5; // si
  PVOID *StackEntry; // rax
  PVOID *v7; // rdx
  PVOID **v8; // rcx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // [rsp+20h] [rbp-28h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 8), LowerLayerIfIndex, v2, 0xCu, v11);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&qword_1C00ECDB0);
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
  KeReleaseSpinLockFromDpcLevel(&qword_1C00ECDB0);
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, 0xDu, v11);
}
