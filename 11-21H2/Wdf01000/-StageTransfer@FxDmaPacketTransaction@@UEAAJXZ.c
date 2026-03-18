/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0056570
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002DC98 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0030348 (WPP_IFR_SF_qqq.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C0037DE0 (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     WPP_IFR_SF_dqd @ 0x1C00572AC (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqiDq @ 0x1C00574E8 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqqD @ 0x1C0057850 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_sqqii @ 0x1C0057A94 (WPP_IFR_SF_sqqii.c)
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
  unsigned __int64 m_Remaining; // r10
  unsigned __int64 flags; // rdi
  unsigned __int64 m_MaxFragmentLength; // rcx
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r9
  _MDL *m_CurrentFragmentMdl; // rdx
  unsigned __int64 ByteCount; // rax
  const void *globals; // rdx
  const void *level; // r8
  __int64 id; // r9
  _FX_DRIVER_GLOBALS *v22; // r10
  const char *v23; // rax
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *Alignment; // r14
  FxDmaPacketTransaction_vtbl *v26; // rax
  _FX_DRIVER_GLOBALS *v27; // rsi
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v29; // r9
  unsigned int m_CurrentFragmentLength; // r8d
  const void *v31; // r15
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  const void *v34; // rax
  const void *v35; // rdx
  _FX_DRIVER_GLOBALS *v36; // r10
  WDFDMATRANSACTION__ *v37; // rax
  WDFDEVICE__ *v38; // r8
  unsigned __int8 v39; // r8
  DMA_COMPLETION_STATUS CompletionStatus; // esi
  unsigned __int8 v41; // dl
  const void *v42; // rax
  unsigned __int8 v43; // dl
  _FX_DRIVER_GLOBALS *v44; // r8
  unsigned __int8 v45; // r8
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
    this->m_Remaining = m_Remaining - v16;
    if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 332LL) )
    {
      globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v23 = "first";
      if ( flags )
        v23 = "next";
      WPP_IFR_SF_sqqii(
        v22,
        (unsigned __int8)globals,
        (unsigned int)level,
        id,
        traceGuid,
        v23,
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
      v26 = this->__vftable;
      HIDWORD(pFxDriverGlobals) = 0;
      v26->GetTransferCompletionRoutine(this);
      v27 = this->m_Globals;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      m_CurrentFragmentLength = this->m_CurrentFragmentLength;
      v31 = ObjectHandleUnchecked;
      HIDWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
      if ( v27->FxVerifierOn && v27->FxVerboseOn )
        WPP_IFR_SF_qqiDq(
          v27,
          (unsigned __int8)this->m_CurrentFragmentMdl,
          m_CurrentFragmentLength,
          v29,
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
      if ( v27->FxVerifierOn && v27->FxVerboseOn )
        WPP_IFR_SF_dqd(
          v27,
          5u,
          0xFu,
          0xEu,
          WPP_FxDmaTransactionPacket_hpp_Traceguids,
          SHIDWORD(pFxDriverGlobals),
          v31,
          v2);
      if ( v2 >= 0 )
      {
        v32 = this->m_CurrentFragmentLength;
        if ( HIDWORD(pFxDriverGlobals) < v32 )
        {
          v33 = v32 - HIDWORD(pFxDriverGlobals);
          this->m_CurrentFragmentLength = HIDWORD(pFxDriverGlobals);
          this->m_Remaining += v33;
        }
        if ( this->m_DmaAcquiredFunction.Method.ProgramDma )
        {
          if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 332LL) )
          {
            v34 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qqq(
              v36,
              5u,
              0xFu,
              0x1Du,
              WPP_FxDmaTransactionPacket_cpp_Traceguids,
              v35,
              this->m_DmaAcquiredContext,
              v34);
          }
          FxObject::GetObjectHandleUnchecked(this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase);
          v37 = (WDFDMATRANSACTION__ *)FxObject::GetObjectHandleUnchecked(this);
          FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
            &this->m_DmaAcquiredFunction,
            v37,
            v38,
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
      v41 = (unsigned __int8)pFxDriverGlobals;
      this->m_TransferState.CompletionStatus = -1;
      this->m_TransferState.RerunCompletion = 0;
      FxNonPagedObject::Unlock(this, v41, v39);
      if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 332LL) )
      {
        v42 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qqqD(
          v44,
          v43,
          (unsigned int)v44,
          0x1Eu,
          WPP_FxDmaTransactionPacket_cpp_Traceguids,
          this[1].m_Globals,
          *(const void **)&this[1].m_ObjectFlags,
          v42,
          CompletionStatus);
      }
      this->CallEvtDmaCompleted(this, CompletionStatus);
      FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v45);
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
    FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v39);
  }
  this->Release(this, sgListBuffer, 0, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 332LL) )
    WPP_IFR_SF_qL(
      *(_FX_DRIVER_GLOBALS **)sgListBuffer,
      5u,
      0xFu,
      0x1Fu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      v7,
      v2);
  return (unsigned int)v2;
}
