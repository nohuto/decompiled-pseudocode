/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C000B054
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C000AFB0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001EC4 (RaUnitAtaPassThroughIoctl.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     RaIsDeviceDFxPoweredDown @ 0x1C000B624 (RaIsDeviceDFxPoweredDown.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0011720 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0020000 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C0021128 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021688 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C0031C74 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C0038904 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C0038BF4 (RaidAdapterStorageResetBusIoctl.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003C7C0 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1C003D7E8 (RaInsertDFxQueue.c)
 *     RaUnitAttributeManagement @ 0x1C0050B84 (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C0051548 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0051658 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C00516CC (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0051740 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C00517E8 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0051F24 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0052474 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C0053284 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0053310 (RaUnitStoragePowerIdle.c)
 *     RaidUnitSetLedState @ 0x1C0056038 (RaidUnitSetLedState.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0085844 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageDumpNotification @ 0x1C008678C (RaUnitStorageDumpNotification.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0088388 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0088924 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C0089A50 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C008F0C4 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x1C008F190 (RaUnitStorageDataCollectionIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C008F264 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C008F47C (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C008F530 (RaUnitStorageGetInternalDataIoctl.c)
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1C008F6D0 (RaUnitStorageInternalQueryPropertyIoctl.c)
 *     RaUnitStorageInternalSetPropertyIoctl @ 0x1C008F7EC (RaUnitStorageInternalSetPropertyIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x1C008F8BC (RaUnitStorageManageBypassIOIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C008FBCC (RaUnitStorageSetPropertyIoctl.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(_BYTE *Context, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int inserted; // ebx
  __int64 v11; // r8
  unsigned int QOSIoctl; // eax
  unsigned int v14; // r8d
  _IO_STACK_LOCATION *v15; // rax
  int v16; // eax
  char v17; // r8
  unsigned int v18; // r8d
  char IsDeviceDFxPoweredDown; // al
  __int64 v20; // rcx
  unsigned int v21; // ecx
  _BYTE v22[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v23; // [rsp+48h] [rbp-30h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v23 = 0LL;
  v22[0] = 0;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( Irp->RequestorMode )
    {
      v18 = -1073741808;
    }
    else if ( CurrentStackLocation->Parameters.Read.Length )
    {
      LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (Context[448] & 4) == 0;
      v18 = 0;
      Irp->IoStatus.Information = 1LL;
    }
    else
    {
      Irp->IoStatus.Information = 0LL;
      v18 = -1073741789;
    }
    return RaidCompleteRequestEx(Irp, 0, v18);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v23);
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( (byte_1C00799E3 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)&v23,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (byte_1C00799E2 & 2) != 0 )
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
    v18 = v9;
    return RaidCompleteRequestEx(Irp, 0, v18);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      27LL,
      &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
      Context,
      Irp,
      LowPart);
  }
  inserted = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    inserted = ((__int64 (__fastcall *)(_BYTE *, PIRP))ExtUnitIoctlReplace)(Context, Irp);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( inserted != -1073741822 )
    goto LABEL_31;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    ((void (__fastcall *)(_BYTE *, PIRP))ExtUnitIoctlPre)(Context, Irp);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( LowPart > 0x2D1C94 )
  {
    if ( LowPart <= 0x2D5644 )
    {
      if ( LowPart == 2971204 )
      {
        QOSIoctl = RaUnitStorageDumpNotification(Context, Irp);
        goto LABEL_28;
      }
      if ( LowPart != 2959400 )
      {
        if ( LowPart <= 0x2D2828 )
        {
          if ( LowPart == 2956448 )
          {
            QOSIoctl = RaUnitStorageDiagnosticIoctl(Context, Irp);
            goto LABEL_28;
          }
          if ( LowPart != 2956488 )
          {
            switch ( LowPart )
            {
              case 0x2D1CCCu:
                QOSIoctl = RaidUnitSetLedState(Context, Irp);
                goto LABEL_28;
              case 0x2D280Cu:
                QOSIoctl = RaUnitTelemetryIdIoctl(Context, Irp);
                goto LABEL_28;
              case 0x2D2810u:
                QOSIoctl = RaUnitGetQOSIoctl(Context, Irp);
                goto LABEL_28;
            }
            goto LABEL_38;
          }
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitSmartDataIoctl(Context, Irp);
            goto LABEL_28;
          }
          goto LABEL_181;
        }
        if ( LowPart != 2959404 && LowPart != 2959408 )
        {
          switch ( LowPart )
          {
            case 0x2D5000u:
              QOSIoctl = RaidAdapterStorageResetBusIoctl(*((_QWORD *)Context + 3), Irp);
              goto LABEL_28;
            case 0x2D5014u:
              QOSIoctl = RaUnitStorageBreakReservationIoctl(Context, Irp);
              goto LABEL_28;
            case 0x2D5020u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
                || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
              {
                QOSIoctl = RaidAdapterStorageDeviceResetIoctl(*((_QWORD *)Context + 3), Irp);
                goto LABEL_28;
              }
              goto LABEL_181;
          }
          goto LABEL_38;
        }
      }
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
        || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
      {
        QOSIoctl = RaUnitStreamsIoctl(Context, Irp);
        goto LABEL_28;
      }
      goto LABEL_181;
    }
    if ( LowPart <= 0x2DD684 )
    {
      switch ( LowPart )
      {
        case 0x2DD684u:
LABEL_172:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v20 = *((_QWORD *)Context + 3);
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            QOSIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(v20 + 8), Irp);
            goto LABEL_28;
          }
          goto LABEL_181;
        case 0x2D93F4u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitStorageInternalSetPropertyIoctl(Context, Irp);
            goto LABEL_28;
          }
          goto LABEL_181;
        case 0x2D93FCu:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitStorageSetPropertyIoctl(Context, Irp);
            goto LABEL_28;
          }
          goto LABEL_181;
      }
      if ( LowPart != 2987012 )
      {
        if ( LowPart == 3002880 )
        {
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitSetTemperatureThresholdIoctl(Context, Irp);
            goto LABEL_28;
          }
          goto LABEL_181;
        }
        if ( LowPart == 3003328 )
        {
          IsDeviceDFxPoweredDown = RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1));
          if ( !IsDeviceDFxPoweredDown || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitProtocolCommandIoctl(Context, Irp);
            goto LABEL_28;
          }
          goto LABEL_181;
        }
        goto LABEL_38;
      }
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
        || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
      {
        QOSIoctl = RaUnitStorageDataSetManagementIoctl(Context, Irp);
        goto LABEL_28;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x2DDC04u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitHwFirmwareDownloadIoctl(Context, Irp);
            goto LABEL_28;
          }
          break;
        case 0x2DDC08u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitHwFirmwareActivateIoctl(Context, Irp);
            goto LABEL_28;
          }
          break;
        case 0x2DDC9Cu:
          QOSIoctl = RaUnitAttributeManagement(Context, Irp);
          goto LABEL_28;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(Context, Irp);
          goto LABEL_28;
        default:
          goto LABEL_38;
      }
    }
LABEL_181:
    inserted = RaInsertDFxQueue(v11, Irp);
    if ( !inserted )
      inserted = 259;
    goto LABEL_29;
  }
  if ( LowPart == 2956436 )
  {
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      QOSIoctl = RaUnitPowerCapIoctl(Context, Irp);
      goto LABEL_28;
    }
    goto LABEL_181;
  }
  if ( LowPart <= 0x2D11D0 )
  {
    if ( LowPart == 2953680 )
    {
      QOSIoctl = RaUnitStorageDataCollectionIoctl(Context, Irp);
      goto LABEL_28;
    }
    if ( LowPart > 0x4D014 )
    {
      switch ( LowPart )
      {
        case 0x4D02Cu:
          if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
          {
            goto LABEL_181;
          }
          v17 = 0;
          break;
        case 0x4D030u:
          if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
          {
            goto LABEL_181;
          }
          v17 = 1;
          break;
        case 0x4D044u:
        case 0x4D048u:
          goto LABEL_62;
        case 0x2D08C0u:
          QOSIoctl = RaUnitStorageManageBypassIOIoctl(Context, Irp);
          goto LABEL_28;
        default:
          goto LABEL_38;
      }
      QOSIoctl = RaUnitAtaPassThroughIoctl((__int64)Context, Irp, v17);
      goto LABEL_28;
    }
    switch ( LowPart )
    {
      case 0x4D014u:
        goto LABEL_62;
      case 0x41018u:
        QOSIoctl = RaUnitScsiGetAddressIoctl(Context, Irp);
        goto LABEL_28;
      case 0x41020u:
        QOSIoctl = RaUnitScsiGetDumpPointersIoctl(Context, Irp);
        goto LABEL_28;
      case 0x41024u:
        QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(Context, Irp);
        goto LABEL_28;
      case 0x4D004u:
LABEL_62:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitScsiPassThroughIoctl(Context, Irp);
          goto LABEL_28;
        }
        goto LABEL_181;
    }
    if ( LowPart != 315400 )
      goto LABEL_38;
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      QOSIoctl = RaUnitScsiMiniportIoctl(Context, Irp);
      goto LABEL_28;
    }
    goto LABEL_181;
  }
  if ( LowPart == 2956288 )
  {
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
      goto LABEL_28;
    }
    goto LABEL_181;
  }
  if ( LowPart > 0x2D1C00 )
  {
    switch ( LowPart )
    {
      case 0x2D1C80u:
        v15 = Irp->Tail.Overlay.CurrentStackLocation;
        Irp->IoStatus.Information = 0LL;
        if ( v15->Parameters.Create.Options < 0x10 )
          v16 = -1073741811;
        else
          v16 = RaUnitRegisterForIdleDetection(Context);
        v14 = v16;
        goto LABEL_39;
      case 0x2D1C84u:
        QOSIoctl = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
        goto LABEL_28;
      case 0x2D1C88u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitStoragePowerActive(Context, Irp);
          goto LABEL_28;
        }
        goto LABEL_181;
      case 0x2D1C8Cu:
        QOSIoctl = RaUnitStoragePowerIdle(Context, Irp);
        goto LABEL_28;
    }
LABEL_38:
    v14 = -1073741808;
LABEL_39:
    QOSIoctl = RaidCompleteRequestEx(Irp, 0, v14);
    goto LABEL_28;
  }
  if ( LowPart == 2953684 )
  {
    QOSIoctl = RaUnitStorageGetInternalDataIoctl(Context, Irp);
    goto LABEL_28;
  }
  if ( LowPart == 2954232 )
  {
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      QOSIoctl = RaUnitStorageInternalQueryPropertyIoctl(Context, Irp, v22);
      goto LABEL_28;
    }
    goto LABEL_181;
  }
  if ( LowPart != 2954240 )
  {
    if ( LowPart == 2954827 )
    {
      QOSIoctl = RaUnitStorageGetDumpInfoIoctl(Context, Irp);
      goto LABEL_28;
    }
    if ( LowPart != 2954880 )
      goto LABEL_38;
    goto LABEL_172;
  }
  if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
    && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
  {
    goto LABEL_181;
  }
  QOSIoctl = RaUnitStorageQueryPropertyIoctl(Context, Irp);
LABEL_28:
  inserted = QOSIoctl;
LABEL_29:
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedAdd(&ExtRefCount, 1u);
      v21 = ((__int64 (__fastcall *)(_BYTE *, PIRP))ExtUnitIoctlPost)(Context, Irp);
      _InterlockedDecrement(&ExtRefCount);
      if ( v21 != -1073741822 )
        inserted = v21;
    }
  }
LABEL_31:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
      Context,
      Irp,
      LowPart,
      inserted);
  }
  if ( !v22[0] )
    RaUnitReleaseRemoveLock(Context);
  return inserted;
}
