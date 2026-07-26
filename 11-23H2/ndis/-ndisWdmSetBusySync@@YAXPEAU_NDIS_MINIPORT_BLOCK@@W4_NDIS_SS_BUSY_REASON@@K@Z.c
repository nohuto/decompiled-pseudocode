/*
 * XREFs of ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF628
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009C80 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00ACCA4 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 */

void __fastcall ndisWdmSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, int a3)
{
  KSPIN_LOCK *SelectiveSuspend; // rdi
  __int16 v7; // bp
  KIRQL v8; // r14
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  struct _GUID *v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  SelectiveSuspend = (KSPIN_LOCK *)a1->SelectiveSuspend;
  v7 = 0;
  if ( (a1->Flags & 0x80u) != 0 )
    NT_ASSERT("(!((((Miniport)->Flags & (0x00000080)) != 0)))");
  while ( 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(SelectiveSuspend);
    if ( ndisIsPowerReferencedForSelectiveSuspend((struct _NDIS_SELECTIVE_SUSPEND *)SelectiveSuspend, 0) )
      break;
    KeReleaseSpinLock(SelectiveSuspend, v8);
    if ( !v7 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = a2;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x23u,
          (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
          (char)a1,
          v12);
      }
      if ( (byte_1C00F7641 & 8) != 0 )
      {
        LODWORD(v11) = a2;
        McTemplateK0qq_EtwWriteTransfer(
          v9,
          &SSResumeRequested,
          &a1->InterfaceGuid,
          (a1->NetLuid.Value >> 24) & 0xFFFFFF,
          (__int64)v11);
      }
    }
    ndisCancelIdleRequestSync(a1, a2, a3, 1);
    ++v7;
  }
  ndisIncrementSyncIdleCountersLocked((__int64)SelectiveSuspend, a2, a3);
  ndisSelectiveSuspendSetResumeBusyReason(v10, 0, a2, a3);
  KeReleaseSpinLock(SelectiveSuspend, v8);
}
