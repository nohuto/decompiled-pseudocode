/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01129BC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x1C011398C (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zqq @ 0x1C0020780 (WPP_RECORDER_SF_Zqq.c)
 *     WPP_RECORDER_SF_ZqD @ 0x1C0020D68 (WPP_RECORDER_SF_ZqD.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002266C (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C0025564 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C00702D8 (WPP_RECORDER_SF_LZq.c)
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0111ED4 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0113754 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142A8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115920 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0137AE8 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  unsigned __int64 v3; // rdi
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r14
  __int64 m_numElements; // rax
  struct _NDIS_OPEN_BLOCK *v9; // r14
  KPushLock *p_m_lock; // r14
  __int64 v11; // r8
  int v12; // r15d
  int v13; // r8d
  int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes(a1, a3);
  if ( RunningDriver->MajorNdisVersion >= 6u )
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    v15 = m_numElements;
    while ( v3 != m_numElements )
    {
      if ( v3 >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(5u);
      v9 = (struct _NDIS_OPEN_BLOCK *)a2->BindState.m_bindContext._p[v3];
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          0x1Cu,
          0x14u,
          (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
          &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          (char)a2->BindState.Miniport,
          v9);
      ndisRestartProtocolInner(v9, a3);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          0x1Cu,
          0x15u,
          (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
          &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          (char)a2->BindState.Miniport,
          v9);
      m_numElements = v15;
      ++v3;
    }
    p_m_lock = &a1->BindEngine.m_lock;
LABEL_14:
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
    a2->BindState.m_actualPauseState = DatapathRunning;
    goto LABEL_15;
  }
  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x1Cu,
      0x16u,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
      a2->BindState.Miniport);
  v12 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2->BindDriver._p,
      v11,
      0x17u,
      v14,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length);
  p_m_lock = &a1->BindEngine.m_lock;
  if ( !v12 )
    goto LABEL_14;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  Rtl::KArray<void *,1>::resize(&a2->BindState.m_bindContext.m_bufferSize);
  a2->BindState.m_LastErrorCode = v12;
  if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00F5443 >= 4u
    && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LZq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2->BindDriver._p->_t.Name.__ptr_.__value_,
      v13,
      0x18u,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      v12,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
      a2->BindState.Miniport);
  }
  if ( Ndis::BindState::SetSource(&a2->BindState, RemoveBindSource, UnsolicitedOpen)
    && (unsigned __int8)byte_1C00F5443 >= 4u
    && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2->BindDriver._p->_t.Name.__ptr_.__value_,
      0x1Cu,
      0x19u,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
      a2->BindState.Miniport);
  }
LABEL_15:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
