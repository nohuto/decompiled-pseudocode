/*
 * XREFs of ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x1C0028A68
 * Callers:
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0029294 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 * Callees:
 *     ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C00289F8 (--0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z.c)
 */

void __fastcall FxWmiInstanceExternal::FxWmiInstanceExternal(
        FxWmiInstanceExternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_WMI_INSTANCE_CONFIG *Config,
        FxWmiProvider *Provider)
{
  unsigned __int8 UseContextForQuery; // al

  FxWmiInstance::FxWmiInstance(this, FxDriverGlobals, 0xB8u, Provider);
  this->__vftable = (FxWmiInstanceExternal_vtbl *)FxWmiInstanceExternal::`vftable';
  this->m_QueryInstanceCallback.m_Method = 0LL;
  this->m_SetInstanceCallback.m_Method = 0LL;
  this->m_SetItemCallback.m_Method = 0LL;
  this->m_ExecuteMethodCallback.m_Method = 0LL;
  this->m_ContextLength = 0;
  UseContextForQuery = Config->UseContextForQuery;
  this->m_UseContextForQuery = UseContextForQuery;
  if ( !UseContextForQuery )
    this->m_QueryInstanceCallback.m_Method = Config->EvtWmiInstanceQueryInstance;
  this->m_SetInstanceCallback.m_Method = Config->EvtWmiInstanceSetInstance;
  this->m_SetItemCallback.m_Method = Config->EvtWmiInstanceSetItem;
  this->m_ExecuteMethodCallback.m_Method = Config->EvtWmiInstanceExecuteMethod;
}
