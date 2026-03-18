/*
 * XREFs of ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0088464
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0002D18 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0002F18 (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018170 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018234 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0091644 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryDeviceRelations(FxPkgPnp *this, FxIrp *Irp, FxRelatedDeviceList *List)
{
  __int64 result; // rax
  _IRP *m_Irp; // rdi
  unsigned int v8; // r12d
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned __int64 ObjectHandleUnchecked; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  _DWORD *Information; // rdi
  int v13; // ebx
  FxRelatedDevice *NextEntry; // rax
  __int64 v15; // rdx
  _DWORD *Pool2; // rbp
  __int64 i; // rbx
  unsigned __int8 m_Retries; // bl
  const void *_a1; // rax
  bool v20; // bl
  FxRelatedDevice *v21; // rbx
  FxRelatedDevice *v22; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  DEVICE_RELATION_TYPE Type; // [rsp+98h] [rbp+20h]

  if ( !List )
    return 3221225659LL;
  m_Irp = Irp->m_Irp;
  v8 = 0;
  m_Globals = this->m_Globals;
  Type = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryDeviceRelations.Type;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
  {
    ((void (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked);
    m_Irp = Irp->m_Irp;
  }
  Information = (_DWORD *)m_Irp->IoStatus.Information;
  v13 = 0;
  FxTransactionedList::LockForEnum(List, m_Globals);
  NextEntry = 0LL;
  while ( 1 )
  {
    NextEntry = FxRelatedDeviceList::GetNextEntry(List, NextEntry);
    if ( !NextEntry )
      break;
    ++v13;
  }
  if ( v13 )
  {
    if ( Information )
      v13 += *Information;
    if ( v13 )
    {
      v15 = 8LL * (unsigned int)(v13 - 1) + 16;
      goto LABEL_17;
    }
  }
  else if ( !List->m_NeedReportMissing || Information )
  {
    FxTransactionedList::UnlockFromEnum(List, m_Globals);
    return 3221225659LL;
  }
  v15 = 4LL;
LABEL_17:
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v15, m_Globals->Tag);
  if ( Pool2 )
  {
    if ( Information && *Information )
      memmove(Pool2, Information, 8LL * (unsigned int)(*Information - 1) + 16);
    v21 = 0LL;
    while ( 1 )
    {
      v22 = FxRelatedDeviceList::GetNextEntry(List, v21);
      v21 = v22;
      if ( !v22 )
        break;
      m_DeviceObject = v22->m_DeviceObject;
      if ( v22->m_State == RelatedDeviceStateNeedsReportPresent )
        v22->m_State = RelatedDeviceStateReportedPresent;
      *(_QWORD *)&Pool2[2 * *Pool2 + 2] = m_DeviceObject;
      ObfReferenceObject(m_DeviceObject);
      ++*Pool2;
    }
    List->m_Retries = 0;
    v20 = 0;
  }
  else
  {
    if ( Information )
    {
      for ( i = 0LL; (unsigned int)i < *Information; i = (unsigned int)(i + 1) )
        ObfDereferenceObject(*(PVOID *)&Information[2 * i + 2]);
    }
    ++List->m_Retries;
    v8 = -1073741670;
    m_Retries = List->m_Retries;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, Type, 0xC000009A);
    v20 = m_Retries < 3u;
  }
  FxTransactionedList::UnlockFromEnum(List, this->m_Globals);
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( v20 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, Type);
  result = v8;
  Irp->m_Irp->IoStatus.Status = v8;
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)Pool2;
  return result;
}
