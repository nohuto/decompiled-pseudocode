/*
 * XREFs of ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C0028094
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002862C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0029BA0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00251D0 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 */

void __fastcall FxWmiProvider::FxWmiProvider(
        FxWmiProvider *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_WMI_PROVIDER_CONFIG *Config,
        FxDevice *Device)
{
  int (__fastcall *EvtWmiProviderFunctionControl)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // rax

  FxNonPagedObject::FxNonPagedObject(this, 0x1004u, 0xD8u, FxDriverGlobals);
  this->__vftable = (FxWmiProvider_vtbl *)FxWmiProvider::`vftable';
  this->m_ListEntry.Blink = &this->m_ListEntry;
  this->m_ListEntry.Flink = &this->m_ListEntry;
  this->m_InstanceListHead.Blink = &this->m_InstanceListHead;
  this->m_InstanceListHead.Flink = &this->m_InstanceListHead;
  this->m_FunctionControl.m_Method = 0LL;
  this->m_NumInstances = 0;
  this->m_Parent = Device->m_PkgWmi;
  *(_WORD *)&this->m_EventControlEnabled = 0;
  this->m_RemoveGuid = 0;
  this->m_TracingHandle = 0LL;
  this->m_Flags = Config->Flags;
  this->m_MinInstanceBufferSize = Config->MinInstanceBufferSize;
  this->m_Guid = Config->Guid;
  EvtWmiProviderFunctionControl = Config->EvtWmiProviderFunctionControl;
  if ( EvtWmiProviderFunctionControl )
    this->m_FunctionControl.m_Method = EvtWmiProviderFunctionControl;
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
  this->m_ObjectFlags |= 0x800u;
}
