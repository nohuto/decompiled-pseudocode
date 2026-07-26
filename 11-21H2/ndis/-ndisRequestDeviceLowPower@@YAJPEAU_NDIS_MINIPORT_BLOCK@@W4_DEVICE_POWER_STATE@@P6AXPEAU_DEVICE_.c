/*
 * XREFs of ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0013FAC
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014C04 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C007CD20 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00A9EA0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011F630 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1C0014084 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0052CE4 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisRequestDeviceLowPower(
        struct _NDIS_MINIPORT_BLOCK *a1,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        enum _NDIS_MINIPORT_EVENT a5)
{
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx

  ndisLogMiniportEvent(a1, a5);
  if ( (byte_1C00EE583 & 4) != 0 )
    McTemplateK0jqx_EtwWriteTransfer(
      v9,
      (unsigned int)&DevicePowerDownRequested,
      (_DWORD)a1 + 4008,
      (_DWORD)a1 + 4008,
      a1->IfIndex,
      a1->NetLuid.Value);
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 4u);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v11 = 259;
  }
  else
  {
    v11 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, PowerState, CompletionFunction, Context, 0LL);
    if ( v11 != 259 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        14,
        151,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v11,
        (char)a1);
    }
  }
  AoAc = a1->AoAc;
  if ( AoAc )
    ndisAoAcPauseRefTimeAccumulation(AoAc);
  return v11;
}
