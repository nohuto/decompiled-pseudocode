/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C000B7BC
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C000AFB0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaIsDeviceDFxPoweredDown @ 0x1C000B624 (RaIsDeviceDFxPoweredDown.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaForwardIrp @ 0x1C0017FB8 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C0031C74 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0032F18 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0032FA8 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0034EB4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0034FE4 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00351AC (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMFNDChildPFControl @ 0x1C00354B8 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C0035798 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00358E4 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0035BD0 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterReconfigureMFND @ 0x1C0036034 (RaidAdapterReconfigureMFND.c)
 *     RaidAdapterRpmbRequest @ 0x1C0036A2C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0036D00 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C0036D58 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0036DD4 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0037B34 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x1C0037C10 (RaidAdapterSetLedState.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0038850 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C0038904 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x1C0038954 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x1C0038AD4 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C0038BF4 (RaidAdapterStorageResetBusIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C0038C38 (RaidAdapterStorageSetPropertyIoctl.c)
 *     WPP_SF_qqDD @ 0x1C003C7C0 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1C003D7E8 (RaInsertDFxQueue.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0084C68 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0088544 (RaidAdapterPassThrough.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C008CD90 (RaidAdapterStorageGetInternalDataIoctl.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  signed int v4; // edi
  __int64 v5; // r8
  unsigned int v6; // ebp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int inserted; // edi
  __int64 v10; // r8
  unsigned int InquiryDataIoctl; // eax
  struct _DEVICE_OBJECT *v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v17; // [rsp+48h] [rbp-30h] BYREF

  v16[0] = 0;
  v17 = 0LL;
  v4 = RaidAcquireAdapterRemoveLock(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v17);
    v7 = v6 - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || v6 == 315396 )
    {
      if ( (byte_1C00799E3 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)&v17,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v6);
    }
    else if ( (byte_1C00799E2 & 2) != 0 )
    {
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)&v17,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v6);
    }
  }
  if ( v4 < 0 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2, 0, v4);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      a1,
      a2,
      HIWORD(v6),
      (v6 >> 2) & 0xFFF);
  }
  inserted = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    inserted = ((__int64 (__fastcall *)(__int64, __int64))ExtAdapterIoctlReplace)(a1, a2);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( inserted != -1073741822 )
    goto LABEL_29;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedAdd(&ExtRefCount, 1u);
    ((void (__fastcall *)(__int64, __int64))ExtAdapterIoctlPre)(a1, a2);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( v6 > 0x2D1C98 )
  {
    if ( v6 > 0x2D9CD4 )
    {
      switch ( v6 )
      {
        case 0x2DD200u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2DD3C0u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaAdapterProtocolCommandIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2DD684u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterSetBootLunIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2DDC04u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterHwFirmwareDownloadIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2DDC08u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterHwFirmwareActivateIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x32C000u:
        case 0x32C038u:
          InquiryDataIoctl = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
          goto LABEL_26;
      }
    }
    else
    {
      switch ( v6 )
      {
        case 0x2D9CD4u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterMFNDChildPFControl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2D1CA0u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterDiagnosticIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2D1CCCu:
          InquiryDataIoctl = RaidAdapterSetLedState(a1, a2);
          goto LABEL_26;
        case 0x2D5000u:
          InquiryDataIoctl = RaidAdapterStorageResetBusIoctl(a1, a2);
          goto LABEL_26;
        case 0x2D5014u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterStorageBreakReservationIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2D5020u:
          InquiryDataIoctl = RaidAdapterStorageDeviceResetIoctl(a1, a2);
          goto LABEL_26;
        case 0x2D93F4u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterStorageInternalSetPropertyIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2D93FCu:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterStorageSetPropertyIoctl(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
        case 0x2D9CD0u:
          if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterReconfigureMFND(a1, a2);
            goto LABEL_26;
          }
          goto LABEL_137;
      }
    }
    goto LABEL_121;
  }
  if ( v6 == 2956440 )
  {
    if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
    {
      InquiryDataIoctl = RaidAdapterRpmbRequest(a1, a2);
      goto LABEL_26;
    }
    goto LABEL_137;
  }
  if ( v6 <= 0x4D044 )
  {
    switch ( v6 )
    {
      case 0x4D044u:
        goto LABEL_48;
      case 0x4100Cu:
        InquiryDataIoctl = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
        goto LABEL_26;
      case 0x41010u:
        InquiryDataIoctl = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
        goto LABEL_26;
      case 0x41018u:
        InquiryDataIoctl = RaidAdapterScsiGetAddressIoctl(a1, a2);
        goto LABEL_26;
      case 0x4101Cu:
        v13 = *(struct _DEVICE_OBJECT **)(a1 + 32);
        *(_BYTE *)(a1 + 106) = 1;
        IoInvalidateDeviceRelations(v13, BusRelations);
        v14 = 0;
LABEL_47:
        InquiryDataIoctl = RaidCompleteRequestEx((PIRP)a2, 0, v14);
        goto LABEL_26;
      case 0x4D004u:
LABEL_48:
        v5 = 0LL;
        goto LABEL_43;
      case 0x4D008u:
        if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          InquiryDataIoctl = RaidAdapterScsiMiniportIoctlWithAddress(a1, a2, 0LL, 0LL, 0, 2);
          goto LABEL_26;
        }
LABEL_137:
        inserted = RaInsertDFxQueue(v10, a2);
        if ( !inserted )
          inserted = 259;
        goto LABEL_27;
      case 0x4D014u:
LABEL_42:
        LOBYTE(v5) = 1;
LABEL_43:
        InquiryDataIoctl = RaidAdapterPassThrough(a1, a2, v5);
        goto LABEL_26;
      case 0x4D038u:
        if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          return RaidAdapterMiniportProcessServiceRequest(a1, a2);
        goto LABEL_137;
    }
LABEL_121:
    v14 = -1073741637;
    goto LABEL_47;
  }
  switch ( v6 )
  {
    case 0x4D048u:
      goto LABEL_42;
    case 0x2D11D4u:
      InquiryDataIoctl = RaidAdapterStorageGetInternalDataIoctl(a1, a2);
      goto LABEL_26;
    case 0x2D13F8u:
      if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        InquiryDataIoctl = RaidAdapterStorageInternalQueryPropertyIoctl(a1, a2, v16);
        goto LABEL_26;
      }
      goto LABEL_137;
  }
  if ( v6 != 2954240 )
  {
    switch ( v6 )
    {
      case 0x2D1680u:
        if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          InquiryDataIoctl = RaidAdapterQueryBootLunsIoctl(a1, a2);
          goto LABEL_26;
        }
        goto LABEL_137;
      case 0x2D1C00u:
        if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          InquiryDataIoctl = RaidAdapterHwFirmwareGetInfoIoctl(a1, a2);
          goto LABEL_26;
        }
        goto LABEL_137;
      case 0x2D1C94u:
        if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          InquiryDataIoctl = RaidAdapterPowerCapIoctl(a1, a2);
          goto LABEL_26;
        }
        goto LABEL_137;
    }
    goto LABEL_121;
  }
  if ( RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
    goto LABEL_137;
  InquiryDataIoctl = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
LABEL_26:
  inserted = InquiryDataIoctl;
LABEL_27:
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedAdd(&ExtRefCount, 1u);
      v15 = ((__int64 (__fastcall *)(__int64, __int64))ExtAdapterIoctlPost)(a1, a2);
      _InterlockedDecrement(&ExtRefCount);
      if ( v15 != -1073741822 )
        inserted = v15;
    }
  }
LABEL_29:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
      a1,
      a2,
      v6,
      inserted);
  }
  if ( !v16[0] )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
  return inserted;
}
