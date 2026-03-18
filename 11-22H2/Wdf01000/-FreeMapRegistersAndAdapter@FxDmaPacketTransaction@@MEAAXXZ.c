/*
 * XREFs of ?FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ @ 0x1C001C680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_dq @ 0x1C0018070 (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_dqq @ 0x1C001DC2C (WPP_IFR_SF_dqq.c)
 */

void __fastcall FxDmaPacketTransaction::FreeMapRegistersAndAdapter(FxDmaPacketTransaction *this)
{
  void *id; // rdi
  _FX_DRIVER_GLOBALS *v3; // r10
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *v5; // r10
  KIRQL v6; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  KIRQL v8; // si
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v10; // r8
  unsigned __int16 v11; // r9
  __int64 m_MapRegistersReserved; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  id = this->m_MapRegisterBase;
  if ( id )
  {
    v6 = KfRaiseIrql(2u);
    m_Globals = this->m_Globals;
    v8 = v6;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_dqq(
        v10,
        this->m_MapRegistersNeeded,
        (unsigned int)v10,
        v11,
        traceGuid,
        this->m_MapRegistersNeeded,
        ObjectHandleUnchecked,
        id);
    }
    m_MapRegistersReserved = this->m_MapRegistersReserved;
    if ( !(_DWORD)m_MapRegistersReserved )
      m_MapRegistersReserved = this->m_MapRegistersNeeded;
    this->m_AdapterInfo->AdapterObject->DmaOperations->FreeMapRegisters(
      this->m_AdapterInfo->AdapterObject,
      id,
      m_MapRegistersReserved);
    KeLowerIrql(v8);
  }
  else
  {
    v3 = this->m_Globals;
    if ( v3->FxVerifierOn )
    {
      if ( v3->FxVerboseOn )
      {
        _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_dq(v5, 5u, 0xFu, 0x11u, WPP_FxDmaTransactionPacket_hpp_Traceguids, this->m_MapRegistersNeeded, _a2);
      }
    }
  }
}
