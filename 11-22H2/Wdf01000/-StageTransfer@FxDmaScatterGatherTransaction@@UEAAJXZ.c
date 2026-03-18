/*
 * XREFs of ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C001E730
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C000C392 (-BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C000CE60 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C000CF2C (-_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1C001E598 (-GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@P.c)
 *     WPP_IFR_SF_qqdid @ 0x1C001EB18 (WPP_IFR_SF_qqdid.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StageTransfer(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *ObjectHandleUnchecked; // rbp
  const void *_a1; // rax
  const _GUID *v5; // rdx
  unsigned __int64 *p_m_CurrentFragmentOffset; // r15
  _MDL **p_m_CurrentFragmentMdl; // rsi
  unsigned int *p_m_CurrentFragmentLength; // r14
  unsigned __int64 m_Remaining; // rax
  bool v10; // zf
  unsigned int v11; // r8d
  __int64 flags; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  _MDL *v16; // rdx
  int ScatterGatherList; // eax
  unsigned int v18; // esi
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+48h] [rbp-20h]
  unsigned int mapRegistersRequired; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  mapRegistersRequired = -1;
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xEu, v5, _a1);
  }
  p_m_CurrentFragmentOffset = &this->m_CurrentFragmentOffset;
  p_m_CurrentFragmentMdl = &this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentLength = (unsigned int *)&this->m_CurrentFragmentLength;
  FxDmaTransactionBase::_ComputeNextTransferAddress(
    this->m_CurrentFragmentMdl,
    this->m_CurrentFragmentOffset,
    this->m_CurrentFragmentLength,
    &this->m_CurrentFragmentMdl,
    &this->m_CurrentFragmentOffset);
  m_Remaining = this->m_Remaining;
  if ( m_Remaining >= this->m_MaxFragmentLength )
    m_Remaining = this->m_MaxFragmentLength;
  v10 = this->m_RequireSingleTransfer == 0;
  *(_QWORD *)p_m_CurrentFragmentLength = m_Remaining;
  if ( v10
    && (FxDmaTransactionBase::_CalculateRequiredMapRegisters(
          *p_m_CurrentFragmentMdl,
          *p_m_CurrentFragmentOffset,
          *p_m_CurrentFragmentLength,
          this->m_AdapterInfo->NumberOfMapRegisters,
          (unsigned int *)&this->m_CurrentFragmentLength,
          &mapRegistersRequired),
        flags = this->m_DmaEnabler->m_MaxSGElements,
        mapRegistersRequired > (unsigned int)flags) )
  {
    WPP_IFR_SF_qqdid(
      m_Globals,
      mapRegistersRequired,
      v11,
      0xFu,
      traceGuid,
      ObjectHandleUnchecked,
      *p_m_CurrentFragmentMdl,
      mapRegistersRequired,
      flags,
      v20);
    return 3223323146LL;
  }
  else
  {
    v14 = *(_QWORD *)p_m_CurrentFragmentLength;
    this->m_Remaining -= *(_QWORD *)p_m_CurrentFragmentLength;
    v15 = *p_m_CurrentFragmentOffset;
    v16 = *p_m_CurrentFragmentMdl;
    if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 0x20) != 0 )
      ScatterGatherList = FxDmaScatterGatherTransaction::BuildScatterGatherList(
                            this,
                            v16,
                            v15,
                            v14,
                            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))traceGuid,
                            this,
                            this->m_SGListBuffer,
                            this->m_SgListBufferSize);
    else
      ScatterGatherList = FxDmaScatterGatherTransaction::GetScatterGatherList(
                            this,
                            v16,
                            v15,
                            v14,
                            (void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *))traceGuid,
                            this);
    v18 = ScatterGatherList;
    if ( ScatterGatherList >= 0 )
    {
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qd(
            m_Globals,
            5u,
            0xFu,
            0x11u,
            WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
            ObjectHandleUnchecked,
            ScatterGatherList);
      }
    }
    else
    {
      WPP_IFR_SF_qd(
        m_Globals,
        2u,
        0xFu,
        0x10u,
        WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
        ObjectHandleUnchecked,
        ScatterGatherList);
      this->m_Remaining += *(_QWORD *)p_m_CurrentFragmentLength;
    }
    return v18;
  }
}
