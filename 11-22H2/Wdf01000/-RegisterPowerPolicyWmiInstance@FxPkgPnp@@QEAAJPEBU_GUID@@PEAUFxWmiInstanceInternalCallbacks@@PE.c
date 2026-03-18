/*
 * XREFs of ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0075598
 * Callers:
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C00798BC (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0079970 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0029BA0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 */

__int64 __fastcall FxPkgPnp::RegisterPowerPolicyWmiInstance(
        FxPkgPnp *this,
        const _GUID *Guid,
        FxWmiInstanceInternalCallbacks *Callbacks,
        FxWmiInstanceInternal **Instance)
{
  FxDeviceBase *m_DeviceBase; // rax
  _GUID v6; // xmm0
  signed int _a1; // eax
  unsigned int v8; // ebx
  _WDF_WMI_PROVIDER_CONFIG config; // [rsp+30h] [rbp-38h] BYREF

  memset(&config, 0, sizeof(config));
  m_DeviceBase = this->m_DeviceBase;
  config.Size = 40;
  v6 = *Guid;
  config.MinInstanceBufferSize = 1;
  config.Guid = v6;
  _a1 = FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
          (FxWmiIrpHandler *)m_DeviceBase[3].m_ParentObject,
          &config,
          Callbacks,
          Instance);
  v8 = _a1;
  if ( _a1 == -1073741771 )
  {
    return 0;
  }
  else if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x2Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1);
  }
  return v8;
}
