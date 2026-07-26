/*
 * XREFs of ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014798C
 * Callers:
 *     ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0015D00 (-ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1C0082430 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0014C8C (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0016378 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00184D8 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C3FC (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002293C (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0082660 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C01482B0 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 */

NTSTATUS __fastcall ndisQueryPower(PIRP Irp, struct _IO_STACK_LOCATION *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  int v6; // edx
  __int64 Options; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // edi
  __int64 v11; // rcx
  _IO_STACK_LOCATION *v12; // rax
  _IO_STACK_LOCATION *v13; // rax
  int SetMiniportDeviceState; // eax
  __int64 v15; // rcx
  char v16; // di
  __int64 v17; // [rsp+30h] [rbp-128h]
  char v18[4]; // [rsp+30h] [rbp-128h]
  char v19[4]; // [rsp+38h] [rbp-120h]
  enum _DEVICE_POWER_STATE v20[4]; // [rsp+50h] [rbp-108h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v21; // [rsp+60h] [rbp-F8h] BYREF

  v20[0] = PowerDeviceUnspecified;
  memset(&v21, 0, sizeof(v21));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x26u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a3);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  Options = a2->Parameters.Create.Options;
  if ( (_DWORD)Options == 1 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(a3->NextDeviceObject, Irp);
  }
  if ( (_DWORD)Options )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v19 = a2->Parameters.Read.ByteOffset.LowPart;
      WPP_RECORDER_SF_qLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        0xEu,
        0x27u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        (char)a3,
        Options,
        *(_DWORD *)v19);
    }
    if ( (byte_1C00F7642 & 0x40) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        Options,
        &InvalidSystemPowerState,
        &a3->InterfaceGuid,
        (__int64)&a3->InterfaceGuid,
        a3->IfIndex,
        a3->NetLuid.Value,
        a2->Parameters.Create.Options,
        a2->Parameters.Read.ByteOffset.LowPart);
    v10 = -1073741808;
  }
  else
  {
    v10 = ndisMPowerPolicy(
            a3,
            a2->Parameters.Power.State.SystemState,
            (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
            v20,
            1u);
    if ( !ndisIsMiniportStarted(a3) || a3->PnPDeviceState != NdisPnPDeviceStarted || v10 == -2147483633 )
    {
      Irp->IoStatus.Status = 0;
      IofCompleteRequest(Irp, 0);
      return 0;
    }
    if ( v10 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v18 = a2->Parameters.Read.ByteOffset.LowPart;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x28u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          (char)a3,
          *(_DWORD *)v18);
      }
      if ( (byte_1C00F7641 & 8) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v11,
          &QueryPowerFailed,
          &a3->InterfaceGuid,
          (__int64)&a3->InterfaceGuid,
          a3->IfIndex,
          a3->NetLuid.Value,
          v10,
          1,
          a2->Parameters.Read.ByteOffset.LowPart);
    }
    else
    {
      ndisInitializeNetPnPEvent(&v21, 0LL);
      v21.NetPnPEvent.BufferLength = 4;
      v21.NetPnPEvent.Buffer = v20;
      v21.NetPnPEvent.NetEvent = NetEventQueryPower;
      if ( (unsigned int)ndisDevicePnPEventNotifyFiltersAndAllTransports(a3, &v21)
        && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x29u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          a3);
      }
      if ( (a3->PnPFlags & 0x20) != 0 )
      {
        SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a3, v20[0], 0xFD010102, 0);
        v16 = SetMiniportDeviceState;
        if ( SetMiniportDeviceState )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x2Au,
              (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
              a3);
          if ( (byte_1C00F7641 & 8) != 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v15,
              &QueryPowerFailed,
              &a3->InterfaceGuid,
              (__int64)&a3->InterfaceGuid,
              a3->IfIndex,
              a3->NetLuid.Value,
              v16,
              2,
              0);
        }
      }
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
      *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v12[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v12->Parameters.ReadWriteConfig.Length;
      v12[-1].FileObject = v12->FileObject;
      v12[-1].Control = 0;
      a3->QueryPowerDeviceState = v20[0];
      a3->PendingQueryPowerIrp = Irp;
      IoAcquireRemoveLockEx(&a3->RemoveLock, Irp, File, 1u, 0x20u);
      v13 = Irp->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisQueryPowerCompleteSystemState;
      v13[-1].Context = a3;
      v13[-1].Control = -32;
      IofCallDriver(a3->NextDeviceObject, Irp);
      v10 = 259;
    }
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v10 < 0 )
  {
    Irp->IoStatus.Status = v10;
    IofCompleteRequest(Irp, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = v10;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Bu,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a3,
      v17);
  }
  return v10;
}
