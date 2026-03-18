/*
 * XREFs of ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008CE60
 * Callers:
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C001EB1C (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022D70 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C00291B8 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008CE30 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C008E240 (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 */

__int64 __fastcall FxInterrupt::CreateWakeInterruptMachine(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *v3; // rcx
  void *v4; // rax
  FX_POOL **v5; // rax
  FxEventQueue *v6; // rax
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxEventQueue *v8; // rbx
  int v9; // eax
  FxPkgPnp **_a1; // rcx
  unsigned int v11; // esi
  unsigned __int16 v12; // r11
  unsigned int _a2; // r9d
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
  if ( !v5 || (FxWakeInterruptMachine::FxWakeInterruptMachine((FxWakeInterruptMachine *)v5, this), (v8 = v6) == 0LL) )
  {
    v11 = -1073741670;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0xCu, WPP_InterruptObject_cpp_Traceguids, this->m_DeviceBase, 0xC000009A);
    return v11;
  }
  v9 = FxEventQueue::Initialize(v6, v7);
  _a1 = (FxPkgPnp **)this->m_DeviceBase;
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = 13;
    _a2 = v9;
LABEL_10:
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, v12, WPP_InterruptObject_cpp_Traceguids, _a1, _a2);
    FxWakeInterruptMachine::`scalar deleting destructor'((FxDevicePwrRequirementMachine *)v8);
    return v11;
  }
  v11 = FxThreadedEventQueue::Init((FxThreadedEventQueue *)v8, _a1[81], FxWakeInterruptMachine::_ProcessEventInner, v8);
  _a2 = v11;
  if ( (v11 & 0x80000000) != 0 )
  {
    _a1 = (FxPkgPnp **)this->m_DeviceBase;
    v12 = 14;
    goto LABEL_10;
  }
  this->m_WakeInterruptMachine = (FxWakeInterruptMachine *)v8;
  KeInitializeEvent(
    (PRKEVENT)&v8[1].m_StateMachineLock.m_Event.m_Event.Header.WaitListHead.Blink,
    SynchronizationEvent,
    0);
  LOBYTE(v8[1].m_EventWorker) = 1;
  ++*(_DWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 1208LL);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xFu, WPP_InterruptObject_cpp_Traceguids, this->m_DeviceBase);
  return v11;
}
