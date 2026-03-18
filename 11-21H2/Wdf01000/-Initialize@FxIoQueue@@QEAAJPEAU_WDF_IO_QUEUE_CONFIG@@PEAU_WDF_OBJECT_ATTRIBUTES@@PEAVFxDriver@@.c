/*
 * XREFs of ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C0024F78
 * Callers:
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0024E8C (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00199A0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001B62C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x1C0025214 (-ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_dqd @ 0x1C00572AC (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C0074D40 (WPP_IFR_SF_qqqqq.c)
 */

int __fastcall FxIoQueue::Initialize(
        FxIoQueue *this,
        _WDF_IO_QUEUE_CONFIG *pConfig,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        unsigned __int8 InitialPowerStateOn)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  MxEvent *p_m_PowerIdle; // rbx
  int result; // eax
  _WDF_IO_QUEUE_DISPATCH_TYPE DispatchType; // r8d
  void (__fastcall *EvtIoDefault)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  unsigned int NumberOfPresentedRequests; // ecx
  _WDF_TRI_STATE PowerManaged; // ecx
  FxIoQueuePowerState v16; // eax
  __int32 v17; // ecx
  int _a1; // ebx
  unsigned __int16 v19; // r9
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v21; // r9
  const void *globals; // rax
  unsigned __int8 v23; // dl
  const void *_a2; // rax
  int v25; // r8d

  m_Globals = this->m_Globals;
  p_m_PowerIdle = &this->m_PowerIdle;
  KeInitializeEvent(&this->m_PowerIdle.m_Event, NotificationEvent, 0);
  p_m_PowerIdle->m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_FinishDisposing.m_Event, NotificationEvent, 0);
  this->m_FinishDisposing.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x800u;
  result = FxIoQueue::ConfigureConstraints(this, QueueAttributes, Caller);
  if ( result < 0 )
    return result;
  DispatchType = pConfig->DispatchType;
  if ( (unsigned int)(DispatchType - 1) > 2 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    _a1 = -1073741811;
    WPP_IFR_SF_dqd(m_Globals, 2u, 0xDu, 0xCu, WPP_FxIoQueue_cpp_Traceguids, v25, _a2, -1073741811);
    return _a1;
  }
  EvtIoDefault = pConfig->EvtIoDefault;
  if ( DispatchType == WdfIoQueueDispatchManual )
  {
    if ( EvtIoDefault
      || pConfig->EvtIoRead
      || pConfig->EvtIoWrite
      || pConfig->EvtIoDeviceControl
      || pConfig->EvtIoInternalDeviceControl )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v21 = 16;
      goto LABEL_40;
    }
  }
  else if ( !EvtIoDefault
         && !pConfig->EvtIoRead
         && !pConfig->EvtIoWrite
         && !pConfig->EvtIoDeviceControl
         && !pConfig->EvtIoInternalDeviceControl )
  {
    _a1 = -1071644149;
    v19 = 15;
    goto LABEL_38;
  }
  if ( pConfig->Size > 0x50 )
  {
    NumberOfPresentedRequests = pConfig->Settings.Parallel.NumberOfPresentedRequests;
    if ( NumberOfPresentedRequests && ((DispatchType - 1) & 0xFFFFFFFD) == 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v21 = 17;
LABEL_40:
      _a1 = -1073741811;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, v21, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, 0xC000000D);
      return _a1;
    }
    this->m_MaxParallelQueuePresentedRequests = NumberOfPresentedRequests;
  }
  if ( this->m_PassiveLevel )
  {
    _a1 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem);
    if ( _a1 < 0 )
    {
      v19 = 18;
LABEL_38:
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, v19, WPP_FxIoQueue_cpp_Traceguids, _a1);
      return _a1;
    }
  }
  this->m_Type = pConfig->DispatchType;
  PowerManaged = pConfig->PowerManaged;
  if ( PowerManaged )
  {
    v17 = PowerManaged - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
        this->m_PowerManaged = BYTE1(this->m_DeviceBase[1].m_Globals) == 0;
    }
    else
    {
      this->m_PowerManaged = 1;
    }
  }
  else
  {
    this->m_PowerManaged = 0;
  }
  if ( BYTE5(this->m_DeviceBase[1].m_Globals) )
  {
    this->m_PowerManaged = 0;
  }
  else if ( this->m_PowerManaged )
  {
    v16 = 2 - (InitialPowerStateOn != 0);
    goto LABEL_17;
  }
  v16 = FxIoQueuePowerOn;
LABEL_17:
  this->m_PowerState = v16;
  this->m_AllowZeroLengthRequests = pConfig->AllowZeroLengthRequests;
  if ( m_Globals->FxVerboseOn )
  {
    globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqqqq(
      m_Globals,
      v23,
      0xDu,
      0x13u,
      WPP_FxIoQueue_cpp_Traceguids,
      pConfig->EvtIoDefault,
      pConfig->EvtIoRead,
      pConfig->EvtIoWrite,
      pConfig->EvtIoDeviceControl,
      globals);
  }
  this->m_IoDefault.Method = pConfig->EvtIoDefault;
  this->m_IoStop.Method = pConfig->EvtIoStop;
  this->m_IoResume.Method = pConfig->EvtIoResume;
  this->m_IoRead.Method = pConfig->EvtIoRead;
  this->m_IoWrite.Method = pConfig->EvtIoWrite;
  this->m_IoDeviceControl.Method = pConfig->EvtIoDeviceControl;
  this->m_IoInternalDeviceControl.Method = pConfig->EvtIoInternalDeviceControl;
  this->m_IoCanceledOnQueue.Method = pConfig->EvtIoCanceledOnQueue;
  FxIoQueue::SetState(this, FxIoQueueSetDispatchRequests|0x1);
  result = 0;
  this->m_Configured = 1;
  return result;
}
