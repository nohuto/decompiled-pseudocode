/*
 * XREFs of imp_WdfWmiInstanceCreate @ 0x1C0025AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     FxIsEqualGuid @ 0x1C001C72C (FxIsEqualGuid.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C001D0E8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0025C18 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0025E7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_DDd @ 0x1C0052E4C (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWmiInstanceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_INSTANCE_CONFIG *InstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **Instance)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  WDFWMIPROVIDER__ *Provider; // rdx
  _WDF_WMI_PROVIDER_CONFIG *ProviderConfig; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  int result; // eax
  int v13; // eax
  FxWmiInstanceExternal *v14; // rdi
  int v15; // esi
  __int64 v16; // rcx
  FxWmiInstanceExternal *pInstance; // [rsp+50h] [rbp-20h] BYREF
  WDFWMIINSTANCE__ *hInstance; // [rsp+58h] [rbp-18h] BYREF
  WDFWMIPROVIDER__ *hProvider; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  FxWmiProvider *pProvider; // [rsp+A0h] [rbp+30h] BYREF
  FxDevice *pDevice; // [rsp+B0h] [rbp+40h] BYREF

  pProvider = 0LL;
  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hInstance = 0LL;
  pInstance = 0LL;
  if ( !InstanceConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( InstanceConfig->Size != 64 )
  {
    WPP_IFR_SF_DDd(
      v5,
      (unsigned __int8)Device,
      0x12u,
      0xBu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig->Size,
      64,
      -1073741820);
    return -1073741820;
  }
  Provider = InstanceConfig->Provider;
  ProviderConfig = InstanceConfig->ProviderConfig;
  if ( Provider )
  {
    if ( !ProviderConfig )
    {
      FxObjectHandleGetPtr(v5, (unsigned __int64)Provider, 0x1004u, (void **)&pProvider);
LABEL_9:
      v13 = FxWmiInstanceExternal::_Create(
              pProvider->m_Globals,
              pProvider,
              InstanceConfig,
              InstanceAttributes,
              &hInstance,
              &pInstance);
      v14 = pInstance;
      v15 = v13;
      if ( v13 < 0 || InstanceConfig->Register && (v15 = FxWmiProvider::AddInstance(pProvider, pInstance, 0), v15 < 0) )
      {
        if ( v14 )
        {
          FxObject::ClearEvtCallbacks(v14);
          ((void (*)(void))v14->DeleteObject)();
        }
        if ( InstanceConfig->ProviderConfig )
        {
          FxObject::ClearEvtCallbacks(pProvider);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
        }
      }
      else if ( Instance )
      {
        *Instance = hInstance;
      }
      return v15;
    }
    v15 = -1073741811;
    WPP_IFR_SF_qqqd(
      v5,
      2u,
      0x12u,
      0xDu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig,
      Provider,
      (__int64)ProviderConfig,
      -1073741811);
    return v15;
  }
  if ( !ProviderConfig )
  {
    v15 = -1073741811;
    WPP_IFR_SF_qL(v5, 2u, 0x12u, 0xCu, WPP_FxWmiAPI_cpp_Traceguids, InstanceConfig, 0xC000000D);
    return v15;
  }
  pDevice = 0LL;
  hProvider = 0LL;
  FxObjectHandleGetPtr(v5, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner
    && (FxIsEqualGuid(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE)
     && m_Owner->m_IdleSettings.WmiInstance
     || FxIsEqualGuid(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE)
     && m_Owner->m_WakeSettings.WmiInstance) )
  {
    WPP_IFR_SF_(v5, 2u, 0x12u, 0xEu, WPP_FxWmiAPI_cpp_Traceguids);
    return -1073741055;
  }
  result = FxWmiProvider::_Create(v5, Device, 0LL, InstanceConfig->ProviderConfig, &hProvider, &pProvider);
  if ( result >= 0 )
    goto LABEL_9;
  return result;
}
