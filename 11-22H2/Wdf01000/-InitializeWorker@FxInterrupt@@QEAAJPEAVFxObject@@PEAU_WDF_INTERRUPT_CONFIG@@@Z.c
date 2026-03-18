/*
 * XREFs of ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F298
 * Callers:
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F178 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00251D0 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0039624 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0042DAC (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C00465C0 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C004FF84 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 */

__int64 __fastcall FxInterrupt::InitializeWorker(
        FxInterrupt *this,
        FxObject *Parent,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  unsigned __int16 m_Type; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _WDF_TRI_STATE ReportInactiveOnPowerDown; // ecx
  unsigned __int8 PassiveHandling; // al
  WDFSPINLOCK__ *SpinLock; // rdx
  unsigned __int64 *p_m_Lock; // rax
  FxDeviceBase *v12; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int8 v14; // r9
  __int64 result; // rax
  WDFWAITLOCK__ *v16; // rdx
  signed int v17; // eax
  unsigned int v18; // r14d
  signed int v19; // eax
  unsigned int v20; // ebx
  const void *ObjectHandleUnchecked; // rax
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-40h] BYREF
  WDFWAITLOCK__ *waitLock; // [rsp+C0h] [rbp+40h] BYREF
  IFxHasCallbacks *callbacks; // [rsp+C8h] [rbp+48h] BYREF
  FxObject *tmpObject; // [rsp+D0h] [rbp+50h] BYREF

  m_Type = Parent->m_Type;
  m_Globals = this->m_Globals;
  this->m_EvtInterruptIsr = Configuration->EvtInterruptIsr;
  this->m_EvtInterruptDpc = Configuration->EvtInterruptDpc;
  this->m_EvtInterruptWorkItem = Configuration->EvtInterruptWorkItem;
  ReportInactiveOnPowerDown = Configuration->ReportInactiveOnPowerDown;
  tmpObject = 0LL;
  callbacks = 0LL;
  if ( ReportInactiveOnPowerDown )
  {
    if ( ReportInactiveOnPowerDown == WdfTrue )
      this->m_UseSoftDisconnect = 1;
  }
  else
  {
    this->m_UseSoftDisconnect = 0;
  }
  PassiveHandling = Configuration->PassiveHandling;
  this->m_PassiveHandling = PassiveHandling;
  SpinLock = Configuration->SpinLock;
  if ( SpinLock )
  {
    waitLock = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)SpinLock, 0x1024u, (void **)&waitLock);
    *((_BYTE *)waitLock + 121) = 1;
    p_m_Lock = (unsigned __int64 *)(waitLock + 28);
LABEL_9:
    this->m_SpinLock = p_m_Lock;
    goto LABEL_10;
  }
  if ( !PassiveHandling )
  {
    p_m_Lock = &this->m_BuiltInSpinLock.m_Lock;
    goto LABEL_9;
  }
LABEL_10:
  v12 = FxDeviceBase::_SearchForDevice(Parent, &callbacks);
  m_DeviceBase = this->m_DeviceBase;
  if ( !m_DeviceBase || v12 != m_DeviceBase || (unsigned __int16)(m_Type - 4098) > 1u )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Parent);
    v20 = -1073741811;
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xCu,
      0x12u,
      (const _GUID *)&WPP_InterruptObject_cpp_Traceguids,
      ObjectHandleUnchecked,
      (__int64)Configuration,
      -1073741811);
    return v20;
  }
  if ( Configuration->EvtInterruptWorkItem )
  {
    v14 = 1;
  }
  else if ( Configuration->EvtInterruptDpc )
  {
    v14 = 0;
  }
  else
  {
    v14 = this->m_PassiveHandling != 0;
  }
  result = FxObject::_GetEffectiveLock(
             Parent,
             callbacks,
             Configuration->AutomaticSerialization,
             v14,
             &this->m_CallbackLock,
             &tmpObject);
  if ( (int)result >= 0 )
  {
    if ( m_Type == 4099 )
      FxObject::MarkNoDeleteDDI(Parent, ObjectLock);
    if ( this->m_PassiveHandling )
    {
      v16 = Configuration->WaitLock;
      if ( v16 )
        FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)v16, 0x1023u, (void **)&this->m_WaitLock);
      if ( !this->m_WaitLock )
      {
        waitLock = 0LL;
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        memset(&attributes, 0, 24);
        attributes.Size = 56;
        memset(&attributes.ParentObject, 0, 24);
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        v17 = FxWaitLock::_Create(m_Globals, &attributes, 0LL, 0, &waitLock);
        v18 = v17;
        if ( v17 < 0 )
        {
          WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x13u, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids, v17);
          return v18;
        }
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)waitLock, 0x1023u, (void **)&this->m_WaitLock);
        this->m_DisposeWaitLock = 1;
      }
    }
    if ( !this->m_EvtInterruptWorkItem && (!unk_1C009FF18 || !this->m_EvtInterruptDpc) )
      return 0LL;
    v19 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem);
    v20 = v19;
    if ( v19 >= 0 )
      return 0LL;
    WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x14u, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids, v19);
    return v20;
  }
  return result;
}
