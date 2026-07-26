/*
 * XREFs of ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF268
 * Callers:
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C0023BD4 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C0064D00 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C007128C (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AE3D8 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C003DB96 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C003F1C2 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1C003F23A (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C003F68C (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F8AC (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

void __fastcall ndisWdfSetBusySync(__int64 a1, unsigned int a2, int a3)
{
  char v3; // bp
  __int64 v4; // rbx
  KIRQL v8; // r15
  _DWORD *v9; // rcx
  PKSPIN_LOCK v10; // rcx
  __int64 v11; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 4448);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("((((Miniport)->Flags & (0x00000080)) != 0))");
  v8 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 4448));
  if ( ndisIsPowerReferencedForSelectiveSuspend((struct _NDIS_SELECTIVE_SUSPEND *)v4, 1) )
  {
    ndisIncrementSyncIdleCountersLocked(v4, a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason(v9, 0, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
  }
  else
  {
    if ( !*(_DWORD *)(v4 + 512)
      && !*(_DWORD *)(v4 + 516)
      && !*(_DWORD *)(v4 + 528)
      && !*(_DWORD *)(v4 + 532)
      && !*(_DWORD *)(v4 + 520)
      && !*(_DWORD *)(v4 + 524)
      && !*(_DWORD *)(v4 + 576)
      && !*(_DWORD *)(v4 + 508) )
    {
      v3 = 1;
      KeClearEvent((PRKEVENT)(v4 + 272));
    }
    ndisIncrementSyncIdleCountersLocked(v4, a2, a3);
    KeReleaseSpinLock(v10, v8);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x24u,
        (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
        a1,
        a2);
    if ( (byte_1C00F7641 & 8) != 0 )
    {
      LODWORD(Timeout) = a2;
      McTemplateK0qq_EtwWriteTransfer(
        v11,
        &SSResumeRequested,
        (const GUID *)(a1 + 4008),
        (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF,
        (__int64)Timeout);
    }
    if ( v3 )
      ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)a1, 1, 0);
    else
      KeWaitForSingleObject((PVOID)(v4 + 272), Executive, 0, 0, 0LL);
  }
}
