/*
 * XREFs of ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C002D7CC
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C002D5E0 (imp_WdfDmaEnablerCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C002DA18 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C005562C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     WPP_IFR_SF_dLd @ 0x1C0055674 (WPP_IFR_SF_dLd.c)
 */

__int64 __fastcall FxDmaEnabler::Initialize(FxDmaEnabler *this, _WDF_DMA_ENABLER_CONFIG *Config, FxDeviceBase *Device)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxDeviceBase_vtbl *v7; // rax
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int _a2; // edi
  unsigned __int8 v14; // r13
  _WDF_DMA_PROFILE Profile; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int8 v22; // di
  unsigned int AddressWidthOverride; // ecx
  unsigned int WdmDmaVersionOverride; // eax
  bool v25; // zf
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v27; // rcx
  const void *_a1; // rax
  int v30; // ecx
  __int64 v31; // rdx
  unsigned __int16 v32; // r9
  FxDeviceBase_vtbl *v33; // rax
  void (__fastcall *SetDeviceTelemetryInfoFlags)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v36; // r10
  __int16 v37; // r8
  unsigned __int16 v38; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  int globals; // [rsp+38h] [rbp-48h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+40h] [rbp-40h] BYREF

  m_Globals = this->m_Globals;
  memset(&deviceDescription, 0, sizeof(deviceDescription));
  v7 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 2;
  deviceDescription.Version = 2;
  v9 = v7->AllocateDmaEnablerList(Device);
  v12 = 0LL;
  _a2 = v9;
  if ( v9 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Device);
    WPP_IFR_SF_qL(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnabler_cpp_Traceguids, _a1, _a2);
    return _a2;
  }
  LOBYTE(v10) = *((_BYTE *)this + 380);
  v14 = 1;
  this->m_DeviceBase = Device;
  Profile = Config->Profile;
  LOBYTE(v11) = v10 | 4;
  this->m_Profile = Profile;
  deviceDescription.Master = 1;
  deviceDescription.Dma32BitAddresses = 1;
  deviceDescription.InterfaceType = PCIBus;
  *((_BYTE *)this + 380) = v10 | 4;
  v16 = Profile - 1;
  if ( !v16 )
  {
    deviceDescription.ScatterGather = 0;
    goto LABEL_41;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    LOBYTE(v10) = v10 | 0xC;
    goto LABEL_37;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    deviceDescription.ScatterGather = 0;
    v22 = 1;
    deviceDescription.Dma64BitAddresses = 1;
    goto LABEL_10;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    LOBYTE(v10) = v10 | 0xC;
    goto LABEL_9;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    LOBYTE(v10) = v10 | 0x1C;
LABEL_37:
    deviceDescription.ScatterGather = 1;
    *((_BYTE *)this + 380) = v10;
LABEL_41:
    v22 = 0;
    deviceDescription.Dma64BitAddresses = 0;
    goto LABEL_10;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    LOBYTE(v10) = v10 | 0x1C;
LABEL_9:
    deviceDescription.Dma64BitAddresses = 1;
    v22 = 1;
    deviceDescription.ScatterGather = 1;
    *((_BYTE *)this + 380) = v10;
    goto LABEL_10;
  }
  v30 = v21 - 1;
  if ( v30 )
  {
    if ( v30 != 1 )
      return 3221225485LL;
    v31 = 128LL;
    *((_BYTE *)this + 380) = v11 & 0xEB | 0x10;
  }
  else
  {
    *((_BYTE *)this + 380) = v10 & 0xFB;
    v31 = 64LL;
  }
  v33 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 3;
  deviceDescription.Version = 3;
  deviceDescription.Dma64BitAddresses = 0;
  v22 = 0;
  deviceDescription.Dma32BitAddresses = 0;
  v14 = 0;
  SetDeviceTelemetryInfoFlags = v33->SetDeviceTelemetryInfoFlags;
  *(_WORD *)&deviceDescription.Master = 0;
  SetDeviceTelemetryInfoFlags(Device, (FxDeviceInfoFlags)v31);
  v12 = 0LL;
LABEL_10:
  this->m_MaximumLength = Config->MaximumLength;
  AddressWidthOverride = Config->AddressWidthOverride;
  if ( !AddressWidthOverride )
  {
LABEL_11:
    WdmDmaVersionOverride = Config->WdmDmaVersionOverride;
    if ( !WdmDmaVersionOverride )
      goto LABEL_12;
    if ( WdmDmaVersionOverride >= v8 )
    {
      v8 = Config->WdmDmaVersionOverride;
      deviceDescription.Version = v8;
LABEL_12:
      if ( v8 >= 3 && !deviceDescription.DmaAddressWidth )
      {
        if ( v22 )
          deviceDescription.DmaAddressWidth = 64;
        else
          deviceDescription.DmaAddressWidth = v14 != 0 ? 32 : 24;
      }
      if ( (Config->Flags & 2) == 0 )
        goto LABEL_14;
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v10, 0x13u) )
      {
        if ( v8 == 3 )
        {
          *((_BYTE *)this + 380) |= 0x40u;
LABEL_14:
          v25 = (*((_BYTE *)this + 380) & 4) == 0;
          m_DeviceBase = this->m_DeviceBase;
          this->m_FDO = m_DeviceBase->m_DeviceObject.m_DeviceObject;
          this->m_PDO = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
          if ( v25
            || (_a2 = FxDmaEnabler::ConfigureBusMasterAdapters(this, &deviceDescription, Config), (_a2 & 0x80000000) == 0) )
          {
            v27 = this->m_DeviceBase;
            this->m_EvtDmaEnablerFill.m_Method = Config->EvtDmaEnablerFill;
            this->m_EvtDmaEnablerFlush.m_Method = Config->EvtDmaEnablerFlush;
            this->m_EvtDmaEnablerEnable.m_Method = Config->EvtDmaEnablerEnable;
            this->m_EvtDmaEnablerDisable.m_Method = Config->EvtDmaEnablerDisable;
            this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = Config->EvtDmaEnablerSelfManagedIoStart;
            this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = Config->EvtDmaEnablerSelfManagedIoStop;
            ((void (__fastcall *)(FxDeviceBase *, FxDmaEnabler *, __int64, __int64))v27->AddDmaEnabler)(
              v27,
              this,
              v11,
              v12);
            *((_BYTE *)this + 380) |= 1u;
            if ( (*((_BYTE *)this + 380) & 4) != 0 )
              this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoDmaBusMaster);
            return 0;
          }
          else
          {
            FxDmaEnabler::ReleaseResources(this);
          }
          return _a2;
        }
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v38 = v37 - 3;
      }
      else
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v38 = 17;
      }
      WPP_IFR_SF_qL(v36, 2u, 0xFu, v38, WPP_FxDmaEnabler_cpp_Traceguids, ObjectHandleUnchecked, 0xC000000D);
      goto LABEL_31;
    }
    WPP_IFR_SF_DDd(
      this->m_Globals,
      v10,
      0xFu,
      0xFu,
      WPP_FxDmaEnabler_cpp_Traceguids,
      WdmDmaVersionOverride,
      v8,
      -1073741811);
LABEL_31:
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 380) & 4) == 0 )
  {
    v32 = 11;
LABEL_30:
    WPP_IFR_SF_dLd(this->m_Globals, v10, v11, v32, traceGuid, AddressWidthOverride, Config->Profile, globals);
    goto LABEL_31;
  }
  if ( !v22 && AddressWidthOverride > 0x20 )
  {
    v32 = 12;
    goto LABEL_30;
  }
  if ( FxLibraryGlobals.OsVersionInfo.dwMajorVersion > 6
    || FxLibraryGlobals.OsVersionInfo.dwMajorVersion == 6 && FxLibraryGlobals.OsVersionInfo.dwMinorVersion >= 2 )
  {
    v8 = 3;
    deviceDescription.DmaAddressWidth = Config->AddressWidthOverride;
    deviceDescription.Version = 3;
    goto LABEL_11;
  }
  if ( AddressWidthOverride < 0x40 )
    v22 = 0;
  deviceDescription.Dma64BitAddresses = v22;
  if ( AddressWidthOverride < 0x20 )
    v14 = 0;
  deviceDescription.Dma32BitAddresses = v14;
  if ( AddressWidthOverride >= 0x18 )
  {
    if ( ((AddressWidthOverride - 32) & 0xFFFFFFDF) != 0 )
    {
      WPP_IFR_SF_dd(
        this->m_Globals,
        3u,
        0xFu,
        0xEu,
        WPP_FxDmaEnabler_cpp_Traceguids,
        AddressWidthOverride,
        8 * v14 + 24);
      v12 = 0LL;
    }
    goto LABEL_11;
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaEnabler_cpp_Traceguids);
  return 3221225473LL;
}
