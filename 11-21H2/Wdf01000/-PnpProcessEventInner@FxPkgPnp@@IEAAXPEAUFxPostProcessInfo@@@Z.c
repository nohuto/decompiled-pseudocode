/*
 * XREFs of ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C001E4F0
 * Callers:
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C001E1D0 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C001E240 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0016154 (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x1C001E3A4 (-PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C002BFE4 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C0085584 (WPP_IFR_SF_qqLLL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008F414 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxPkgPnp::PnpProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rsi
  FxPnpMachine *p_m_PnpMachine; // r15
  __int64 v5; // rbp
  KIRQL v6; // r14
  __int64 m_QueueHead; // rax
  FxPnpEvent _a4; // edi
  FxPnpEvent *p_Event; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  int v11; // r15d
  unsigned int v12; // r13d
  __int64 v13; // rdx
  const PNP_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPnpEvent PnpEvent; // eax
  __int64 v16; // r8
  const void *_a1; // rax
  __int64 v18; // r8
  _FX_DRIVER_GLOBALS *v19; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v21; // rdx
  unsigned int globals; // r8d
  _IRP *m_PendingPnPIrp; // rax

  p_m_Lock = &this->m_PnpMachine.m_QueueLock.m_Lock;
  p_m_PnpMachine = &this->m_PnpMachine;
  while ( 1 )
  {
    v5 = ((__int64)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable & 0xFFFF7FFF) - 256;
    v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = p_m_PnpMachine->m_QueueHead;
    if ( (_BYTE)m_QueueHead == p_m_PnpMachine->m_QueueTail )
      break;
    _a4 = this->m_PnpMachine.m_Queue[m_QueueHead];
    if ( (_a4 & 0x3C3000) == 0 && (*(_DWORD *)&FxPkgPnp::m_WdfPnpStates[v5].StateInfo.Bits & 1) == 0 )
      goto LABEL_15;
    p_Event = &transitions[0].Event;
    m_Globals = this->m_Globals;
    v11 = 0;
    v12 = (unsigned int)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
    do
    {
      if ( *((_DWORD *)p_Event - 1) == v12 && *p_Event == _a4 )
        MicrosoftTelemetryAssertTriggeredArgsKM(m_Globals->Public.DriverName, v12, _a4);
      ++v11;
      p_Event += 2;
    }
    while ( !v11 );
    p_m_PnpMachine = &this->m_PnpMachine;
    p_m_Lock = &this->m_PnpMachine.m_QueueLock.m_Lock;
    this->m_PnpMachine.m_QueueHead = ((unsigned int)this->m_PnpMachine.m_QueueHead + 1)
                                   % this->m_PnpMachine.m_QueueDepth;
    KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v6);
    if ( FxPkgPnp::m_WdfPnpStates[v5].FirstTargetState.PnpEvent == _a4 )
    {
      LODWORD(v13) = FxPkgPnp::m_WdfPnpStates[v5].FirstTargetState.TargetState;
      goto LABEL_10;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPnpStates[v5].OtherTargetStates;
    if ( !OtherTargetStates
      || (PnpEvent = OtherTargetStates->PnpEvent, LODWORD(v16) = 0, OtherTargetStates->PnpEvent == PnpEventNull) )
    {
LABEL_23:
      if ( this->m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLL(
          v19,
          5u,
          0xCu,
          0xCu,
          WPP_PnpStateMachine_cpp_Traceguids,
          _a1,
          *(const void **)(v18 + 144),
          *(_DWORD *)(v18 + 200),
          _a4);
      }
      if ( ((*(_DWORD *)&FxPkgPnp::m_WdfPnpStates[v5].StateInfo.Bits >> 1) & _a4) == 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PnpStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v21 + 144),
          *(_DWORD *)(v21 + 200),
          _a4,
          globals);
      }
      if ( (_a4 & 0xDF4) != 0 )
        FxPkgPnp::PnpFinishProcessingIrp(this, v13);
    }
    else
    {
      v13 = 0LL;
      while ( PnpEvent != _a4 )
      {
        v16 = (unsigned int)(v16 + 1);
        v13 = (unsigned int)v16;
        PnpEvent = OtherTargetStates[v16].PnpEvent;
        if ( PnpEvent == PnpEventNull )
          goto LABEL_23;
      }
      LODWORD(v13) = OtherTargetStates[v13].TargetState;
LABEL_10:
      if ( (_DWORD)v13 == 314 )
        goto LABEL_23;
      FxPkgPnp::PnpEnterNewState(this, (_WDF_DEVICE_PNP_STATE)v13);
    }
  }
  FxEventQueue::GetFinishedState(p_m_PnpMachine, Info);
  if ( this->m_PnpMachine.m_FireAndForget )
  {
    m_PendingPnPIrp = this->m_PendingPnPIrp;
    this->m_PendingPnPIrp = 0LL;
    this->m_PnpMachine.m_FireAndForget = 0;
    Info->m_FireAndForgetIrp = m_PendingPnPIrp;
  }
  Info->m_SetRemovedEvent = this->m_SetDeviceRemoveProcessed;
  this->m_SetDeviceRemoveProcessed = 0;
LABEL_15:
  KeReleaseSpinLock(p_m_Lock, v6);
}
