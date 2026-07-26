/*
 * XREFs of ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0013E88
 * Callers:
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013D70 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0053370 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0054BD8 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C007C7A0 (-ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C007CA30 (-ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009448C (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A75E4 (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1C0014084 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0052DE4 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C007D59C (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  unsigned int SyncFlags; // eax
  KIRQL v5; // dl
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // edi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  SyncFlags = a1->SyncFlags;
  if ( (SyncFlags & 2) != 0 )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    return 259LL;
  }
  else
  {
    a1->LastD0Reason = a2;
    a1->SyncFlags = SyncFlags | 2;
    KeClearEvent(&a1->PowerD0CompleteEvent);
    v5 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
    ndisLogMiniportEvent(a1, a2);
    if ( (byte_1C00EE583 & 4) != 0 )
      McTemplateK0jqx_EtwWriteTransfer(
        v6,
        (unsigned int)&DevicePowerOnRequested,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 2u);
    if ( (a1->Flags & 0x80u) != 0 )
    {
      v8 = 0;
    }
    else
    {
      v8 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      if ( v8 != 259 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            14,
            148,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            v8,
            (char)a1);
        }
        ndisScheduleD0CompleteSignalWorkItem(a1, v8);
      }
    }
    AoAc = a1->AoAc;
    if ( AoAc )
      ndisAoAcResumeRefTimeAccumulation(AoAc);
    return v8;
  }
}
