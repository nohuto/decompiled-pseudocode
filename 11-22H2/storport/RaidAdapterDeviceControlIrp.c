/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C0007240
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0006A50 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaIsDeviceDFxPoweredDown @ 0x1C0007120 (RaIsDeviceDFxPoweredDown.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaForwardIrp @ 0x1C0013754 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C00322B8 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0033B78 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0033C08 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0035D20 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0035E50 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0036018 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMFNDChildPFControl @ 0x1C0036324 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x1C0036438 (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterMFNDNameSpaceRead @ 0x1C0036530 (RaidAdapterMFNDNameSpaceRead.c)
 *     RaidAdapterMFNDNameSpaceWrite @ 0x1C0036658 (RaidAdapterMFNDNameSpaceWrite.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C0036964 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C0036B3C (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0036E30 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterReconfigureMFND @ 0x1C0037294 (RaidAdapterReconfigureMFND.c)
 *     RaidAdapterRpmbRequest @ 0x1C0037E58 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0038134 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C003818C (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0038208 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0038F94 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x1C0039070 (RaidAdapterSetLedState.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0039DCC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C0039E80 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0039ED4 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C003A09C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C003A1F8 (RaidAdapterStorageResetBusIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C003A23C (RaidAdapterStorageSetPropertyIoctl.c)
 *     WPP_SF_qqDD @ 0x1C003EB54 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1C003FAA0 (RaInsertDFxQueue.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x1C0050684 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x1C00508C4 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x1C0050BB8 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x1C0050E2C (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x1C0051100 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x1C0051360 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x1C0051624 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x1C0051834 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x1C0051A00 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x1C0051C34 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x1C0051F10 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x1C005219C (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1C005241C (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C009FC4C (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C00A1BB8 (RaidAdapterPassThrough.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C00A72DC (RaidAdapterStorageGetInternalDataIoctl.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, PIRP Irp)
{
  signed int v4; // esi
  __int64 v5; // r8
  unsigned int LowPart; // ebp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int inserted; // esi
  unsigned int LockingObjectMetadata; // eax
  struct _DEVICE_OBJECT *v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  _BYTE v15[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h] BYREF

  v15[0] = 0;
  v16 = 0LL;
  v4 = RaidAcquireAdapterRemoveLock();
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v16);
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( (byte_1C0092A03 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)&v16,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (byte_1C0092A02 & 2) != 0 )
    {
      McTemplateK0pddd_EtwWriteTransfer(
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&EventIOCTL,
        (unsigned int)&v16,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  if ( v4 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v4);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
      a1,
      Irp,
      HIWORD(LowPart),
      (LowPart >> 2) & 0xFFF);
  }
  inserted = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    inserted = ((__int64 (__fastcall *)(int *, __int64, PIRP))ExtAdapterIoctlReplace)(&dword_1C0092038, a1, Irp);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( inserted != -1073741822 )
    goto LABEL_26;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    ((void (__fastcall *)(int *, __int64, PIRP))ExtAdapterIoctlPre)(&dword_1C0092038, a1, Irp);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( LowPart > 0x2D5F90 )
  {
    if ( LowPart > 0x2DDF84 )
    {
      if ( LowPart > 0x2DDFA0 )
      {
        switch ( LowPart )
        {
          case 0x2DDFA4u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObject(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDFACu:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObjectMetadata(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDFB0u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgResetState(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x32C000u:
          case 0x32C038u:
            LockingObjectMetadata = RaForwardIrp(*(_QWORD *)(a1 + 24), Irp);
            goto LABEL_23;
        }
      }
      else
      {
        switch ( LowPart )
        {
          case 0x2DDFA0u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgEraseLockingObject(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF88u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgRevertConfig(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF8Cu:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgSetSpAuthorityKey(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF94u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgAssignLockingObject(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF98u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgDeassignLockingObject(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF9Cu:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObjectAuthKey(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
        }
      }
    }
    else
    {
      if ( LowPart == 3006340 )
      {
        if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          LockingObjectMetadata = RaidAdapterStorageTcgActivateLocking(a1, Irp);
          goto LABEL_23;
        }
        goto LABEL_205;
      }
      if ( LowPart > 0x2DD200 )
      {
        switch ( LowPart )
        {
          case 0x2DD3C0u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaAdapterProtocolCommandIoctl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DD684u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterSetBootLunIoctl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDC04u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterHwFirmwareDownloadIoctl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDC08u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterHwFirmwareActivateIoctl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDCD8u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterMFNDNameSpacePageMapControl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
        }
      }
      else
      {
        switch ( LowPart )
        {
          case 0x2DD200u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaAdapterSetTemperatureThresholdIoctl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D5FA8u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgGetLockingObjectMetadata(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D93F4u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageInternalSetPropertyIoctl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D93FCu:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageSetPropertyIoctl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D9CD0u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterReconfigureMFND(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D9CD4u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterMFNDChildPFControl(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D9CE2u:
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterMFNDNameSpaceWrite(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
        }
      }
    }
    goto LABEL_195;
  }
  if ( LowPart == 2973584 )
  {
    if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      LockingObjectMetadata = RaidAdapterStorageTcgEnumerateLockingObjects(a1, Irp);
      goto LABEL_23;
    }
    goto LABEL_205;
  }
  if ( LowPart > 0x2D1400 )
  {
    if ( LowPart > 0x2D1CCC )
    {
      switch ( LowPart )
      {
        case 0x2D1F80u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterStorageTcgQueryCapability(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D5000u:
          LockingObjectMetadata = RaidAdapterStorageResetBusIoctl(a1, Irp);
          goto LABEL_23;
        case 0x2D5014u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterStorageBreakReservationIoctl(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D5020u:
          LockingObjectMetadata = RaidAdapterStorageDeviceResetIoctl(a1, Irp);
          goto LABEL_23;
        case 0x2D5CDDu:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterMFNDNameSpaceRead(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x2D1CCCu:
          LockingObjectMetadata = RaidAdapterSetLedState(a1, Irp);
          goto LABEL_23;
        case 0x2D1680u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterQueryBootLunsIoctl(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D1C00u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterHwFirmwareGetInfoIoctl(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D1C94u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterPowerCapIoctl(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D1C98u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterRpmbRequest(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D1CA0u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterDiagnosticIoctl(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
      }
    }
    goto LABEL_195;
  }
  if ( LowPart != 2954240 )
  {
    if ( LowPart != 315412 )
    {
      if ( LowPart <= 0x4D014 )
      {
        switch ( LowPart )
        {
          case 0x4100Cu:
            LockingObjectMetadata = RaidAdapterScsiGetInquiryDataIoctl(a1, Irp);
            goto LABEL_23;
          case 0x41010u:
            LockingObjectMetadata = RaidAdapterScsiGetCapabilitiesIoctl(a1, Irp);
            goto LABEL_23;
          case 0x41018u:
            LockingObjectMetadata = RaidAdapterScsiGetAddressIoctl(a1, Irp);
            goto LABEL_23;
          case 0x4101Cu:
            v12 = *(struct _DEVICE_OBJECT **)(a1 + 32);
            *(_BYTE *)(a1 + 106) = 1;
            IoInvalidateDeviceRelations(v12, BusRelations);
            v13 = 0;
LABEL_38:
            LockingObjectMetadata = RaidCompleteRequestEx(Irp, 0, v13);
            goto LABEL_23;
        }
        if ( LowPart != 315396 )
        {
          if ( LowPart == 315400 )
          {
            if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterScsiMiniportIoctlWithAddress(a1, (_DWORD)Irp, 0, 0, 0, 2);
              goto LABEL_23;
            }
LABEL_205:
            inserted = RaInsertDFxQueue(*(_QWORD *)(a1 + 8), Irp);
            if ( !inserted )
              inserted = 259;
            goto LABEL_24;
          }
          goto LABEL_195;
        }
        goto LABEL_63;
      }
      if ( LowPart == 315448 )
      {
        if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          return RaidAdapterMiniportProcessServiceRequest(a1, Irp);
        }
        goto LABEL_205;
      }
      if ( LowPart == 315460 )
      {
LABEL_63:
        v5 = 0LL;
        goto LABEL_42;
      }
      if ( LowPart != 315464 )
      {
        if ( LowPart == 2953684 )
        {
          LockingObjectMetadata = RaidAdapterStorageGetInternalDataIoctl(a1, Irp);
          goto LABEL_23;
        }
        if ( LowPart == 2954232 )
        {
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterStorageInternalQueryPropertyIoctl(a1, Irp, v15);
            goto LABEL_23;
          }
          goto LABEL_205;
        }
LABEL_195:
        v13 = -1073741637;
        goto LABEL_38;
      }
    }
    LOBYTE(v5) = 1;
LABEL_42:
    LockingObjectMetadata = RaidAdapterPassThrough(a1, Irp, v5);
    goto LABEL_23;
  }
  if ( RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
    goto LABEL_205;
  LockingObjectMetadata = RaidAdapterStorageQueryPropertyIoctl(a1, Irp);
LABEL_23:
  inserted = LockingObjectMetadata;
LABEL_24:
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedAdd(&ExtRefCount, 1u);
      v14 = ((__int64 (__fastcall *)(int *, __int64, PIRP))ExtAdapterIoctlPost)(&dword_1C0092038, a1, Irp);
      _InterlockedDecrement(&ExtRefCount);
      if ( v14 != -1073741822 )
        inserted = v14;
    }
  }
LABEL_26:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
      a1,
      Irp,
      LowPart,
      inserted);
  }
  if ( !v15[0] )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
  return inserted;
}
