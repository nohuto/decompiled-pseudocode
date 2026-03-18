/*
 * XREFs of ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007D880
 * Callers:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C007E190 (-_PowerPolicyProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006A08C (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C006C978 (WPP_IFR_SF_qqLLL.c)
 *     ?AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ @ 0x1C007A2DC (-AcknowledgeS0@FxPowerPolicyMachine@@QEAAXXZ.c)
 *     ?GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C007A5AC (-GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEV.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C007D228 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C007D384 (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C00837E0 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0086CA0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxPkgPnp::PowerPolicyProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // r15
  FxPowerPolicyMachine *p_m_PowerPolicyMachine; // r14
  signed int _a3; // esi
  __int64 v6; // rbp
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r9
  FxPowerPolicyEvent _a4; // edi
  const POWER_POLICY_STATE_TABLE *v11; // r12
  unsigned int v12; // ecx
  __int64 TargetState; // rdx
  const POWER_POLICY_EVENT_TARGET_STATE *OtherTargetStates; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  const void *_a1; // rax
  __int64 v19; // rdx
  _FX_DRIVER_GLOBALS *v20; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v22; // rdx
  unsigned int v23; // r8d
  const char *v24; // rcx
  unsigned __int64 v25; // rcx
  KIRQL v26; // dl
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *NotPowerPolicyOwnerTableEntry; // rdi
  KIRQL v28; // al
  __int64 m_QueueHead; // rdx
  FxPowerPolicyEvent v30; // esi
  unsigned int m_SingularEventsPresent; // ecx
  unsigned int TargetStatesCount; // ecx
  __int64 v33; // rax
  const POWER_POLICY_EVENT_TARGET_STATE *TargetStates; // rdx

  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  p_m_PowerPolicyMachine = &this->m_PowerPolicyMachine;
  if ( !this->m_PowerPolicyMachine.m_Owner )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_49:
        NotPowerPolicyOwnerTableEntry = FxPkgPnp::GetNotPowerPolicyOwnerTableEntry((_WDF_DEVICE_POWER_POLICY_STATE)*(_DWORD *)&this->m_DeviceBase[1].m_Type);
        v28 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
        m_QueueHead = p_m_PowerPolicyMachine->m_QueueHead;
        if ( (_BYTE)m_QueueHead == p_m_PowerPolicyMachine->m_QueueTail
          || (v30 = this->m_PowerPolicyMachine.m_Queue[m_QueueHead], (v30 & 0x60030) == 0)
          && !NotPowerPolicyOwnerTableEntry->QueueOpen )
        {
          v26 = v28;
          goto LABEL_62;
        }
        m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
        if ( (m_SingularEventsPresent & v30) != 0 )
          this->m_PowerPolicyMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~v30;
        p_m_PowerPolicyMachine->m_QueueHead = ((int)m_QueueHead + 1)
                                            % (unsigned int)p_m_PowerPolicyMachine->m_QueueDepth;
        KeReleaseSpinLock(p_m_Lock, v28);
        if ( NotPowerPolicyOwnerTableEntry )
        {
          TargetStatesCount = NotPowerPolicyOwnerTableEntry->TargetStatesCount;
          if ( (_BYTE)TargetStatesCount )
            break;
        }
      }
      v33 = 0LL;
      TargetStates = NotPowerPolicyOwnerTableEntry->TargetStates;
      while ( v30 != TargetStates[v33].PowerPolicyEvent )
      {
        v33 = (unsigned int)(v33 + 1);
        if ( (unsigned int)v33 >= TargetStatesCount )
          goto LABEL_49;
      }
      FxPkgPnp::NotPowerPolicyOwnerEnterNewState(this, TargetStates[v33].TargetState);
    }
  }
  while ( 1 )
  {
    _a3 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    v6 = (_a3 & 0xFFFF7FFF) - 1280;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v8 = p_m_PowerPolicyMachine->m_QueueHead;
    v9 = v7;
    if ( (_BYTE)v8 == p_m_PowerPolicyMachine->m_QueueTail )
      break;
    _a4 = this->m_PowerPolicyMachine.m_Queue[v8];
    v11 = &FxPkgPnp::m_WdfPowerPolicyStates[v6];
    if ( (_a4 & 0x3A3F07F0) == 0 && (*(_DWORD *)&v11->StateInfo.Bits & 1) == 0 )
      goto LABEL_48;
    v12 = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (v12 & _a4) != 0 )
      this->m_PowerPolicyMachine.m_SingularEventsPresent = v12 & ~_a4;
    p_m_PowerPolicyMachine->m_QueueHead = ((int)v8 + 1) % (unsigned int)p_m_PowerPolicyMachine->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPowerPolicyStates[v6].FirstTargetState.PowerPolicyEvent == _a4 )
    {
      TargetState = (unsigned int)FxPkgPnp::m_WdfPowerPolicyStates[v6].FirstTargetState.TargetState;
    }
    else
    {
      OtherTargetStates = FxPkgPnp::m_WdfPowerPolicyStates[v6].OtherTargetStates;
      if ( !OtherTargetStates )
        goto LABEL_14;
      LODWORD(v15) = 0;
      if ( OtherTargetStates->PowerPolicyEvent == PwrPolNull )
        goto LABEL_14;
      v16 = 0LL;
      v17 = 0LL;
      while ( OtherTargetStates[v17].PowerPolicyEvent != _a4 )
      {
        v15 = (unsigned int)(v15 + 1);
        v16 = (unsigned int)v15;
        v17 = v15;
        if ( OtherTargetStates[v15].PowerPolicyEvent == PwrPolNull )
          goto LABEL_14;
      }
      TargetState = (unsigned int)OtherTargetStates[v16].TargetState;
    }
    if ( (_DWORD)TargetState == 1472 )
    {
LABEL_14:
      if ( this->m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqdd(
          v20,
          5u,
          0xCu,
          0x13u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          _a1,
          *(const void **)(v19 + 144),
          _a3,
          _a4);
      }
      if ( ((*(_DWORD *)&v11->StateInfo.Bits >> 1) & _a4) == 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          2u,
          v23,
          0x14u,
          WPP_PowerPolicyStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v22 + 144),
          _a3,
          _a4,
          v23);
        if ( _a4 >= PwrPolDeviceDirectedPowerDown || (_a3 & 0xFFFF7FFF) >= 0x599 )
          MicrosoftTelemetryAssertTriggeredArgsKM(v24, _a3, _a4);
      }
      switch ( _a4 )
      {
        case PwrPolSx:
          FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(this);
          break;
        case PwrPolS0:
          if ( _a3 > 1379 )
          {
            if ( _a3 == 1381 || _a3 == 1390 || _a3 == 1412 || (v25 = (unsigned int)(_a3 - 1417), _a3 == 1417) )
            {
LABEL_39:
              FxPowerPolicyMachine::AcknowledgeS0(p_m_PowerPolicyMachine);
            }
            else if ( _a3 != 1422 )
            {
              goto LABEL_45;
            }
          }
          else
          {
            if ( _a3 == 1379 )
              goto LABEL_39;
            if ( _a3 != 1280 )
            {
              if ( _a3 == 1285 )
                goto LABEL_39;
              if ( _a3 == 1288 )
                goto LABEL_39;
              v25 = (unsigned int)(_a3 - 1329);
              if ( _a3 == 1329 || _a3 == 1342 )
                goto LABEL_39;
LABEL_45:
              MicrosoftTelemetryAssertTriggeredArgsKM((const char *)v25, _a3, 8u);
            }
          }
          break;
        case PwrPolWakeSuccess:
        case PwrPolWakeFailed:
          this->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped = 1;
          break;
        case PwrPolUsbSelectiveSuspendCallback:
          KeSetEvent((PRKEVENT)this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
          break;
        case PwrPolUsbSelectiveSuspendCompleted:
          this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 1;
          break;
      }
    }
    else
    {
      FxPkgPnp::PowerPolicyEnterNewState(this, TargetState);
    }
  }
  FxEventQueue::GetFinishedState(p_m_PowerPolicyMachine, Info);
LABEL_48:
  v26 = v9;
LABEL_62:
  KeReleaseSpinLock(p_m_Lock, v26);
}
