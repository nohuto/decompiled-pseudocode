/*
 * XREFs of ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0021924
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00217C0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C001F048 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021B30 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C003420C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpMatchResources(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v3; // r12d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rsi
  int _a1; // edi
  _LIST_ENTRY *p_m_InterruptListHead; // r14
  _LIST_ENTRY *i; // rax
  FxCmResList *m_Resources; // rax
  _LIST_ENTRY *v10; // rsi
  _LIST_ENTRY **p_Blink; // r15
  _LIST_ENTRY **v12; // rbp
  FxDevice *m_Device; // rdx
  _FX_DRIVER_GLOBALS *v14; // rcx
  _LIST_ENTRY *v16; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v17; // r13
  _LIST_ENTRY *v18; // rcx
  const void *v19; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v21; // r9
  unsigned int Blink_high; // [rsp+80h] [rbp+8h]
  _LIST_ENTRY *v23; // [rsp+88h] [rbp+10h]
  FxCollectionInternal *v24; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  v3 = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x1Du, WPP_PnpStateMachine_cpp_Traceguids);
  this->m_PnpState.Value = this->m_PnpState.Value & 0xFFFFF3CF | 0x820;
  CurrentStackLocation = this->m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  _a1 = FxCmResList::BuildFromWdmList(
          this->m_ResourcesRaw,
          CurrentStackLocation->Parameters.StartDevice.AllocatedResources,
          0);
  if ( _a1 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v21 = 30;
LABEL_26:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, v21, WPP_PnpStateMachine_cpp_Traceguids, ObjectHandleUnchecked, _a1);
    goto $Done_14;
  }
  _a1 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 0);
  if ( _a1 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v21 = 31;
    goto LABEL_26;
  }
  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
  {
    i[-5].Blink = 0LL;
    LOWORD(i[-2].Flink) = 0;
    BYTE4(i[-4].Blink) = 0;
    BYTE1(i[-3].Blink) = 0;
    LODWORD(i[-3].Flink) = 0;
    LODWORD(i[-4].Blink) = 0;
    BYTE1(i[-19].Blink) = 0;
  }
  m_Resources = this->m_Resources;
  v10 = &this->m_InterruptListHead;
  p_Blink = &m_Resources->m_ListHead.Flink[-1].Blink;
  v24 = &m_Resources->FxCollectionInternal;
  v12 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)&m_Resources->FxCollectionInternal )
    goto LABEL_8;
  while ( 1 )
  {
    v16 = *v12;
    v17 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*v12)[6].Blink;
    if ( v17->Type == 2 )
      break;
LABEL_13:
    p_Blink = &p_Blink[1][-1].Blink;
    v12 = &v12[1][-1].Blink;
    if ( p_Blink == (_LIST_ENTRY **)v24 )
      goto LABEL_8;
  }
  v10 = v10->Flink;
  if ( v10 != p_m_InterruptListHead )
  {
    v18 = *p_Blink;
    v23 = *p_Blink;
    Blink_high = HIWORD(v16[6].Blink);
    if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && HIWORD(v16[6].Blink) > 1u )
    {
      do
      {
        if ( v10 == p_m_InterruptListHead )
          break;
        FxInterrupt::AssignResources(
          (FxInterrupt *)&v10[-28].Blink,
          v17,
          (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v18[6].Blink);
        v10 = v10->Flink;
        ++v3;
        v18 = v23;
      }
      while ( v3 < Blink_high );
      v3 = 0;
    }
    else
    {
      FxInterrupt::AssignResources(
        (FxInterrupt *)&v10[-28].Blink,
        v17,
        (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v18[6].Blink);
    }
    goto LABEL_13;
  }
  v19 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x20u, WPP_PnpStateMachine_cpp_Traceguids, v19);
LABEL_8:
  m_Device = this->m_Device;
  if ( m_Device->m_Filter )
  {
    if ( (m_Device->m_AttachedDevice.FxDeviceBase::m_DeviceObject->Characteristics & 1) != 0 )
    {
      m_Device->m_DeviceObject.m_DeviceObject->Characteristics |= 1u;
      m_Device = this->m_Device;
    }
    FxDevice::SetFilterIoType(m_Device);
  }
$Done_14:
  v14 = this->m_Globals;
  if ( v14->FxVerboseOn )
    WPP_IFR_SF_d(v14, 5u, 0xCu, 0x21u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
