/*
 * XREFs of ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C001F048
 * Callers:
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C001EC3C (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0021924 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_ddLLdiDD @ 0x1C001F1B4 (WPP_IFR_SF_ddLLdiDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::AssignResources(
        FxInterrupt *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescTrans)
{
  unsigned __int16 MessageCount; // ax
  _KINTERRUPT_MODE v7; // edx
  bool v8; // zf
  unsigned __int8 Class; // cl
  __int16 v10; // cx
  unsigned __int8 v11; // al
  $3BEA515B54D16529C9D1A7889B68552E *v12; // rdi
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v14; // rdx
  void (__fastcall *SetDeviceTelemetryInfoFlags)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  unsigned __int16 v16; // r9
  const _GUID *v17; // [rsp+20h] [rbp-58h]

  MessageCount = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  if ( MessageCount && !FxLibraryGlobals.ProcessorGroupSupport )
  {
    FxVerifierDbgBreakPoint(this->m_Globals);
    MessageCount = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  }
  this->m_InterruptInfo.Group = MessageCount;
  this->m_InterruptInfo.TargetProcessorSet = CmDescTrans->u.Interrupt.Affinity;
  this->m_InterruptInfo.ShareDisposition = CmDescTrans->ShareDisposition;
  v7 = CmDescTrans->Flags & 1;
  v8 = this->m_PassiveHandling == 0;
  this->m_InterruptInfo.Mode = v7;
  Class = CmDescTrans->u.Connection.Class;
  if ( !v8 )
    Class = 0;
  this->m_InterruptInfo.Irql = Class;
  v10 = CmDescTrans->Flags & 2;
  this->m_InterruptInfo.MessageSignaled = v10 != 0;
  if ( v7 != Latched || (v11 = 1, v10) )
    v11 = 0;
  this->m_IsEdgeTriggeredNonMsiInterrupt = v11;
  if ( v10 && CmDescRaw->u.MessageInterrupt.Raw.MessageCount > 1u )
  {
    v12 = &this->96;
    v14 = 8LL;
    m_DeviceBase = this->m_DeviceBase;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Generic.Start.HighPart + this->m_InterruptInfo.MessageNumber;
    goto LABEL_11;
  }
  v12 = &this->96;
  v8 = v10 == 0;
  this->m_InterruptInfo.Vector = CmDescTrans->u.Interrupt.Vector;
  m_DeviceBase = this->m_DeviceBase;
  if ( !v8 )
  {
    v14 = 4LL;
LABEL_11:
    SetDeviceTelemetryInfoFlags = m_DeviceBase->SetDeviceTelemetryInfoFlags;
    goto LABEL_12;
  }
  v14 = 1LL;
  SetDeviceTelemetryInfoFlags = m_DeviceBase->SetDeviceTelemetryInfoFlags;
  if ( (CmDescTrans->Flags & 1) != 0 )
    v14 = 2LL;
LABEL_12:
  SetDeviceTelemetryInfoFlags(m_DeviceBase, (FxDeviceInfoFlags)v14);
  if ( this->m_PassiveHandling )
    v12->m_DeviceBase->SetDeviceTelemetryInfoFlags(v12->m_DeviceBase, DeviceInfoPassiveLevelInterrupt);
  this->m_CmTranslatedResource = CmDescTrans;
  WPP_IFR_SF_ddLLdiDD(
    this->m_Globals,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.MessageSignaled,
    v16,
    v17,
    this->m_InterruptInfo.MessageSignaled,
    this->m_InterruptInfo.MessageNumber,
    this->m_Policy,
    this->m_Priority,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    this->m_InterruptInfo.Irql,
    this->m_InterruptInfo.Vector);
}
