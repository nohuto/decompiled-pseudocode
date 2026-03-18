/*
 * XREFs of ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FEA0
 * Callers:
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C001C20C (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C00207F4 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FF30 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 */

__int64 __fastcall FxPkgPnp::RegisterPowerPolicyWmiInstance(
        FxPkgPnp *this,
        const _GUID *Guid,
        FxWmiInstanceInternalCallbacks *Callbacks,
        FxWmiInstanceInternal **Instance)
{
  _GUID v4; // xmm0
  FxDeviceBase *m_DeviceBase; // rax
  int _a1; // eax
  unsigned int v8; // ebx
  _WDF_WMI_PROVIDER_CONFIG config; // [rsp+30h] [rbp-38h] BYREF

  v4 = *Guid;
  m_DeviceBase = this->m_DeviceBase;
  config.Flags = 0;
  *(_QWORD *)(&config.MinInstanceBufferSize + 1) = 0LL;
  HIDWORD(config.EvtWmiProviderFunctionControl) = 0;
  config.Guid = v4;
  config.Size = 40;
  config.MinInstanceBufferSize = 1;
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
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x2Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1);
  }
  return v8;
}
