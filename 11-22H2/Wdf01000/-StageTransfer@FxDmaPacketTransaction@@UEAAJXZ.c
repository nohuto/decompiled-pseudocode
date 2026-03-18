/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C001CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C000C350 (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_dqd @ 0x1C001DADC (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqiDq @ 0x1C001DD18 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqqD @ 0x1C001E080 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_sqqii @ 0x1C001E2C4 (WPP_IFR_SF_sqqii.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StageTransfer(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int v2; // edi
  const void *_a1; // rax
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *v6; // r10
  const void *v7; // r13
  unsigned __int8 v8; // r8
  _FX_DRIVER_GLOBALS *v9; // rcx
  char v10; // si
  unsigned int m_MapRegistersReserved; // r8d
  unsigned __int64 m_Remaining; // r11
  unsigned __int64 flags; // rdi
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r9
  _MDL *m_CurrentFragmentMdl; // rcx
  unsigned __int64 ByteCount; // rax
  __int64 v19; // r10
  const void *globals; // rdx
  const void *level; // r8
  __int64 id; // r9
  _FX_DRIVER_GLOBALS *v23; // r10
  const char *v24; // rax
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *Alignment; // r14
  FxDmaPacketTransaction_vtbl *v27; // rax
  _FX_DRIVER_GLOBALS *v28; // rsi
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v30; // r9
  unsigned int m_CurrentFragmentLength; // r8d
  const void *v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  const void *v35; // rax
  const void *v36; // rdx
  _FX_DRIVER_GLOBALS *v37; // r10
  WDFDMATRANSACTION__ *v38; // rax
  WDFDEVICE__ *v39; // r8
  unsigned __int8 v40; // r8
  DMA_COMPLETION_STATUS CompletionStatus; // esi
  unsigned __int8 v42; // dl
  const void *v43; // rax
  unsigned __int8 v44; // dl
  _FX_DRIVER_GLOBALS *v45; // r8
  unsigned __int8 v46; // r8
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 sgListBuffer[40]; // [rsp+70h] [rbp-11h] BYREF

  m_Globals = this->m_Globals;
  LOBYTE(pFxDriverGlobals) = 0;
  v2 = 0;
  *(_QWORD *)sgListBuffer = m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v7 = _a1;
  if ( v6->FxVerifierOn && v6->FxVerboseOn )
    WPP_IFR_SF_q(v6, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v5);
  if ( this->m_TransferState.CurrentStagingThread )
  {
    v9 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
    v10 = 0;
    this->m_TransferState.RerunStaging = 1;
    if ( v9->FxVerifierOn && v9->FxVerboseOn )
      WPP_IFR_SF_q(v9, 5u, 0xFu, 0x1Bu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v7);
  }
  else
  {
    v10 = 1;
    this->m_TransferState.CurrentStagingThread = KeGetCurrentThread();
  }
  FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v8);
  FxObject::AddRef(this, sgListBuffer, 0, 0LL);
  while ( v10 )
  {
    m_Remaining = this->m_Remaining;
    flags = this->m_Transferred;
    m_MaxFragmentLength = m_Remaining;
    if ( m_Remaining >= this->m_MaxFragmentLength )
      m_MaxFragmentLength = this->m_MaxFragmentLength;
    v15 = flags + this->m_StartOffset;
    v16 = m_MaxFragmentLength;
    this->m_CurrentFragmentLength = m_MaxFragmentLength;
    this->m_CurrentFragmentOffset = v15;
    if ( !this->m_RequireSingleTransfer )
    {
      m_MapRegistersReserved = this->m_MapRegistersReserved;
      if ( m_MapRegistersReserved )
      {
        if ( this->m_MapRegistersNeeded > m_MapRegistersReserved )
        {
          m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
          while ( m_CurrentFragmentMdl )
          {
            ByteCount = m_CurrentFragmentMdl->ByteCount;
            if ( ByteCount >= v15 )
              break;
            m_CurrentFragmentMdl = m_CurrentFragmentMdl->Next;
            v15 -= ByteCount;
          }
          m_MapRegistersReserved <<= 12;
          v16 = m_MapRegistersReserved
              - 4096
              - (unsigned __int64)(((_WORD)v15 + (unsigned __int16)m_CurrentFragmentMdl->ByteOffset) & 0xFFF)
              + 4096;
          if ( m_MaxFragmentLength < v16 )
            v16 = m_MaxFragmentLength;
          this->m_CurrentFragmentLength = v16;
        }
      }
    }
    v19 = *(_QWORD *)sgListBuffer;
    this->m_Remaining = m_Remaining - v16;
    if ( *(_BYTE *)(v19 + 324) && *(_BYTE *)(v19 + 332) )
    {
      globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v24 = "first";
      if ( flags )
        v24 = "next";
      WPP_IFR_SF_sqqii(
        v23,
        (unsigned __int8)globals,
        (unsigned int)level,
        id,
        traceGuid,
        v24,
        globals,
        level,
        flags,
        id);
    }
    if ( this->m_IsCancelled == 1 )
    {
      v2 = -1073741536;
    }
    else if ( this->PreMapTransfer(this) )
    {
      m_DmaEnabler = this->m_DmaEnabler;
      if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
        Alignment = &sgListBuffer[8];
      else
        Alignment = (unsigned __int8 *)m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment;
      v27 = this->__vftable;
      HIDWORD(pFxDriverGlobals) = 0;
      v27->GetTransferCompletionRoutine(this);
      v28 = this->m_Globals;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      m_CurrentFragmentLength = this->m_CurrentFragmentLength;
      v32 = ObjectHandleUnchecked;
      HIDWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
      if ( v28->FxVerifierOn && v28->FxVerboseOn )
        WPP_IFR_SF_qqiDq(
          v28,
          (unsigned __int8)this->m_CurrentFragmentMdl,
          m_CurrentFragmentLength,
          v30,
          traceGuid,
          ObjectHandleUnchecked,
          this->m_CurrentFragmentMdl,
          this->m_CurrentFragmentOffset,
          m_CurrentFragmentLength,
          this->m_MapRegisterBase);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      {
        LODWORD(traceGuid) = this->m_DeviceAddressOffset;
        v2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransferEx)(
               this->m_AdapterInfo->AdapterObject,
               this->m_CurrentFragmentMdl,
               this->m_MapRegisterBase,
               this->m_CurrentFragmentOffset);
      }
      else
      {
        *(_DWORD *)Alignment = 1;
        *((_QWORD *)Alignment + 1) = 0LL;
        traceGuid = (const _GUID *)((char *)&pFxDriverGlobals + 4);
        *((_QWORD *)Alignment + 2) = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransfer)(
                                       this->m_AdapterInfo->AdapterObject,
                                       this->m_CurrentFragmentMdl,
                                       this->m_MapRegisterBase,
                                       (char *)this->m_CurrentFragmentMdl->StartVa
                                     + this->m_CurrentFragmentMdl->ByteOffset
                                     + this->m_CurrentFragmentOffset);
        v2 = 0;
        *((_DWORD *)Alignment + 6) = HIDWORD(pFxDriverGlobals);
      }
      if ( v28->FxVerifierOn && v28->FxVerboseOn )
        WPP_IFR_SF_dqd(
          v28,
          5u,
          0xFu,
          0xEu,
          WPP_FxDmaTransactionPacket_hpp_Traceguids,
          SHIDWORD(pFxDriverGlobals),
          v32,
          v2);
      if ( v2 >= 0 )
      {
        v33 = this->m_CurrentFragmentLength;
        if ( HIDWORD(pFxDriverGlobals) < v33 )
        {
          v34 = v33 - HIDWORD(pFxDriverGlobals);
          this->m_CurrentFragmentLength = HIDWORD(pFxDriverGlobals);
          this->m_Remaining += v34;
        }
        if ( this->m_DmaAcquiredFunction.Method.ProgramDma )
        {
          if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 332LL) )
          {
            v35 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qqq(
              v37,
              5u,
              0xFu,
              0x1Du,
              WPP_FxDmaTransactionPacket_cpp_Traceguids,
              v36,
              this->m_DmaAcquiredContext,
              v35);
          }
          FxObject::GetObjectHandleUnchecked(this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase);
          v38 = (WDFDMATRANSACTION__ *)FxObject::GetObjectHandleUnchecked(this);
          FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
            &this->m_DmaAcquiredFunction,
            v38,
            v39,
            this->m_DmaAcquiredContext,
            this->m_DmaDirection,
            (_SCATTER_GATHER_LIST *)Alignment);
        }
      }
    }
    else
    {
      v2 = 0;
    }
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, m_MapRegistersReserved);
    if ( this->m_TransferState.RerunCompletion == 1 )
    {
      CompletionStatus = this->m_TransferState.CompletionStatus;
      v42 = (unsigned __int8)pFxDriverGlobals;
      this->m_TransferState.CompletionStatus = -1;
      this->m_TransferState.RerunCompletion = 0;
      FxNonPagedObject::Unlock(this, v42, v40);
      if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 332LL) )
      {
        v43 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qqqD(
          v45,
          v44,
          (unsigned int)v45,
          0x1Eu,
          WPP_FxDmaTransactionPacket_cpp_Traceguids,
          this[1].m_Globals,
          *(const void **)&this[1].m_ObjectFlags,
          v43,
          CompletionStatus);
      }
      this->CallEvtDmaCompleted(this, CompletionStatus);
      FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v46);
    }
    if ( this->m_TransferState.RerunStaging == 1 )
    {
      v10 = 1;
      this->m_TransferState.RerunStaging = 0;
    }
    else
    {
      this->m_TransferState.CurrentStagingThread = 0LL;
      v10 = 0;
    }
    FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v40);
  }
  this->Release(this, sgListBuffer, 0, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 332LL) )
    WPP_IFR_SF_qd(
      *(_FX_DRIVER_GLOBALS **)sgListBuffer,
      5u,
      0xFu,
      0x1Fu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      v7,
      v2);
  return (unsigned int)v2;
}
