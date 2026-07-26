/*
 * XREFs of ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0030610
 * Callers:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0030784 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C005E700 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C00278C4 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C002F430 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0147E4C (-ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPnPStartDevice(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _IRP *a2,
        const struct _UNICODE_STRING *a3)
{
  _CM_RESOURCE_LIST *v3; // rbp
  unsigned int v5; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _IO_SECURITY_CONTEXT *SecurityContext; // rsi
  void *DeviceContext; // r9
  struct _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  unsigned int v11; // ebx
  unsigned int DesiredAccess; // eax
  _CM_RESOURCE_LIST *Pool2; // rax
  __int64 i; // rcx
  _DEVICE_OBJECT *DeviceObject; // rcx
  int v17; // eax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rax
  __int64 v19; // [rsp+30h] [rbp-58h]
  _DWORD InputBuffer[2]; // [rsp+40h] [rbp-48h] BYREF
  _DEVICE_OBJECT *v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+50h] [rbp-38h]
  int v23; // [rsp+54h] [rbp-34h]
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      0xDu,
      0x41u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
  if ( a1->PnPDeviceState == NdisPnPDeviceStopped )
  {
    ndisReinitializeMiniportBlock(a1);
    a1->PnPFlags |= 0x10000u;
  }
  if ( a2 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext )
    {
      a1->PnPFlags |= 0x200000u;
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( DesiredAccess )
        v5 = 20 * (DesiredAccess + 1);
      else
        v5 = 40;
      Pool2 = (_CM_RESOURCE_LIST *)ExAllocatePool2(64LL, 2 * v5, 1918977102);
      v3 = Pool2;
      if ( !Pool2 )
      {
        v11 = -1073741670;
        goto LABEL_12;
      }
      memmove(Pool2, SecurityContext, v5);
      memmove((char *)v3 + v5, CurrentStackLocation->Parameters.QueryDirectory.FileName, v5);
      for ( i = 0LL; (unsigned int)i < SecurityContext->DesiredAccess; i = (unsigned int)(i + 1) )
      {
        if ( *((_BYTE *)&SecurityContext->FullCreateOptions + 20 * i) == 2
          && (*((_BYTE *)&SecurityContext->FullCreateOptions + 20 * i + 2) & 2) != 0 )
        {
          a1->MsiIntCount += *((unsigned __int16 *)&SecurityContext[1].SecurityQos + 10 * i + 1);
        }
      }
    }
  }
  DeviceContext = a1->DeviceContext;
  DriverHandle = a1->DriverHandle;
  a1->AllocatedResources = v3;
  a1->AllocatedResourcesTranslated = (_CM_RESOURCE_LIST *)((char *)v3 + v5);
  v11 = ndisInitializeAdapter(DriverHandle, a1, a3, DeviceContext);
  if ( v11 )
    goto LABEL_12;
  if ( a1->PnPDeviceState == NdisPnPDeviceStopped
    || ((a1->PnPFlags & 0x200000) == 0 || !ndisAoAcCapable) && (a1->FilterPnPFlags & 0x200) == 0
    || a1->PoFxDStateReportingEnabled
    || (a1->Flags & 0x80u) != 0 )
  {
LABEL_11:
    a1->PnPDeviceState = NdisPnPDeviceStarted;
    KeSetEvent(&a1->OpenReadyEvent.Event, 0, 0);
    a1->StartTicks.QuadPart = MEMORY[0xFFFFF78000000320];
    goto LABEL_12;
  }
  DeviceObject = a1->DeviceObject;
  v24 = 0LL;
  v17 = PoFxEnableDStateReporting(DeviceObject, &v24);
  if ( !v17 )
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    InputBuffer[1] = 0;
    v23 = 0;
    InputBuffer[0] = 58;
    v21 = PhysicalDeviceObject;
    v22 = 6;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, 0LL, 0);
    a1->PoFxDStateReportingEnabled = 1;
    goto LABEL_11;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v17;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x42u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)a1,
      v19);
  }
  v11 = -1073741823;
LABEL_12:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x43u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      a1);
  return v11;
}
