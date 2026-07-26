/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C01073F0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0107914 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ZqD @ 0x1C0020998 (WPP_RECORDER_SF_ZqD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C006AF0C (WPP_RECORDER_SF_LZq.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106C18 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C01076E0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C010C5E0 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, Ndis::BindState *this)
{
  void *m_AdditionalContext; // rdx
  struct _NDIS_PROTOCOL_BLOCK *v5; // r13
  __int64 v6; // r8
  int v7; // r12d
  KPushLock *p_m_lock; // r15
  int v9; // r8d
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int16 *v11; // rdx
  unsigned __int16 v12; // r9
  int v13; // [rsp+20h] [rbp-38h]

  m_AdditionalContext = this[1].m_AdditionalContext;
  v5 = (struct _NDIS_PROTOCOL_BLOCK *)*((_QWORD *)m_AdditionalContext + 5);
  if ( v5->MajorNdisVersion < 6u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)m_AdditionalContext,
        0x1Cu,
        0x20u,
        (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
        *((unsigned __int16 **)m_AdditionalContext + 3),
        this->Miniport);
    this->PretendBindingActive = 1;
    p_m_lock = &a1->BindEngine.m_lock;
LABEL_7:
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
    if ( v5->MajorNdisVersion < 6u )
    {
      if ( Ndis::BindState::SetPause(this, DatapathRunning, PauseReason_InitialPause)
        && (unsigned __int8)byte_1C00EC66B >= 4u )
      {
        Miniport = this->Miniport;
        v11 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v12 = 36;
          goto LABEL_29;
        }
      }
    }
    else if ( Ndis::BindState::SetPause(this, DatapathRunning, PauseReason_InitialPause)
           && (unsigned __int8)byte_1C00EC66B >= 4u )
    {
      Miniport = this->Miniport;
      v11 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v12 = 35;
        goto LABEL_29;
      }
    }
    goto LABEL_10;
  }
  *((_BYTE *)m_AdditionalContext + 1) = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)m_AdditionalContext,
      0x1Cu,
      0x1Eu,
      (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
      *((unsigned __int16 **)this[1].m_AdditionalContext + 3),
      this->Miniport);
  v7 = ndisBindNdis6Protocol(a1, v5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)this[1].m_AdditionalContext,
      v6,
      0x1Fu,
      v13,
      *((unsigned __int16 **)this[1].m_AdditionalContext + 3));
  p_m_lock = &a1->BindEngine.m_lock;
  if ( !v7 )
    goto LABEL_7;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  Rtl::KArray<void *,1>::resize(&this->m_bindContext);
  this->m_LastErrorCode = v7;
  if ( Ndis::BindState::SetBinding(this, BindingDisabled, Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00EC66B >= 4u
    && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LZq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      *((_QWORD *)this[1].m_AdditionalContext + 3),
      v9,
      0x21u,
      (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
      v7,
      *((unsigned __int16 **)this[1].m_AdditionalContext + 3),
      this->Miniport);
  }
  if ( Ndis::BindState::SetSource(this, RemoveBindSource, UnsolicitedOpen) && (unsigned __int8)byte_1C00EC66B >= 4u )
  {
    Miniport = this->Miniport;
    v11 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = 34;
LABEL_29:
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        0x1Cu,
        v12,
        (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
        v11,
        Miniport);
    }
  }
LABEL_10:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
