/*
 * XREFs of ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016188
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016068 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016508 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C00168E0 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00169D8 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017A68 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0017DD0 (-ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C0018394 (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00183E8 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081AC8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0082B78 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0117790 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C01482B0 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0156594 (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(_IRP *Context, struct _IO_STACK_LOCATION *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  enum _SYSTEM_POWER_STATE SystemState; // r15d
  int v7; // r14d
  const struct _GUID *v8; // r8
  __int32 v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  int v12; // ecx
  POWER_STATE v13; // ebx
  int v14; // eax
  int v16; // ecx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v18; // rax
  __int64 v19; // r8
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  char v21[8]; // [rsp+30h] [rbp-20h]
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+40h] [rbp-10h] BYREF
  POWER_STATE PowerState; // [rsp+88h] [rbp+38h] BYREF

  if ( (a3->Flags & 0x80u) != 0 )
    __int2c();
  SystemState = a2->Parameters.Power.State.SystemState;
  v7 = 0;
  PowerState.SystemState = PowerSystemUnspecified;
  HIDWORD(IoStatus.Pointer) = 0;
  a3->WaitWakeSystemState = SystemState;
  v8 = &WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)&WPP_RECORDER_INITIALIZED,
      (int)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      95,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      SystemState,
      (char)a3,
      (__int64)a3->pAdapterInstanceName);
    v8 = &WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids;
  }
  if ( a3->State != NdisMiniportHalted || a3->PnPDeviceState == NdisPnPDeviceStarted )
  {
    if ( SystemState == PowerSystemWorking )
    {
      if ( (a3->PnPFlags & 0x800) == 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xEu,
            0x61u,
            (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
            a3);
        ndisPowerSaveStop(a3, 6LL, v8);
      }
      ndisMPowerPolicy(
        a3,
        PowerSystemWorking,
        (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
        (enum _DEVICE_POWER_STATE *)&PowerState,
        0);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x62u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          a3);
      if ( (byte_1C00F7643 & 4) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v16,
          (unsigned int)&MiniportPowerStates,
          (_DWORD)a3 + 4008,
          (_DWORD)a3 + 4008,
          a3->IfIndex,
          a3->NetLuid.Value,
          1,
          PowerState.SystemState);
      CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v18 = Context->Tail.Overlay.CurrentStackLocation;
      v18[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetSystemPowerOnComplete;
      v18[-1].Context = a3;
      v18[-1].Control = -32;
      Context->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(a3->NextDeviceObject, Context);
    }
    else
    {
      if ( SystemState != PowerSystemSleeping1
        && SystemState != PowerSystemSleeping2
        && SystemState != PowerSystemSleeping3 )
      {
        v9 = SystemState - 5;
        if ( SystemState != PowerSystemHibernate )
        {
          if ( SystemState == PowerSystemShutdown )
          {
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v21 = 6;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0xEu,
                0x60u,
                (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
                (char)a3,
                *(_QWORD *)v21);
            }
            if ( (byte_1C00F7643 & 4) != 0 )
              McTemplateK0jqxqq_EtwWriteTransfer(
                v9,
                (unsigned int)&MiniportPowerSystemState,
                (_DWORD)a3 + 4008,
                (_DWORD)a3 + 4008,
                a3->IfIndex,
                a3->NetLuid.Value,
                0,
                6);
            ndisSendSystemPowerStateIndication(a3, PowerSystemShutdown);
            if ( !ndisAllowWakeFromS5 )
              ndisCancelWaitWake(a3);
            ndisPowerSaveStop(a3, 6LL, v19);
            ndisInvokeMiniportSysPowerNotify(
              a3,
              (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
              (enum _SYSTEM_POWER_STATE)((unsigned __int16)a2->Parameters.Read.Length >> 12));
            if ( (a3->DriverHandle->Flags & 1) == 0 )
              ndisMShutdownMiniport(a3);
            ++Context->CurrentLocation;
            ++Context->Tail.Overlay.CurrentStackLocation;
            Context->IoStatus.Status = 0;
            return IofCallDriver(a3->NextDeviceObject, Context);
          }
          return v7;
        }
      }
      ndisWaitForKernelObject(&a3->PowerD0CompleteEvent);
      ndisPowerSaveStop(a3, 6LL, v10);
      ndisInvokeMiniportSysPowerNotify(
        a3,
        (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
        (enum _SYSTEM_POWER_STATE)((unsigned __int16)a2->Parameters.Read.Length >> 12));
      if ( (unsigned int)ndisMPowerPolicy(
                           a3,
                           SystemState,
                           (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
                           (enum _DEVICE_POWER_STATE *)&PowerState,
                           0) == -2147483633 )
      {
        Context->IoStatus.Status = 0;
        IofCompleteRequest(Context, 0);
        return v7;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          14,
          99,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          (char)a3,
          SystemState,
          PowerState.SystemState);
      }
      if ( (byte_1C00F7643 & 4) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v12,
          (unsigned int)&MiniportPowerStates,
          (_DWORD)a3 + 4008,
          (_DWORD)a3 + 4008,
          a3->IfIndex,
          a3->NetLuid.Value,
          SystemState,
          PowerState.SystemState);
      KeClearEvent(&a3->OpenReadyEvent.Event);
      ndisCancelInitModeTimeoutTimer(a3, 1u);
      ndisPrepForLowPower(a3, (enum _NDIS_DEVICE_POWER_STATE)PowerState.SystemState);
      v13.SystemState = PowerState.SystemState;
      Context->Tail.Overlay.CurrentStackLocation[-1].DeviceObject = a3->DeviceObject;
      Context->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v14 = ndisRequestDeviceLowPower(
              a3,
              PowerState,
              ndisRequestedDevicePowerIrpComplete,
              Context,
              NdisMEventDx_SystemSleep);
      if ( v14 != 259 )
      {
        PhysicalDeviceObject = a3->PhysicalDeviceObject;
        IoStatus.Status = v14;
        IoStatus.Information = 0LL;
        ndisRequestedDevicePowerIrpComplete(PhysicalDeviceObject, 2u, v13, Context, &IoStatus);
      }
    }
    return 259;
  }
  ++Context->CurrentLocation;
  ++Context->Tail.Overlay.CurrentStackLocation;
  Context->IoStatus.Status = 0;
  return IofCallDriver(a3->NextDeviceObject, Context);
}
