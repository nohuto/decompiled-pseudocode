/*
 * XREFs of ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014C04
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014AF0 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0013CD0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C0013D10 (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0013FAC (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014100 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0014F58 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015328 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00178F0 (-ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5A8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C007D618 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C010BDB8 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C013AEBC (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014A65C (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(_IRP *Context, struct _IO_STACK_LOCATION *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  enum _SYSTEM_POWER_STATE SystemState; // ebx
  int v4; // r14d
  unsigned int *v8; // rcx
  int v9; // edx
  int v10; // ecx
  POWER_STATE v11; // ebx
  int v12; // eax
  int v14; // ecx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int64 v18; // [rsp+30h] [rbp-20h]
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+40h] [rbp-10h] BYREF
  POWER_STATE PowerState; // [rsp+88h] [rbp+38h] BYREF

  SystemState = a2->Parameters.Power.State.SystemState;
  v4 = 0;
  PowerState.SystemState = PowerSystemUnspecified;
  HIDWORD(IoStatus.Pointer) = 0;
  a3->WaitWakeSystemState = SystemState;
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (int)a3,
      95,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      SystemState,
      (char)a3,
      (__int64)a3->pAdapterInstanceName);
    v8 = &WPP_RECORDER_INITIALIZED;
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
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            a3);
        ndisPowerSaveStop((__int64)a3, 6LL);
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
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          a3);
      if ( (byte_1C00EE583 & 4) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v14,
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
      v16 = Context->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetSystemPowerOnComplete;
      v16[-1].Context = a3;
      v16[-1].Control = -32;
      Context->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(a3->NextDeviceObject, Context);
    }
    else
    {
      if ( SystemState <= PowerSystemWorking )
        return v4;
      if ( SystemState > PowerSystemHibernate )
      {
        if ( SystemState == PowerSystemShutdown )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v18) = 6;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x60u,
              (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
              (char)a3,
              v18);
          }
          if ( (byte_1C00EE583 & 4) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              (_DWORD)v8,
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
          ndisPowerSaveStop((__int64)a3, 6LL);
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
        return v4;
      }
      ndisWaitForKernelObject(&a3->PowerD0CompleteEvent);
      ndisPowerSaveStop((__int64)a3, 6LL);
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
        return v4;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          14,
          99,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a3,
          SystemState,
          PowerState.SystemState);
      }
      if ( (byte_1C00EE583 & 4) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v10,
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
      v11.SystemState = PowerState.SystemState;
      Context->Tail.Overlay.CurrentStackLocation[-1].DeviceObject = a3->DeviceObject;
      Context->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v12 = ndisRequestDeviceLowPower(
              a3,
              PowerState,
              ndisRequestedDevicePowerIrpComplete,
              Context,
              NdisMEventDx_SystemSleep);
      if ( v12 != 259 )
      {
        PhysicalDeviceObject = a3->PhysicalDeviceObject;
        IoStatus.Status = v12;
        IoStatus.Information = 0LL;
        ndisRequestedDevicePowerIrpComplete(PhysicalDeviceObject, 2u, v11, Context, &IoStatus);
      }
    }
    return 259;
  }
  ++Context->CurrentLocation;
  ++Context->Tail.Overlay.CurrentStackLocation;
  Context->IoStatus.Status = 0;
  return IofCallDriver(a3->NextDeviceObject, Context);
}
