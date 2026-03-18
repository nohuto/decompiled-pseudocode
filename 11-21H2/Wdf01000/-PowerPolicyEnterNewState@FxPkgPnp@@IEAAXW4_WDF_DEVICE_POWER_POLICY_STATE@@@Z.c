/*
 * XREFs of ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C001666C
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00161D8 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0011D90 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0013450 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0013E68 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C0085700 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 */

void __fastcall FxPkgPnp::PowerPolicyEnterNewState(FxPkgPnp *this, __int64 NewState)
{
  struct _EX_TIMER *m_KernelExTimer; // rcx
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // ebx
  FxDeviceBase *m_DeviceBase; // rax
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // r14d
  FxDeviceBase *v7; // rdx
  const void *_a1; // rcx
  __int64 m_HistoryIndex; // r8
  const POWER_POLICY_STATE_TABLE *v10; // rsi
  FxDeviceBase *v11; // rcx
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  FxPowerPolicyStateCallback *v13; // r10
  FxDeviceBase *v14; // rcx
  WDFDEVICE__ *v15; // rax
  FxPowerPolicyStateCallback *v16; // r10
  FxDeviceBase *v17; // rcx
  WDFDEVICE__ *v18; // rax
  FxPowerPolicyStateCallback *v19; // r10
  FxWatchdog watchdog; // [rsp+50h] [rbp-B0h] BYREF
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA data; // [rsp+100h] [rbp+0h] BYREF

  *(_QWORD *)&data.Type = 0LL;
  data.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
  m_KernelExTimer = 0LL;
  watchdog.m_Timer.m_Timer.m_TimerContext = 0LL;
  _a3 = (int)NewState;
  watchdog.m_Timer.m_Timer.m_TimerCallback = 0LL;
  m_DeviceBase = this->m_DeviceBase;
  watchdog.m_Timer.m_Timer.m_Period = 0;
  watchdog.m_Timer.m_Timer.m_KernelExTimer = 0LL;
  watchdog.m_PkgPnp = this;
  _a4 = *(_DWORD *)&m_DeviceBase[1].m_Type;
  if ( (_DWORD)NewState != 1472 )
  {
    do
    {
      v7 = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v7->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0x15u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        v7->m_DeviceObject.m_DeviceObject,
        _a3,
        _a4);
      if ( this->m_PowerPolicyStateCallbacks )
      {
        v11 = this->m_DeviceBase;
        data.Type = StateNotificationLeaveState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v11);
        FxPowerPolicyStateCallback::Invoke(v13, _a4, StateNotificationLeaveState, ObjectHandleUnchecked, &data);
      }
      m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
      NewState = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
      this->m_PowerPolicyMachine.m_HistoryIndex = NewState;
      this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
      if ( this->m_PowerPolicyStateCallbacks )
      {
        v14 = this->m_DeviceBase;
        data.Type = StateNotificationEnterState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
        v15 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v14);
        FxPowerPolicyStateCallback::Invoke(v16, _a3, StateNotificationEnterState, v15, &data);
      }
      _a4 = _a3;
      *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
      v10 = &FxPkgPnp::m_WdfPowerPolicyStates[(_a3 & 0xFFFF7FFF) - 1280];
      if ( v10->StateFunc )
      {
        if ( (_a3 & 0x8000) != 0 )
        {
          MxTimer::Initialize(&watchdog.m_Timer, &watchdog, FxWatchdog::_WatchdogDpc, 0);
          watchdog.m_CallingThread = KeGetCurrentThread();
          MxTimer::Start(
            &watchdog.m_Timer,
            (_LARGE_INTEGER)((-(__int64)(watchdog.m_PkgPnp->m_SharedPower.m_ExtendWatchDogTimer != 0) & 0xFFFFFF383B36FC00uLL)
                           - 6000000000LL),
            0);
        }
        _a3 = v10->StateFunc(this);
      }
      else
      {
        _a3 = WdfDevStatePwrPolNull;
      }
      if ( this->m_PowerPolicyStateCallbacks )
      {
        v17 = this->m_DeviceBase;
        data.Type = StateNotificationPostProcessState;
        data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
        v18 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v17);
        FxPowerPolicyStateCallback::Invoke(v19, _a4, StateNotificationPostProcessState, v18, &data);
      }
    }
    while ( _a3 != WdfDevStatePwrPolNull );
    m_KernelExTimer = watchdog.m_Timer.m_Timer.m_KernelExTimer;
  }
  if ( watchdog.m_Timer.m_Timer.m_IsExtTimer )
  {
    if ( m_KernelExTimer )
    {
      LOBYTE(NewState) = 1;
      ExDeleteTimer(m_KernelExTimer, NewState, 0LL, 0LL);
    }
  }
}
