/*
 * XREFs of ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C007EAD8
 * Callers:
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C007F92C (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C007E730 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C008131C (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0081358 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C008218C (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 */

__int64 __fastcall FxInterrupt::CreateWakeInterruptMachine(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *v3; // rcx
  void *v4; // rax
  FX_POOL **v5; // rax
  _FX_DRIVER_GLOBALS *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // esi
  int v10; // eax
  FxPkgPnp **_a1; // rcx
  unsigned __int16 v12; // r11
  int _a2; // r9d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __m128i v16; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_DeviceBase = this->m_DeviceBase;
  v16.m128i_i64[0] = 0LL;
  v16.m128i_i64[1] = 64LL;
  v3 = *(_FX_DRIVER_GLOBALS **)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 16LL);
  if ( v3->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v5 = FxPoolAllocator(v3, &v3->FxPoolFrameworks, &v16, 0xF0uLL, v3->Tag, v4);
  if ( v5 )
  {
    FxWakeInterruptMachine::FxWakeInterruptMachine((FxWakeInterruptMachine *)v5, this);
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    v9 = -1073741670;
    WPP_IFR_SF_qd(
      this->m_Globals,
      2u,
      0xCu,
      0xCu,
      (const _GUID *)&WPP_InterruptObject_cpp_Traceguids,
      this->m_DeviceBase,
      -1073741670);
    return v9;
  }
  v10 = FxEventQueue::Initialize((FxEventQueue *)v8, v6);
  _a1 = (FxPkgPnp **)this->m_DeviceBase;
  v9 = v10;
  if ( v10 < 0 )
  {
    v12 = 13;
    _a2 = v10;
LABEL_13:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, v12, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids, _a1, _a2);
    FxWakeInterruptMachine::`scalar deleting destructor'((FxDevicePwrRequirementMachine *)v8);
    return v9;
  }
  v9 = FxThreadedEventQueue::Init(
         (FxThreadedEventQueue *)v8,
         _a1[81],
         FxWakeInterruptMachine::_ProcessEventInner,
         (void *)v8);
  _a2 = v9;
  if ( (v9 & 0x80000000) != 0 )
  {
    _a1 = (FxPkgPnp **)this->m_DeviceBase;
    v12 = 14;
    goto LABEL_13;
  }
  this->m_WakeInterruptMachine = (FxWakeInterruptMachine *)v8;
  KeInitializeEvent((PRKEVENT)(v8 + 160), SynchronizationEvent, 0);
  *(_BYTE *)(v8 + 184) = 1;
  ++*(_DWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 1208LL);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xFu, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids, this->m_DeviceBase);
  return v9;
}
