/*
 * XREFs of ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0029F90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0030888 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0033B1C (-ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00341B8 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 *     ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0034358 (-ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0079C68 (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0079D68 (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0079E60 (-ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@P.c)
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0079F28 (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0079F94 (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007A084 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007A14C (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007A2F4 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0129F54 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 */

__int64 __fastcall ndisPnPDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // esi
  unsigned int MinorFunction; // r14d
  struct _DEVICE_OBJECT *v6; // rcx
  unsigned __int8 *v7; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
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
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  if ( DeviceExtension->Header.Type == 17 )
  {
    MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v12 = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x32u,
        (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
        (char)DeviceExtension,
        *(_QWORD *)v12);
    }
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
    if ( MinorFunction <= 6 )
    {
      if ( MinorFunction == 6 )
      {
        started = ndisPnPIrpCancelStop(v6, DeviceExtension, a2, &v14, &v13);
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
          case 4u:
            started = ndisPnPIrpStopDevice(v6, DeviceExtension, a2, v7, &v13);
            break;
          default:
            started = ndisPnPIrpQueryStop(v6, DeviceExtension, a2, v7, &v13);
            break;
        }
      }
      else
      {
        started = ndisPnPIrpStartDevice(v6, DeviceExtension, a2, &v14, &v13);
      }
    }
    else
    {
      switch ( MinorFunction )
      {
        case 8u:
          started = ndisPnPIrpQueryInterface(v6, DeviceExtension, a2, v7, &v13);
          break;
        case 9u:
          started = ndisPnPIrpQueryCapabilities(v6, DeviceExtension, a2, v7, &v13);
          break;
        case 0xDu:
          started = ndisPnPIrpFilterResourceRequirements(v6, DeviceExtension, a2, v7, &v13);
          break;
        case 0x14u:
          started = ndisPnPIrpQueryPnPDeviceState(v6, DeviceExtension, a2, v7, &v13);
          break;
        case 0x16u:
          started = ndisPnPIrpDeviceUsageNotification(a1, DeviceExtension, a2, v7, &v13);
          break;
        case 0x17u:
          started = ndisPnPIrpSurpriseRemoval(v6, DeviceExtension, a2, &v14, &v13);
          break;
        default:
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v12 = MinorFunction;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x33u,
              (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
              (char)DeviceExtension,
              *(_QWORD *)v12);
          }
LABEL_17:
          if ( DeviceExtension->NextDeviceObject )
          {
            ++a2->CurrentLocation;
            ++a2->Tail.Overlay.CurrentStackLocation;
            v2 = IofCallDriver(DeviceExtension->NextDeviceObject, a2);
            goto LABEL_19;
          }
LABEL_26:
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_27;
      }
    }
    v2 = started;
    if ( !v13 )
      goto LABEL_26;
    goto LABEL_17;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x31u,
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      (char)a1,
      a2);
  v2 = -1073741808;
LABEL_27:
  a2->IoStatus.Status = v2;
  IofCompleteRequest(a2, 0);
LABEL_19:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xDu,
      0x34u,
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      (char)DeviceExtension,
      MinorFunction,
      v2);
  return v2;
}
