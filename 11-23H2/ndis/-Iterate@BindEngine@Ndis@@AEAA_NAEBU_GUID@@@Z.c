/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x1C011398C
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01135AC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_LINK@@AEBU_GUID@@@Z @ 0x1C002165C (--0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x1C00216E0 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x1C0021700 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0021D6C (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0021ED8 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0022114 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ??0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1C00221D4 (--0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0023774 (WPP_RECORDER_SF_Zq.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x1C0025590 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0030E70 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     ?ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035D90 (-ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010F918 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C010FA60 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0110164 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0110704 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011093C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01129BC (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C01131E4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0113754 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C0114250 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C0114268 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142A8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C0115F84 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C0115FA0 (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116004 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0116428 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C011658C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C011690C (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C01171BC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0117494 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C011F318 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this, const struct _GUID *a2)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rdi
  __int64 v5; // rdx
  _NDIS_MINIPORT_BLOCK *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 m_numElements; // r15
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rax
  NDIS_BIND_PROTOCOL_LINK *value; // rdi
  _NDIS_MINIPORT_BLOCK *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // r14
  _NDIS_MINIPORT_BLOCK *v15; // r8
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v16; // rax
  NDIS_BIND_FILTER_LINK *v17; // rsi
  _NDIS_MINIPORT_BLOCK *v18; // r8
  _NDIS_MINIPORT_BLOCK *v19; // r15
  unsigned __int64 v20; // rdi
  __int64 v21; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v22; // rsi
  Ndis::BindState *p_BindState; // rcx
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  _NDIS_MINIPORT_BLOCK *v28; // r8
  struct NDIS_BIND_FILTER_LINK *v29; // r14
  int v30; // eax
  _NDIS_MINIPORT_BLOCK *v31; // rdi
  unsigned __int64 v32; // rsi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v33; // rax
  struct NDIS_BIND_FILTER_LINK *v34; // r14
  __int64 v35; // r15
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v38; // rax
  NDIS_BIND_LINK_BASE *v39; // r14
  __int64 v40; // rdx
  _NDIS_MINIPORT_BLOCK *v41; // r8
  _NDIS_MINIPORT_BLOCK *v43; // r8
  _NDIS_MINIPORT_BLOCK *v44; // r8
  unsigned __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r8
  _NDIS_MINIPORT_BLOCK *v49; // r14
  unsigned __int64 v50; // rdi
  __int64 v51; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v52; // r15
  __int64 v53; // rsi
  __int64 v54; // rdx
  _NDIS_MINIPORT_BLOCK *v55; // r8
  __int64 v56; // rdi
  Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> >,1> *p_Filters; // rsi
  unsigned __int64 v58; // rbx
  NDIS_BIND_FILTER_LINK **v59; // rdx
  unsigned __int16 *p_Length; // rdx
  __int64 v61; // rsi
  _NDIS_MINIPORT_BLOCK *v62; // r8
  _NDIS_MINIPORT_BLOCK *v63; // r14
  NDIS_BIND_PROTOCOL_LINK *v64; // rax
  KLockHolder v65; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v66[7]; // [rsp+58h] [rbp-A8h] BYREF
  struct NDIS_RESTART_INFORMATION v67; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&v67.FilterInstanceBuffer.m_bufferSize = 0LL;
  v67.FilterInstanceBuffer._p = 0LL;
  memset(&v67, 0, 104);
  v65.m_State = Unlocked;
  v65.m_Region.m_Entered = 0;
  v65.m_Lock = &this->m_lock;
  memset(&v67.RssCaps, 0, sizeof(v67.RssCaps));
  memset(&v67.ProtocolParameters, 0, 60);
  KLockHolder::AcquireExclusive(&v65);
  this->m_isDirty = 0;
  KLockHolder::ReleaseExclusive(&v65);
  m_miniport = this->m_miniport;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode(this->m_miniport);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&m_miniport->BindEngine.m_lock, 0LL);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine);
  }
  KLockHolder::AcquireExclusive(&v65);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
    goto LABEL_57;
  v6 = this->m_miniport;
  v7 = 0LL;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v7 != m_numElements )
  {
    if ( v7 >= v6->Bindings.Protocols.m_numElements )
      goto LABEL_102;
    p = v6->Bindings.Protocols._p;
    value = p[v7].__ptr_.__value_;
    if ( (value->BindState.PretendBindingActive || value->BindState.m_bindContext.m_numElements)
      && value->BindState.m_pauseReasons
      && value->BindState.m_actualPauseState == DatapathRunning )
    {
      v11 = this->m_miniport;
      v12 = (__int64)p[v7].__ptr_.__value_;
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)value;
      LOBYTE(v5) = 1;
      BindingMetrics::Filter::Filter((__int64)v66, v5, (__int64)v11, v12, (__int64)a2);
      KLockHolder::ReleaseExclusive(&v65);
      ndisPauseProtocol(this->m_miniport, value);
      KLockHolder::AcquireExclusive(&v65);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
      {
LABEL_56:
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v66);
        goto LABEL_57;
      }
      BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v66);
    }
    ++v7;
  }
  v13 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v14 = v13 - 1;
    do
    {
      v15 = this->m_miniport;
      if ( v14 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_102;
      v16 = v15->Bindings.Filters._p;
      v17 = v16[v14].__ptr_.__value_;
      if ( (v17->BindState.PretendBindingActive || v17->BindState.m_bindContext.m_numElements)
        && v17->BindState.m_pauseReasons
        && v17->BindState.m_actualPauseState == DatapathRunning )
      {
        v25 = (__int64)v16[v14].__ptr_.__value_;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v17;
        LOBYTE(v5) = 1;
        BindingMetrics::Filter::Filter((__int64)v66, v5, (__int64)v15, v25, (__int64)a2);
        KLockHolder::ReleaseExclusive(&v65);
        ndisPauseFilter(this->m_miniport, v17);
        KLockHolder::AcquireExclusive(&v65);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_53:
          BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v66);
          goto LABEL_57;
        }
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v66);
      }
      --v14;
      --v13;
    }
    while ( v13 );
  }
  v18 = this->m_miniport;
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons
    && v18->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    BindingMetrics::Miniport::Miniport((__int64)v66, 1, (__int64)v18, (__int64)a2);
    KLockHolder::ReleaseExclusive(&v65);
    ndisMPauseMiniport(this->m_miniport);
    KLockHolder::AcquireExclusive(&v65);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
    {
LABEL_98:
      BindingMetrics::Miniport::~Miniport(v66);
LABEL_57:
      KLockHolder::~KLockHolder(&v65);
      NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v67);
      return 1;
    }
    BindingMetrics::Miniport::~Miniport(v66);
  }
  v19 = this->m_miniport;
  v20 = 0LL;
  v21 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v20 != v21 )
  {
    if ( v20 >= v19->Bindings.Protocols.m_numElements )
      goto LABEL_102;
    v22 = v19->Bindings.Protocols._p;
    p_BindState = &v22[v20].__ptr_.__value_->BindState;
    if ( p_BindState->m_unbindReasons )
    {
      v24 = 0;
      if ( !p_BindState->PretendBindingActive )
        LOBYTE(v24) = p_BindState->m_bindContext.m_numElements == 0;
      if ( !v24 )
      {
        if ( Ndis::BindState::SetSource(p_BindState, RemoveBindSource, UnsolicitedOpen)
          && (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          v64 = v22[v20].__ptr_.__value_;
          p_Length = &v64->BindDriver._p->_t.Name.__ptr_.__value_->Length;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)p_Length,
              0x1Cu,
              0xAu,
              (struct _GUID *)&WPP_2e89932a50af35deab5418396cb84628_Traceguids,
              p_Length,
              v64->BindState.Miniport);
        }
        v61 = (__int64)v22[v20].__ptr_.__value_;
        v62 = this->m_miniport;
        LOBYTE(p_Length) = 2;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v61;
        BindingMetrics::Filter::Filter((__int64)v66, (__int64)p_Length, (__int64)v62, v61, (__int64)a2);
        KLockHolder::ReleaseExclusive(&v65);
        v63 = this->m_miniport;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v61 + 80) + 40LL) + 56LL) < 6u )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(&v63->BindEngine.m_lock, 0LL);
          *(_DWORD *)(v61 + 40) = 0;
          Ndis::BindEngine::EndPolicyUpdates(&v63->BindEngine);
        }
        *(_BYTE *)(v61 + 9) = 0;
        ndisUnbindEachProtocolOpenOnMiniport(v63, (struct NDIS_BIND_PROTOCOL_LINK *)v61);
        KLockHolder::AcquireExclusive(&v65);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_56;
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v66);
      }
    }
    ++v20;
  }
  v26 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v27 = v26 - 1;
    while ( 1 )
    {
      v28 = this->m_miniport;
      if ( v27 >= this->m_miniport->Bindings.Filters.m_numElements )
        break;
      v29 = v28->Bindings.Filters._p[v27].__ptr_.__value_;
      if ( v29->BindState.m_unbindReasons )
      {
        v30 = 0;
        if ( !v29->BindState.PretendBindingActive )
          LOBYTE(v30) = v29->BindState.m_bindContext.m_numElements == 0;
        if ( !v30 )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v29;
          LOBYTE(v5) = 5;
          BindingMetrics::Filter::Filter((__int64)v66, v5, (__int64)v28, (__int64)v29, (__int64)a2);
          KLockHolder::ReleaseExclusive(&v65);
          ndisDetachFilter(this->m_miniport, v29);
          KLockHolder::AcquireExclusive(&v65);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_53;
          BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v66);
        }
      }
      --v27;
      if ( !--v26 )
        goto LABEL_42;
    }
LABEL_102:
    __fastfail(5u);
  }
LABEL_42:
  v31 = this->m_miniport;
  v32 = 0LL;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    while ( v32 < v31->Bindings.Filters.m_numElements )
    {
      v33 = v31->Bindings.Filters._p;
      v34 = v33[v32].__ptr_.__value_;
      if ( !v34->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v33[v32].__ptr_.__value_->BindState) == BindingDisabled )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v34;
        LOBYTE(v40) = 6;
        BindingMetrics::Filter::Filter((__int64)v66, v40, (__int64)v31, (__int64)v34, (__int64)a2);
        KLockHolder::ReleaseExclusive(&v65);
        ndisAttachFilter(this->m_miniport, v34);
        KLockHolder::AcquireExclusive(&v65);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_53;
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v66);
      }
      v31 = this->m_miniport;
      if ( ++v32 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_46;
    }
    goto LABEL_102;
  }
LABEL_46:
  v35 = v31->Bindings.Protocols.m_numElements;
  v36 = 0LL;
  LODWORD(v37) = v31->Bindings.Protocols.m_numElements;
  while ( v36 != v35 )
  {
    if ( v36 >= (unsigned int)v37 )
      goto LABEL_102;
    v38 = v31->Bindings.Protocols._p;
    v39 = &v38[v36].__ptr_.__value_->NDIS_BIND_LINK_BASE;
    if ( !v39->BindState.m_unbindReasons
      && Ndis::BindState::GetActualBindingState(&v38[v36].__ptr_.__value_->BindState) == BindingDisabled )
    {
      v41 = this->m_miniport;
      this->m_currentOperation = v39;
      LOBYTE(v37) = 3;
      BindingMetrics::Filter::Filter((__int64)v66, v37, (__int64)v41, (__int64)v39, (__int64)a2);
      KLockHolder::ReleaseExclusive(&v65);
      ndisBindProtocol(this->m_miniport, &v39->BindState);
      KLockHolder::AcquireExclusive(&v65);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_56;
      BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v66);
      LODWORD(v37) = v31->Bindings.Protocols.m_numElements;
    }
    ++v36;
  }
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  v43 = this->m_miniport;
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons || v43->Bindings.Miniport.m_actualPauseState )
    goto LABEL_63;
  BindingMetrics::Miniport::Miniport((__int64)v66, 4, (__int64)v43, (__int64)a2);
  KLockHolder::ReleaseExclusive(&v65);
  ndisMRestartMiniport(this->m_miniport, &v67);
  KLockHolder::AcquireExclusive(&v65);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
    goto LABEL_98;
  BindingMetrics::Miniport::~Miniport(v66);
LABEL_63:
  ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v67);
  v44 = this->m_miniport;
  v45 = 0LL;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    while ( v45 < v44->Bindings.Filters.m_numElements )
    {
      v46 = (__int64)v44->Bindings.Filters._p[v45].__ptr_.__value_;
      if ( Ndis::BindState::GetActualBindingState((Ndis::BindState *)v46) == BindingEnabled
        && !*(_DWORD *)(v46 + 36)
        && !*(_DWORD *)(v46 + 40) )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v46;
        LOBYTE(v47) = 4;
        BindingMetrics::Filter::Filter((__int64)v66, v47, v48, v46, (__int64)a2);
        KLockHolder::ReleaseExclusive(&v65);
        ndisRestartFilter(this->m_miniport, (Ndis::BindState *)v46, &v67);
        KLockHolder::AcquireExclusive(&v65);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_53;
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v66);
      }
      v44 = this->m_miniport;
      if ( ++v45 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_67;
    }
    goto LABEL_102;
  }
LABEL_67:
  ndisPostProcessRestartParametersAfterFilters(v44, &v67);
  v49 = this->m_miniport;
  v50 = 0LL;
  v51 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v50 != v51 )
  {
    if ( v50 >= v49->Bindings.Protocols.m_numElements )
      goto LABEL_102;
    v52 = v49->Bindings.Protocols._p;
    v53 = (__int64)v52[v50].__ptr_.__value_;
    if ( Ndis::BindState::GetActualBindingState((Ndis::BindState *)v53) == BindingEnabled
      && !*(_DWORD *)(v53 + 36)
      && !*(_DWORD *)(v53 + 40) )
    {
      v55 = this->m_miniport;
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v53;
      LOBYTE(v54) = 4;
      BindingMetrics::Filter::Filter((__int64)v66, v54, (__int64)v55, v53, (__int64)a2);
      KLockHolder::ReleaseExclusive(&v65);
      ndisRestartProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)v53, &v67);
      KLockHolder::AcquireExclusive(&v65);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_56;
      BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v66);
    }
    v52[v50++].__ptr_.__value_->BindState.m_AdditionalContext = 0LL;
  }
  ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v67);
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&this->m_miniport->MiniportOwner);
  v56 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    p_Filters = &this->m_miniport->Bindings.Filters;
    v58 = v56 - 1;
    while ( v58 < p_Filters->m_numElements )
    {
      if ( !Ndis::BindState::IsAlive(&p_Filters->_p[v58].__ptr_.__value_->BindState) )
      {
        wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
          v59,
          (unsigned int)v59);
        Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
          p_Filters,
          (unsigned int)(v58 + 1),
          (unsigned int)v58,
          (unsigned int)(p_Filters->m_numElements - v58 - 1));
        --p_Filters->m_numElements;
      }
      --v58;
      if ( !--v56 )
        goto LABEL_86;
    }
    goto LABEL_102;
  }
LABEL_86:
  KLockHolder::ReleaseExclusive(&v65);
  KLockHolder::~KLockHolder(&v65);
  NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v67);
  return 0;
}
