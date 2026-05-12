/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C0006AF0
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0006A50 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaIsDeviceDFxPoweredDown @ 0x1C0007120 (RaIsDeviceDFxPoweredDown.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0008434 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001C918 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C001D970 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001EA0C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C002531A (RaUnitAtaPassThroughIoctl.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C00322B8 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C0039E80 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C003A1F8 (RaidAdapterStorageResetBusIoctl.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003EB54 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1C003FAA0 (RaInsertDFxQueue.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x1C0052688 (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1C00528E0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x1C0052C14 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x1C0052E98 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1C0053174 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x1C00533E4 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x1C005369C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x1C00538C0 (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x1C0053A80 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1C0053CC8 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1C0053FBC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x1C0054260 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x1C00544F8 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     RaUnitAttributeManagement @ 0x1C005D398 (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C005DF04 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C005E014 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C005E088 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C005E0FC (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C005E1A4 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C005E730 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C005EC84 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C005FC48 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C005FCD4 (RaUnitStoragePowerIdle.c)
 *     RaidUnitSetLedState @ 0x1C0062DFC (RaidUnitSetLedState.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C009F7B0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageDumpNotification @ 0x1C00A0174 (RaUnitStorageDumpNotification.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C00A0FC8 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00A1030 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00A1CCC (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00A2EDC (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00A9810 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x1C00A98DC (RaUnitStorageDataCollectionIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C00A99B0 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C00A9C60 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C00A9E08 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C00A9E70 (RaUnitStorageGetInternalDataIoctl.c)
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1C00AA010 (RaUnitStorageInternalQueryPropertyIoctl.c)
 *     RaUnitStorageInternalSetPropertyIoctl @ 0x1C00AA12C (RaUnitStorageInternalSetPropertyIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x1C00AA1FC (RaUnitStorageManageBypassIOIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C00AA518 (RaUnitStorageSetPropertyIoctl.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(_BYTE *Context, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // r14d
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int inserted; // esi
  unsigned int LockingObjectMetadata; // eax
  unsigned int v13; // r8d
  _IO_STACK_LOCATION *v14; // rax
  int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // r8
  char v18; // al
  char IsDeviceDFxPoweredDown; // al
  __int64 v20; // rcx
  unsigned int v21; // edx
  _BYTE v22[8]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v23; // [rsp+48h] [rbp-40h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v23 = 0LL;
  v22[0] = 0;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( Irp->RequestorMode )
    {
      v16 = -1073741808;
    }
    else if ( CurrentStackLocation->Parameters.Read.Length )
    {
      LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (Context[448] & 4) == 0;
      v16 = 0;
      Irp->IoStatus.Information = 1LL;
    }
    else
    {
      Irp->IoStatus.Information = 0LL;
      v16 = -1073741789;
    }
    return RaidCompleteRequestEx(Irp, 0, v16);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v23);
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( (byte_1C0092A03 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)&v23,
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
        (unsigned int)&v23,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a3) = 1;
  v9 = RaUnitAcquireRemoveLock(Context, Irp, a3);
  if ( v9 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    v16 = v9;
    return RaidCompleteRequestEx(Irp, 0, v16);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      27LL,
      &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
      Context,
      Irp,
      LowPart);
  }
  inserted = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    inserted = ((__int64 (__fastcall *)(int *, _BYTE *, PIRP))ExtUnitIoctlReplace)(&dword_1C0092038, Context, Irp);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( inserted != -1073741822 )
    goto LABEL_27;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    ((void (__fastcall *)(int *, _BYTE *, PIRP))ExtUnitIoctlPre)(&dword_1C0092038, Context, Irp);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( LowPart > 0x2D2828 )
  {
    if ( LowPart > 0x2DDC04 )
    {
      if ( LowPart <= 0x2DDF98 )
      {
        switch ( LowPart )
        {
          case 0x2DDF98u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgDeassignLockingObject((_DWORD)Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDC08u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaUnitHwFirmwareActivateIoctl(Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDC9Cu:
            LockingObjectMetadata = RaUnitAttributeManagement(Context, Irp);
            goto LABEL_24;
          case 0x2DDF84u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgActivateLocking((_DWORD)Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDF88u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgRevertConfig((_DWORD)Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDF8Cu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgSetSpAuthorityKey((_DWORD)Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDF94u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgAssignLockingObject((_DWORD)Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
        }
      }
      else
      {
        switch ( LowPart )
        {
          case 0x2DDF9Cu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgSetLockingObjectAuthKey((_DWORD)Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDFA0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgEraseLockingObject((_DWORD)Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDFA4u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgSetLockingObject((_DWORD)Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDFACu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgSetLockingObjectMetadata(Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DDFB0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
              || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgResetState(Context, Irp);
              goto LABEL_24;
            }
            goto LABEL_234;
          case 0x2DE814u:
            LockingObjectMetadata = RaUnitSetQOSIoctl(Context, Irp);
            goto LABEL_24;
        }
      }
      goto LABEL_43;
    }
    if ( LowPart == 3005444 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
        || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
      {
        LockingObjectMetadata = RaUnitHwFirmwareDownloadIoctl(Context, Irp);
        goto LABEL_24;
      }
      goto LABEL_234;
    }
    if ( LowPart > 0x2D5FA8 )
    {
      switch ( LowPart )
      {
        case 0x2D93F4u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitStorageInternalSetPropertyIoctl(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x2D93FCu:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitStorageSetPropertyIoctl(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x2D9404u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitStorageDataSetManagementIoctl(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x2DD200u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitSetTemperatureThresholdIoctl(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x2DD3C0u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitProtocolCommandIoctl(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
      }
      if ( LowPart != 3004036 )
        goto LABEL_43;
      goto LABEL_174;
    }
    if ( LowPart == 2973608 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
        || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
      {
        LockingObjectMetadata = RaidUnitStorageTcgGetLockingObjectMetadata(Context, Irp);
        goto LABEL_24;
      }
      goto LABEL_234;
    }
    if ( LowPart != 2959404 && LowPart != 2959408 )
    {
      switch ( LowPart )
      {
        case 0x2D5000u:
          LockingObjectMetadata = RaidAdapterStorageResetBusIoctl(*((_QWORD *)Context + 3), Irp);
          goto LABEL_24;
        case 0x2D5014u:
          LockingObjectMetadata = RaUnitStorageBreakReservationIoctl(Context, Irp);
          goto LABEL_24;
        case 0x2D5020u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterStorageDeviceResetIoctl(*((_QWORD *)Context + 3), Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x2D5644u:
          LockingObjectMetadata = RaUnitStorageDumpNotification(Context, Irp);
          goto LABEL_24;
        case 0x2D5F90u:
          IsDeviceDFxPoweredDown = RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1));
          if ( !IsDeviceDFxPoweredDown || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidUnitStorageTcgEnumerateLockingObjects(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
      }
      goto LABEL_43;
    }
LABEL_101:
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      LockingObjectMetadata = RaUnitStreamsIoctl(Context, Irp);
      goto LABEL_24;
    }
    goto LABEL_234;
  }
  if ( LowPart == 2959400 )
    goto LABEL_101;
  if ( LowPart > 0x2D1400 )
  {
    if ( LowPart > 0x2D1C94 )
    {
      switch ( LowPart )
      {
        case 0x2D1CA0u:
          LockingObjectMetadata = RaUnitStorageDiagnosticIoctl(Context, Irp);
          goto LABEL_24;
        case 0x2D1CC8u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitSmartDataIoctl(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x2D1CCCu:
          LockingObjectMetadata = RaidUnitSetLedState(Context, Irp);
          goto LABEL_24;
        case 0x2D1F80u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaidUnitStorageTcgQueryCapability(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x2D280Cu:
          LockingObjectMetadata = RaUnitTelemetryIdIoctl(Context, Irp);
          goto LABEL_24;
        case 0x2D2810u:
          LockingObjectMetadata = RaUnitGetQOSIoctl(Context, Irp);
          goto LABEL_24;
      }
      goto LABEL_43;
    }
    if ( LowPart == 2956436 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
        || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
      {
        LockingObjectMetadata = RaUnitPowerCapIoctl(Context, Irp);
        goto LABEL_24;
      }
      goto LABEL_234;
    }
    if ( LowPart == 2954827 )
    {
      LockingObjectMetadata = RaUnitStorageGetDumpInfoIoctl(Context, Irp);
      goto LABEL_24;
    }
    if ( LowPart != 2954880 )
    {
      switch ( LowPart )
      {
        case 0x2D1C00u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
            goto LABEL_24;
          }
LABEL_234:
          inserted = RaInsertDFxQueue(*((_QWORD *)Context + 1), Irp);
          if ( !inserted )
            inserted = 259;
          goto LABEL_25;
        case 0x2D1C80u:
          v14 = Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Information = 0LL;
          if ( v14->Parameters.Create.Options < 0x10 )
            v15 = -1073741811;
          else
            v15 = RaUnitRegisterForIdleDetection(Context);
          v13 = v15;
          goto LABEL_44;
        case 0x2D1C84u:
          LockingObjectMetadata = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
          goto LABEL_24;
        case 0x2D1C88u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitStoragePowerActive(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x2D1C8Cu:
          LockingObjectMetadata = RaUnitStoragePowerIdle(Context, Irp);
          goto LABEL_24;
      }
LABEL_43:
      v13 = -1073741808;
LABEL_44:
      LockingObjectMetadata = RaidCompleteRequestEx(Irp, 0, v13);
      goto LABEL_24;
    }
LABEL_174:
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      v20 = *((_QWORD *)Context + 3);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      LockingObjectMetadata = IofCallDriver(*(PDEVICE_OBJECT *)(v20 + 8), Irp);
      goto LABEL_24;
    }
    goto LABEL_234;
  }
  if ( LowPart != 2954240 )
  {
    if ( LowPart > 0x4D030 )
    {
      switch ( LowPart )
      {
        case 0x4D044u:
        case 0x4D048u:
          goto LABEL_96;
        case 0x2D08C0u:
          LockingObjectMetadata = RaUnitStorageManageBypassIOIoctl(Context, Irp);
          goto LABEL_24;
        case 0x2D11D0u:
          LockingObjectMetadata = RaUnitStorageDataCollectionIoctl(Context, Irp);
          goto LABEL_24;
        case 0x2D11D4u:
          LockingObjectMetadata = RaUnitStorageGetInternalDataIoctl(Context, Irp);
          goto LABEL_24;
        case 0x2D13F8u:
          v18 = RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1));
          if ( !v18 || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitStorageInternalQueryPropertyIoctl(Context, Irp, v22);
            goto LABEL_24;
          }
          goto LABEL_234;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x4D030u:
          if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
          {
            goto LABEL_234;
          }
          LOBYTE(v17) = 1;
LABEL_121:
          LockingObjectMetadata = RaUnitAtaPassThroughIoctl(Context, Irp, v17);
          goto LABEL_24;
        case 0x41018u:
          LockingObjectMetadata = RaUnitScsiGetAddressIoctl(Context, Irp);
          goto LABEL_24;
        case 0x41020u:
          LockingObjectMetadata = RaUnitScsiGetDumpPointersIoctl(Context, Irp);
          goto LABEL_24;
        case 0x41024u:
          LockingObjectMetadata = RaUnitScsiFreeDumpPointersIoctl(Context, Irp);
          goto LABEL_24;
        case 0x4D004u:
          goto LABEL_96;
        case 0x4D008u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitScsiMiniportIoctl(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x4D014u:
LABEL_96:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitScsiPassThroughIoctl(Context, Irp);
            goto LABEL_24;
          }
          goto LABEL_234;
        case 0x4D02Cu:
          if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
          {
            goto LABEL_234;
          }
          v17 = 0LL;
          goto LABEL_121;
      }
    }
    goto LABEL_43;
  }
  if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
    && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
  {
    goto LABEL_234;
  }
  LockingObjectMetadata = RaUnitStorageQueryPropertyIoctl(Context, Irp);
LABEL_24:
  inserted = LockingObjectMetadata;
LABEL_25:
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedAdd(&ExtRefCount, 1u);
      v21 = ((__int64 (__fastcall *)(int *, _BYTE *, PIRP))ExtUnitIoctlPost)(&dword_1C0092038, Context, Irp);
      _InterlockedDecrement(&ExtRefCount);
      if ( v21 != -1073741822 )
        inserted = v21;
    }
  }
LABEL_27:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
      Context,
      Irp,
      LowPart,
      inserted);
  }
  if ( !v22[0] )
    RaUnitReleaseRemoveLock(Context);
  return inserted;
}
