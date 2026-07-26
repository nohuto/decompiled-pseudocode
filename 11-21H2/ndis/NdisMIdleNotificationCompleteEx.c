/*
 * XREFs of NdisMIdleNotificationCompleteEx @ 0x1C00A9D60
 * Callers:
 *     NdisMIdleNotificationComplete @ 0x1C00A9D40 (NdisMIdleNotificationComplete.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0052E44 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A75E4 (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A7D90 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall NdisMIdleNotificationCompleteEx(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v5; // si
  int v6; // eax

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  ndisLogMiniportEvent(a1, NdisMEvent_SSIdleComplete);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x1Bu,
      (struct _GUID *)&WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids,
      (char)a1,
      a2);
  *((_DWORD *)SelectiveSuspend + 126) &= ~4u;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
  *((_DWORD *)SelectiveSuspend + 126) &= ~0x80u;
  v6 = *((_DWORD *)SelectiveSuspend + 126);
  if ( (v6 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    if ( a2 >= 0 && a1->CurrentDevicePowerState == PowerDeviceD3 )
      ndisAoAcScheduleWakeWorkItem(a1, NdisMEventD0_AoAcSurpriseWake);
  }
  else if ( (v6 & 0x10) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisRequestPowerResume(a1);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisSelectiveSuspendResumeOperations(a1, 0);
  }
  ndisDereferenceMiniport(a1, 0x15u);
}
