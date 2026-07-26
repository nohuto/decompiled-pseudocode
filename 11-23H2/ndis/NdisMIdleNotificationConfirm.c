/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x1C00AF8E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014A44 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017A68 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020FFC (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0057F64 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x1C007E7BC (WPP_RECORDER_SF_dq_ea_1C007E7BC.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081AC8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C0082974 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C24C (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

unsigned int *__fastcall NdisMIdleNotificationConfirm(struct _NDIS_MINIPORT_BLOCK *a1, POWER_STATE PowerState)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  KIRQL v5; // bl
  int v6; // eax
  unsigned int *result; // rax
  int v8; // r15d
  struct _NDIS_SELECTIVE_SUSPEND *v9; // rbx
  int v10; // eax
  char v11; // bp
  struct _NDIS_SELECTIVE_SUSPEND *v12; // rbx
  KIRQL v13; // al
  KIRQL v14; // bl

  SelectiveSuspend = a1->SelectiveSuspend;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0xFu,
      (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
      (char)a1,
      PowerState.SystemState);
  ndisLogMiniportEvent(a1, NdisMEvent_SSIdleConfirm);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v6 = *((_DWORD *)SelectiveSuspend + 126);
  if ( (v6 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    return (unsigned int *)ndisAoAcIdleRequestConfirm(a1);
  }
  else
  {
    *((_DWORD *)SelectiveSuspend + 126) = v6 | 8;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 176));
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisCancelWakeUpDpcTimer(a1);
    ndisCancelWaitWake(a1);
    v8 = ndisRequestWaitWake(a1, (PREQUEST_POWER_COMPLETE)ndisIdleWaitWakeCallback);
    if ( v8 != 259 )
    {
      v9 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1);
      *((_WORD *)v9 + 313) = *((_WORD *)v9 + 312);
      *((_WORD *)v9 + 312) = 1;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x10u,
          (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
          v8,
          a1);
    }
    *((POWER_STATE *)SelectiveSuspend + 174) = PowerState;
    v10 = ndisRequestDeviceLowPower(
            a1,
            PowerState,
            (PREQUEST_POWER_COMPLETE)ndisPowerSuspendRequestComplete,
            a1,
            NdisMEventDx_SSIdle);
    v11 = v10;
    if ( v10 == 259 )
    {
      ndisWaitForKernelObject((char *)SelectiveSuspend + 176);
    }
    else
    {
      v12 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1);
      *((_WORD *)v12 + 313) = *((_WORD *)v12 + 312);
      *((_WORD *)v12 + 312) = 2;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x11u,
          (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
          v11,
          a1);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
      *((_DWORD *)SelectiveSuspend + 126) &= ~8u;
      v14 = v13;
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 176), 0, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
    }
    result = &WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      return (unsigned int *)WPP_RECORDER_SF_q(
                               *((_QWORD *)WPP_GLOBAL_Control + 8),
                               4u,
                               0xFu,
                               0x12u,
                               (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
                               a1);
  }
  return result;
}
