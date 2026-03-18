/*
 * XREFs of ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0062550
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0061710 (imp_WdfIoQueueCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0086544 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00183B0 (WPP_IFR_SF_qqqd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0039624 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C00620F0 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0066BC0 (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 */

int __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        FxIoQueue **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  void *ParentObject; // rdx
  FxDeviceBase *v11; // rax
  int result; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  FxObject *v14; // r8
  const void *_a2; // rax
  __int64 _a3; // rdx
  WDFDRIVER__ *Driver; // rdx
  FxIoQueue *v18; // rbx
  FxCxDeviceInfo **p_m_ExecutionLevel; // rcx
  FxCxDeviceInfo *i; // rax
  int v21; // esi
  unsigned __int8 v22; // r8
  FxDriver *pDriver; // [rsp+50h] [rbp-28h] BYREF
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+90h] [rbp+18h] BYREF

  pParent = 0LL;
  pQueue = 0LL;
  pDriver = 0LL;
  m_Globals = this->m_Globals;
  if ( QueueAttributes && (ParentObject = QueueAttributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v11 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
    if ( !v11 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxPkgIo_cpp_Traceguids, QueueAttributes->ParentObject, -1073741808);
      return -1073741808;
    }
    m_DeviceBase = this->m_DeviceBase;
    if ( v11 != m_DeviceBase )
    {
      FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v14);
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xDu,
        0x1Cu,
        WPP_FxPkgIo_cpp_Traceguids,
        QueueAttributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return -1073741808;
    }
  }
  else
  {
    pParent = this;
  }
  if ( Config->Size > 0x58 )
  {
    Driver = Config->Driver;
    if ( Driver )
      FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  }
  result = FxIoQueue::_Create(m_Globals, QueueAttributes, Config, Caller, this, this->m_PowerStateOn, &pQueue);
  if ( result >= 0 )
  {
    v18 = pQueue;
    if ( pDriver )
    {
      p_m_ExecutionLevel = (FxCxDeviceInfo **)&this->m_DeviceBase[1].m_ExecutionLevel;
      for ( i = *p_m_ExecutionLevel; i != (FxCxDeviceInfo *)p_m_ExecutionLevel; i = (FxCxDeviceInfo *)i->ListEntry.Flink )
      {
        if ( i->Driver == pDriver )
          goto LABEL_19;
      }
      i = 0LL;
LABEL_19:
      pQueue->m_CxDeviceInfo = i;
    }
    v21 = FxObject::Commit(v18, QueueAttributes, 0LL, (_FX_DRIVER_GLOBALS *)pParent, 1u);
    if ( v21 >= 0 )
    {
      FxPkgIo::AddIoQueue(this, v18, v22);
      *ppQueue = v18;
    }
    else
    {
      FxObject::ClearEvtCallbacks(v18);
      ((void (*)(void))v18->DeleteObject)();
    }
    return v21;
  }
  return result;
}
