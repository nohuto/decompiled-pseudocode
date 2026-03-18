/*
 * XREFs of ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006C04C
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C006C7E0 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006A08C (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z @ 0x1C006A3C8 (-PnpEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_PNP_STATE@@@Z.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006B6BC (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C006C978 (WPP_IFR_SF_qqLLL.c)
 */

void __fastcall FxPkgPnp::PnpProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // r15
  FxPnpMachine *p_m_PnpMachine; // r12
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 m_QueueHead; // rdx
  KIRQL v9; // r9
  FxPnpEvent _a4; // esi
  const PNP_STATE_TABLE *v11; // r14
  __int64 v12; // rdx
  const PNP_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPnpEvent PnpEvent; // eax
  __int64 v15; // r8
  const void *_a1; // rax
  __int64 v17; // r8
  _FX_DRIVER_GLOBALS *v18; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v20; // rdx
  unsigned int globals; // r8d
  _IRP *m_PendingPnPIrp; // rax

  p_m_Lock = &this->m_PnpMachine.m_QueueLock.m_Lock;
  p_m_PnpMachine = &this->m_PnpMachine;
  while ( 1 )
  {
    v6 = ((__int64)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable & 0xFFFF7FFF) - 256;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = p_m_PnpMachine->m_QueueHead;
    v9 = v7;
    if ( (_BYTE)m_QueueHead == p_m_PnpMachine->m_QueueTail )
      break;
    _a4 = this->m_PnpMachine.m_Queue[m_QueueHead];
    v11 = &FxPkgPnp::m_WdfPnpStates[v6];
    if ( (_a4 & 0x3C3000) == 0 && (*(_DWORD *)&v11->StateInfo.Bits & 1) == 0 )
      goto LABEL_24;
    p_m_PnpMachine->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)p_m_PnpMachine->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPnpStates[v6].FirstTargetState.PnpEvent == _a4 )
    {
      LODWORD(v12) = FxPkgPnp::m_WdfPnpStates[v6].FirstTargetState.TargetState;
      goto LABEL_15;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPnpStates[v6].OtherTargetStates;
    if ( !OtherTargetStates
      || (PnpEvent = OtherTargetStates->PnpEvent, LODWORD(v15) = 0, OtherTargetStates->PnpEvent == PnpEventNull) )
    {
LABEL_12:
      if ( this->m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqdd(
          v18,
          5u,
          0xCu,
          0xCu,
          WPP_PnpStateMachine_cpp_Traceguids,
          _a1,
          *(const void **)(v17 + 144),
          *(_DWORD *)(v17 + 200),
          _a4);
      }
      if ( ((*(_DWORD *)&v11->StateInfo.Bits >> 1) & _a4) == 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          globals,
          0xDu,
          WPP_PnpStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v20 + 144),
          *(_DWORD *)(v20 + 200),
          _a4,
          globals);
      }
      if ( (_a4 & 0xDF4) != 0 )
        FxPkgPnp::PnpFinishProcessingIrp(this, v12);
    }
    else
    {
      v12 = 0LL;
      while ( PnpEvent != _a4 )
      {
        v15 = (unsigned int)(v15 + 1);
        v12 = (unsigned int)v15;
        PnpEvent = OtherTargetStates[v15].PnpEvent;
        if ( PnpEvent == PnpEventNull )
          goto LABEL_12;
      }
      LODWORD(v12) = OtherTargetStates[v12].TargetState;
LABEL_15:
      if ( (_DWORD)v12 == 314 )
        goto LABEL_12;
      FxPkgPnp::PnpEnterNewState(this, (_WDF_DEVICE_PNP_STATE)v12);
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
LABEL_24:
  KeReleaseSpinLock(p_m_Lock, v9);
}
