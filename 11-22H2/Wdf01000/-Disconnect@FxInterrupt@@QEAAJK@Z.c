/*
 * XREFs of ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C007ED80
 * Callers:
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0073524 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1C007F058 (-ForceDisconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00183B0 (WPP_IFR_SF_qqqd.c)
 *     ?InterruptDisable@FxInterrupt@@AEAAJXZ @ 0x1C007F58C (-InterruptDisable@FxInterrupt@@AEAAJXZ.c)
 *     ?IsActiveForWake@FxInterrupt@@QEAAEXZ @ 0x1C007F77C (-IsActiveForWake@FxInterrupt@@QEAAEXZ.c)
 *     ?IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ @ 0x1C007F79C (-IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ.c)
 *     ?DisconnectInternal@FxInterrupt@@QEAAXXZ @ 0x1C0080038 (-DisconnectInternal@FxInterrupt@@QEAAXXZ.c)
 *     ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C00801CC (-ReportInactive@FxInterrupt@@QEAAXE@Z.c)
 */

__int64 __fastcall FxInterrupt::Disconnect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v3; // ebp
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax
  int v8; // eax
  int _a4; // esi
  const void *_a1; // rax
  const void *_a2; // r10
  struct _KINTERRUPT *m_Interrupt; // rcx
  FxSystemWorkItem *m_SystemWorkItem; // rsi
  FxInterrupt *v14; // rcx

  m_Globals = this->m_Globals;
  v3 = 0;
  if ( !this->m_InterruptInfo.Vector )
    return 0LL;
  m_WakeInterruptMachine = this->m_WakeInterruptMachine;
  if ( m_WakeInterruptMachine && (NotifyFlags & 0x40) != 0 )
  {
    m_WakeInterruptMachine->m_ActiveForWake = 1;
    return 0LL;
  }
  if ( (NotifyFlags & 0x20) != 0 && !FxInterrupt::IsSoftDisconnectCapable(this) && !FxInterrupt::IsActiveForWake(this) )
    return 0LL;
  if ( !this->m_Connected )
  {
    if ( !this->m_Interrupt || (NotifyFlags & 4) == 0 )
      return 0LL;
    goto $Disconnect;
  }
  if ( this->m_Enabled )
  {
    if ( (NotifyFlags & 2) == 0 )
    {
      v8 = FxInterrupt::InterruptDisable(this);
      this->m_Enabled = 0;
      _a4 = v8;
      if ( v8 < 0 )
      {
        FxObject::GetObjectHandleUnchecked(this);
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqqd(
          m_Globals,
          2u,
          0xCu,
          0x19u,
          (const _GUID *)&WPP_InterruptObject_cpp_Traceguids,
          _a1,
          _a2,
          (__int64)this->m_Interrupt,
          _a4);
        v3 = _a4;
      }
    }
  }
  if ( this->m_IsEdgeTriggeredNonMsiInterrupt == 1 )
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt )
      KeSynchronizeExecution(m_Interrupt, (PKSYNCHRONIZE_ROUTINE)FxInterrupt::_InterruptMarkDisconnecting, this);
    this->m_InterruptCaptured = 0LL;
  }
  KeFlushQueuedDpcs();
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( FxInterrupt::IsSoftDisconnectCapable(this) && (NotifyFlags & 0x10) != 0 )
  {
    FxInterrupt::ReportInactive(v14, 1u);
  }
  else if ( (NotifyFlags & 1) == 0 )
  {
$Disconnect:
    FxInterrupt::DisconnectInternal(this);
    if ( FxInterrupt::IsActiveForWake(this) )
      this->m_WakeInterruptMachine->m_ActiveForWake = 0;
    this->m_Connected = 0;
    this->m_Active = 0;
  }
  this->m_Disconnecting = 0;
  return v3;
}
