/*
 * XREFs of ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138CE8
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x1C0018C70 (NdisInitializeTimer.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C001B240 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AD344 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138974 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138A74 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138C00 (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSelectiveSuspendInitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  struct _NDIS_SELECTIVE_SUSPEND *Pool2; // rax
  struct _NDIS_SELECTIVE_SUSPEND *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  if ( (a1->Flags & 0x80u) != 0
    || (DriverHandle = a1->DriverHandle, DriverHandle->IdleNotificationHandler)
    && DriverHandle->CancelIdleNotificationHandler )
  {
    Pool2 = (struct _NDIS_SELECTIVE_SUSPEND *)ExAllocatePool2(64LL, 1616LL, 1936933966);
    a1->SelectiveSuspend = Pool2;
    v4 = Pool2;
    if ( Pool2 )
    {
      ndisNicAutoPowerSaverResetTelemetryData(a1);
      v5 = ExAllocatePool2(66LL, 120LL, 1936933966);
      *((_QWORD *)v4 + 75) = v5;
      if ( v5 )
      {
        *(_OWORD *)v5 = xmmword_1C00E3DF0;
        *(_OWORD *)(v5 + 16) = xmmword_1C00E3E00;
        *(_OWORD *)(v5 + 32) = xmmword_1C00E3E10;
        *(_OWORD *)(v5 + 48) = xmmword_1C00E3E20;
        *(_OWORD *)(v5 + 64) = xmmword_1C00E3E30;
        *(_OWORD *)(v5 + 80) = xmmword_1C00E3E40;
        *(_OWORD *)(v5 + 96) = xmmword_1C00E3E50;
        *(_QWORD *)(v5 + 112) = 0LL;
        *((_QWORD *)v4 + 68) = 0LL;
        *((_QWORD *)v4 + 69) = (char *)v4 + 544;
        *((_QWORD *)v4 + 70) = 0LL;
        *((_QWORD *)v4 + 71) = (char *)v4 + 560;
        *((_QWORD *)v4 + 74) = (char *)v4 + 584;
        *((_QWORD *)v4 + 73) = (char *)v4 + 584;
        ndisReadSSTimeoutKeywords(a1);
        if ( (a1->PMHardwareCapabilities.Flags & 2) == 0 && (a1->PMAdminConfig.Value & 0xC000) != 0 )
          ndisReadNicAutoPowerSaverTimeoutKeywords(a1);
        KeInitializeSpinLock((PKSPIN_LOCK)v4);
        NdisInitializeTimer((PNDIS_TIMER)((char *)v4 + 16), (PNDIS_TIMER_FUNCTION)ndisSSIdleTimerDpc, a1);
        *((_QWORD *)v4 + 37) = a1;
        *((_QWORD *)v4 + 38) = ndisSSIdleTimerWorkItem;
        *((_QWORD *)v4 + 47) = a1;
        *((_QWORD *)v4 + 48) = ndisIdleCancelWorkItem;
        *((_QWORD *)v4 + 57) = 0LL;
        *((_QWORD *)v4 + 59) = ndisSetPowerResumeCompleteWorkItem;
        *((_QWORD *)v4 + 60) = (char *)v4 + 456;
        KeInitializeEvent((PRKEVENT)((char *)v4 + 152), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v4 + 200), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v4 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v4 + 176), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v4 + 224), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v4 + 272), NotificationEvent, 1u);
        *((_QWORD *)v4 + 76) = NdisNblTrackerRegisterComponent(4, (__int64)a1, (__int64)a1->pAdapterInstanceName);
        *((_QWORD *)v4 + 77) = NdisNblTrackerRegisterComponent(5, (__int64)a1, (__int64)a1->pAdapterInstanceName);
        v6 = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)v4 + 126) |= 0x200u;
        *((_DWORD *)v4 + 127) |= 0x100u;
        *((_QWORD *)v4 + 82) = v6;
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0xBu,
            (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
            a1);
        ndisSelectiveSuspendFree(a1);
      }
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0xAu,
        (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
        a1);
    }
  }
}
