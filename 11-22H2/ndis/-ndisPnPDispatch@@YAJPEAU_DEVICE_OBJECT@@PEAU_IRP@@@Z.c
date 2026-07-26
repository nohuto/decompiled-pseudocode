/*
 * XREFs of ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C00184D8 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0033E0C (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C003551C (-ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0035B58 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 *     ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0035C80 (-ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F128 (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F228 (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F320 (-ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@P.c)
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F3E8 (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F454 (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F544 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F60C (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F7B4 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0135C20 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 */

__int64 __fastcall ndisPnPDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // edi
  unsigned int MinorFunction; // r14d
  struct _DEVICE_OBJECT *v6; // rcx
  unsigned __int8 *v7; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rsi
  int v9; // edx
  int started; // eax
  char v12[8]; // [rsp+30h] [rbp-10h]
  unsigned __int8 v13; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int8 v14; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  v13 = 1;
  LOBYTE(MinorFunction) = 0;
  v14 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x30u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  if ( DeviceExtension->Header.Type != 17 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x31u,
        (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
        (char)a1,
        a2);
    v2 = -1073741808;
LABEL_31:
    a2->IoStatus.Status = v2;
    IofCompleteRequest(a2, 0);
    goto LABEL_27;
  }
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x32u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)DeviceExtension,
      *(_QWORD *)v12);
  }
  if ( Microsoft_Windows_NDISEnableBits < 0 )
    McTemplateK0jqxq_EtwWriteTransfer(
      (__int64)v6,
      (__int64)&DispatchPnPIrp,
      (__int64)&DeviceExtension->InterfaceGuid,
      (__int64)&DeviceExtension->InterfaceGuid,
      DeviceExtension->IfIndex,
      DeviceExtension->NetLuid.Value,
      MinorFunction);
  if ( MinorFunction <= 0xA )
  {
    if ( MinorFunction != 10 )
    {
      if ( MinorFunction <= 5 )
      {
        if ( MinorFunction == 5 )
        {
          started = ndisPnPIrpQueryStop(v6, DeviceExtension, a2, v7, &v13);
        }
        else if ( MinorFunction )
        {
          switch ( MinorFunction )
          {
            case 1u:
              started = ndisPnPIrpQueryRemove(v6, DeviceExtension, a2, v7, &v13);
              break;
            case 2u:
              started = ndisPnPIrpRemoveDevice(a1, DeviceExtension, a2, &v14, &v13);
              break;
            case 3u:
              started = ndisPnPIrpCancelRemove(v6, DeviceExtension, a2, &v14, &v13);
              break;
            default:
              started = ndisPnPIrpStopDevice(v6, DeviceExtension, a2, v7, &v13);
              break;
          }
        }
        else
        {
          started = ndisPnPIrpStartDevice(v6, DeviceExtension, a2, &v14, &v13);
        }
        goto LABEL_23;
      }
      if ( MinorFunction == 6 )
      {
        started = ndisPnPIrpCancelStop(v6, DeviceExtension, a2, &v14, &v13);
        goto LABEL_23;
      }
      if ( MinorFunction != 7 )
      {
        if ( MinorFunction == 8 )
          started = ndisPnPIrpQueryInterface(v6, DeviceExtension, a2, v7, &v13);
        else
          started = ndisPnPIrpQueryCapabilities(v6, DeviceExtension, a2, v7, &v13);
        goto LABEL_23;
      }
    }
  }
  else if ( MinorFunction <= 0x12 )
  {
    if ( MinorFunction == 13 )
    {
      started = ndisPnPIrpFilterResourceRequirements(v6, DeviceExtension, a2, v7, &v13);
      goto LABEL_23;
    }
  }
  else if ( MinorFunction != 19 )
  {
    switch ( MinorFunction )
    {
      case 0x14u:
        started = ndisPnPIrpQueryPnPDeviceState(v6, DeviceExtension, a2, v7, &v13);
        goto LABEL_23;
      case 0x16u:
        started = ndisPnPIrpDeviceUsageNotification(a1, DeviceExtension, a2, v7, &v13);
        goto LABEL_23;
      case 0x17u:
        started = ndisPnPIrpSurpriseRemoval(v6, DeviceExtension, a2, &v14, &v13);
LABEL_23:
        v2 = started;
        goto LABEL_24;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = MinorFunction;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x33u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)DeviceExtension,
      *(_QWORD *)v12);
  }
LABEL_24:
  if ( v13 && DeviceExtension->NextDeviceObject )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v2 = IofCallDriver(DeviceExtension->NextDeviceObject, a2);
    goto LABEL_27;
  }
  if ( v14 )
    goto LABEL_31;
LABEL_27:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xDu,
      0x34u,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      (char)DeviceExtension,
      MinorFunction,
      v2);
  return v2;
}
