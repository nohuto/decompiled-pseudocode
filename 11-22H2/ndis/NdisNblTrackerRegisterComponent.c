/*
 * XREFs of NdisNblTrackerRegisterComponent @ 0x1C001B0B0
 * Callers:
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001AF6C (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021594 (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138D08 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C001768C (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C001B288 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 */

__int64 __fastcall NdisNblTrackerRegisterComponent(__int16 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx
  struct PNDIS_PER_PROCESSOR_SLOT__ **v8; // r14
  unsigned int v9; // esi
  struct PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  KIRQL v11; // al
  __int64 *v12; // rcx

  if ( *(int *)ndisNblTrackerMode < 2 )
    return a2 | 2;
  Pool2 = ExAllocatePool2(64LL, 72LL, 1802781774);
  v7 = Pool2;
  if ( !Pool2 )
    return a2 | 2;
  *(_QWORD *)(Pool2 + 32) = a3;
  v8 = (struct PNDIS_PER_PROCESSOR_SLOT__ **)(Pool2 + 40);
  v9 = 0;
  *(_WORD *)(Pool2 + 16) = a1;
  *(_QWORD *)(Pool2 + 24) = a2;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  do
  {
    PerProcessorSlot = ndisAllocatePerProcessorSlot(0x6B74444Eu);
    if ( !PerProcessorSlot )
    {
      ndisNblTrackerDeleteTracker((ULONG_PTR *)v7);
      return a2 | 2;
    }
    *v8 = PerProcessorSlot;
    ++v9;
    v8 += 2;
  }
  while ( v9 < 2 );
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
  v12 = (__int64 *)qword_1C00F5CB8;
  if ( *(struct _NDIS_NBL_TRACKER ***)qword_1C00F5CB8 != &ndisNblTrackerList )
    __fastfail(3u);
  *(_QWORD *)v7 = &ndisNblTrackerList;
  *(_QWORD *)(v7 + 8) = v12;
  *v12 = v7;
  qword_1C00F5CB8 = v7;
  KeReleaseSpinLock(&ndisNblTrackerListLock, v11);
  return v7 | 1;
}
