/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C00839D0
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0083C28 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C007E730 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C008131C (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0081358 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C0084678 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v4; // rax
  FX_POOL **v5; // rax
  FxEventQueue *v6; // rax
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxDevicePwrRequirementMachine *v8; // rdi
  int _a3; // ebx
  const void *_a1; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v14; // rdx
  __int64 v15; // r10
  unsigned __int16 v16; // r9
  __m128i v18; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_PkgPnp = this->m_PkgPnp;
  v18.m128i_i64[0] = 0LL;
  v18.m128i_i64[1] = 64LL;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v5 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v18, 0xC8uLL, m_Globals->Tag, v4);
  if ( !v5 )
  {
    v8 = 0LL;
    goto LABEL_12;
  }
  FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine((FxDevicePwrRequirementMachine *)v5, this);
  v8 = (FxDevicePwrRequirementMachine *)v6;
  if ( !v6 )
  {
LABEL_12:
    _a3 = -1073741670;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    v16 = 10;
    goto LABEL_13;
  }
  _a3 = FxEventQueue::Initialize(v6, v7);
  if ( _a3 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qid(
      *(_FX_DRIVER_GLOBALS **)(v12 + 16),
      2u,
      0xCu,
      0xBu,
      WPP_PoxInterface_cpp_Traceguids,
      _a1,
      *(_QWORD *)(v11 + 144),
      _a3);
    goto LABEL_14;
  }
  _a3 = FxThreadedEventQueue::Init(v8, this->m_PkgPnp, FxDevicePwrRequirementMachine::_ProcessEventInner, 0LL);
  if ( _a3 >= 0 )
  {
    this->m_DevicePowerRequirementMachine = v8;
    return 0;
  }
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
  v16 = 12;
LABEL_13:
  WPP_IFR_SF_qid(
    *(_FX_DRIVER_GLOBALS **)(v15 + 16),
    2u,
    0xCu,
    v16,
    WPP_PoxInterface_cpp_Traceguids,
    ObjectHandleUnchecked,
    *(_QWORD *)(v14 + 144),
    _a3);
LABEL_14:
  if ( v8 )
    FxWakeInterruptMachine::`scalar deleting destructor'(v8);
  return (unsigned int)_a3;
}
