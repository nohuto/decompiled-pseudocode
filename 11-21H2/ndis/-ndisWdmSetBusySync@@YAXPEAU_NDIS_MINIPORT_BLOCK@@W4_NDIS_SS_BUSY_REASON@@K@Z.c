/*
 * XREFs of ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A9BF8
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C00251E8 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x1C005FD70 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x1C006BEA8 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A8260 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C00396A6 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1C0039EB8 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C003A0D6 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00A6684 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A6C40 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 */

void __fastcall ndisWdmSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, int a3)
{
  KSPIN_LOCK *SelectiveSuspend; // rdi
  __int16 i; // bp
  KIRQL v8; // r14
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  struct _GUID *v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  SelectiveSuspend = (KSPIN_LOCK *)a1->SelectiveSuspend;
  for ( i = 0; ; ++i )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(SelectiveSuspend);
    if ( ndisIsPowerReferencedForSelectiveSuspend((struct _NDIS_SELECTIVE_SUSPEND *)SelectiveSuspend, 0) )
      break;
    KeReleaseSpinLock(SelectiveSuspend, v8);
    if ( !i )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = a2;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x23u,
          (struct _GUID *)&WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids,
          (char)a1,
          v12);
      }
      if ( (byte_1C00EE581 & 8) != 0 )
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
  }
  ndisIncrementSyncIdleCountersLocked((__int64)SelectiveSuspend, a2, a3);
  ndisSelectiveSuspendSetResumeBusyReason(v10, 0, a2, a3);
  KeReleaseSpinLock(SelectiveSuspend, v8);
}
