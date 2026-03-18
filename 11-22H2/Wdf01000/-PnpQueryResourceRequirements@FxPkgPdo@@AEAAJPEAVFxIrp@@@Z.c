/*
 * XREFs of ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00809E0
 * Callers:
 *     ?_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0080DD0 (-_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C004EC40 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C004FF10 (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0080CBC (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResourceRequirements(FxPkgPdo *this, _FX_DRIVER_GLOBALS *Irp)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // r15
  NTSTATUS _a3; // ebx
  _SINGLE_LIST_ENTRY *i; // rsi
  const void *_a1; // rax
  __int64 v8; // rdx
  _WDF_OBJECT_ATTRIBUTES *v9; // r8
  unsigned __int8 v10; // r9
  FxIoResReqList *v11; // rsi
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  FxIoResReqList *status; // [rsp+70h] [rbp+8h] BYREF
  WDFIORESREQLIST__ *reqlist; // [rsp+80h] [rbp+18h] BYREF

  status = 0LL;
  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  _a3 = 0;
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, Irp, 0LL);
  LOBYTE(this->m_DeviceBase[1].m_ChildEntry.Blink) = 1;
  for ( i = this->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( i[-1].Next )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)&i[-2]);
      *(_OWORD *)&i[-2].Next = 0LL;
    }
    _a3 = FxDeviceInterface::Register((FxDeviceInterface *)&i[-6], this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    if ( _a3 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxPkgPdoKM_cpp_Traceguids, _a1, *(_QWORD *)(v8 + 144), _a3);
      break;
    }
  }
  p_m_DeviceInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_DeviceInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( _a3 >= 0 )
  {
    if ( this->m_DeviceResourceRequirementsQuery.m_Method )
    {
      _a3 = FxIoResReqList::_CreateAndInit(&status, this->m_Globals, v9, v10);
      if ( _a3 >= 0 )
      {
        v11 = status;
        reqlist = 0LL;
        FxObject::Commit(status, 0LL, (void **)&reqlist, 0LL, 1u);
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        m_Method = this->m_DeviceResourceRequirementsQuery.m_Method;
        if ( m_Method )
        {
          _a3 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, reqlist);
          if ( _a3 < 0 )
          {
LABEL_21:
            v11->DeleteObject(v11);
            return FxPkgPnp::CompletePnpRequest(this, (FxIrp *)Irp, _a3);
          }
        }
        else
        {
          _a3 = 0;
        }
        if ( v11->m_Count )
        {
          WdmList = FxIoResReqList::CreateWdmList(v11);
          if ( WdmList )
            Irp->Linkage.Flink[3].Blink = (_LIST_ENTRY *)WdmList;
          else
            _a3 = -1073741670;
        }
        else
        {
          _a3 = (NTSTATUS)Irp->Linkage.Flink[3].Flink;
        }
        goto LABEL_21;
      }
    }
  }
  return FxPkgPnp::CompletePnpRequest(this, (FxIrp *)Irp, _a3);
}
