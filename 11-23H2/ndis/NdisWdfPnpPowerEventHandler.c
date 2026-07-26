/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C00606B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C003418C (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C0060450 (NdisWdfMiniportDataPathPause.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F62C (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F7D4 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008D094 (-ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008D244 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00ADD3C (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0135BE0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136164 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136198 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013626C (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _DEVICE_OBJECT *v4; // rcx
  const struct _UNICODE_STRING *v5; // r8
  unsigned __int8 *v6; // r9
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int started; // eax
  unsigned int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  unsigned __int8 v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = 0;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a2 > 12 )
  {
    v13 = a2 - 14;
    if ( !v13 )
    {
      ndisWdfSendPmParametersForSx(a1);
      goto LABEL_31;
    }
    v14 = v13 - 3;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          a1->PnPDeviceState = NdisPnPDeviceStopped;
          NdisWdfMiniportDataPathPause(a1);
          goto LABEL_31;
        }
        if ( v16 != 1 )
        {
LABEL_25:
          v12 = -1073741811;
          goto LABEL_32;
        }
        started = ndisWdfDeviceObjectCleanup(a1);
      }
      else
      {
        started = ndisWdfPostReleaseHardware(a1);
      }
    }
    else
    {
      started = ndisWdfPreReleaseHardware(a1);
    }
    goto LABEL_18;
  }
  if ( a2 == 12 )
  {
    v12 = -1073741822;
    goto LABEL_32;
  }
  if ( !a2 )
  {
    started = ndisStartDeviceSynchronous(a1, 0LL, v5);
LABEL_18:
    v12 = started;
    goto LABEL_32;
  }
  v7 = a2 - 3;
  if ( v7 )
  {
    v8 = v7 - 3;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 3;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            if ( a1->SelectiveSuspend )
              ndisSelectiveSuspendClearStop(a1, 9LL);
            goto LABEL_31;
          }
          goto LABEL_25;
        }
        ndisWdfSendPmParametersForS0Idle(a1);
LABEL_31:
        v12 = 0;
        goto LABEL_32;
      }
      started = ndisPnPIrpRemoveDevice(a1->DeviceObject, a1, 0LL, &v18, &v18);
    }
    else
    {
      started = ndisPnPIrpSurpriseRemoval(v4, a1, 0LL, &v18, &v18);
    }
    goto LABEL_18;
  }
  a1->OldPnPDeviceState = a1->PnPDeviceState;
  a1->PnPDeviceState = NdisPnPDeviceQueryStopped;
  v12 = ndisPnPIrpStopDevice(v4, a1, 0LL, v6, &v18);
  if ( v12 )
    NT_ASSERT("status == ((NTSTATUS)0x00000000L)");
  NdisWdfMiniportDataPathPause(a1);
LABEL_32:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v12;
}
