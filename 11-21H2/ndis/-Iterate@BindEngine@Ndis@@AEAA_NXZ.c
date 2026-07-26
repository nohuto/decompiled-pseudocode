/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0107914
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01075AC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0017F10 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0020BA8 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0025900 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002644C (-ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C003260C (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0103FB4 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0104348 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01044D8 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0104A7C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C010504C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0105530 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0105808 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0105C00 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0106AA4 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C01073F0 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C01076E0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C0108034 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C010804C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C0109BEC (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109C44 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C010BF50 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010BF6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C010C274 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C0114BC4 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  char v1; // bl
  _NDIS_MINIPORT_BLOCK *m_miniport; // rsi
  _NDIS_MINIPORT_BLOCK *v4; // r14
  unsigned __int64 v5; // rsi
  __int64 m_numElements; // r15
  NDIS_BIND_PROTOCOL_LINK *value; // rcx
  _NDIS_MINIPORT_BLOCK *v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  NDIS_BIND_FILTER_LINK *v11; // rcx
  __int64 v12; // r12
  unsigned __int64 i; // r14
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r15
  Ndis::BindState *p_BindState; // rcx
  _NDIS_MINIPORT_BLOCK *v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // rsi
  NDIS_BIND_FILTER_LINK *v19; // rcx
  unsigned __int64 v20; // r14
  Ndis::BindState *v21; // rcx
  __int64 v22; // r15
  unsigned __int64 j; // r14
  Ndis::BindState *v24; // rcx
  NDIS_BIND_LINK_BASE *v25; // rcx
  __int64 v26; // r8
  NDIS_BIND_LINK_BASE *v27; // rcx
  _NDIS_MINIPORT_BLOCK *v29; // rcx
  _NDIS_MINIPORT_BLOCK *v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  _NDIS_MINIPORT_BLOCK *v33; // r14
  unsigned __int64 v34; // rsi
  __int64 v35; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v36; // r15
  NDIS_BIND_PROTOCOL_LINK *v37; // rax
  NDIS_BIND_PROTOCOL_LINK *v38; // rax
  __int64 v39; // rsi
  Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> >,1> *p_Filters; // r14
  unsigned __int64 v41; // rdi
  NDIS_BIND_FILTER_LINK **v42; // rdx
  NDIS_BIND_LINK_BASE *m_currentOperation; // r15
  _NDIS_MINIPORT_BLOCK *v44; // r13
  KLockHolder v45; // [rsp+48h] [rbp-C0h] BYREF
  struct NDIS_RESTART_INFORMATION v46; // [rsp+60h] [rbp-A8h] BYREF

  v1 = 0;
  v46.FilterInstanceBuffer._p = 0LL;
  *((_QWORD *)&v46.FilterInstanceBuffer + 2) = 0LL;
  memset(&v46.Padding[8], 0, 104);
  v45.m_State = Unlocked;
  v45.m_Region.m_Entered = 0;
  v45.m_Lock = &this->m_lock;
  memset(&v46.RssCaps.NumberOfInterruptMessages, 0, 20);
  memset(&v46.ProtocolParameters.FilterModuleNameBuffer, 0, 60);
  KLockHolder::AcquireExclusive(&v45);
  this->m_isDirty = 0;
  KLockHolder::ReleaseExclusive(&v45);
  m_miniport = this->m_miniport;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode(this->m_miniport);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&m_miniport->BindEngine.m_lock, 0LL);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine);
  }
  KLockHolder::AcquireExclusive(&v45);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
    goto LABEL_56;
  v4 = this->m_miniport;
  v5 = 0LL;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v5 != m_numElements )
  {
    if ( v5 >= v4->Bindings.Protocols.m_numElements )
      goto LABEL_100;
    value = v4->Bindings.Protocols._p[v5].__ptr_.__value_;
    if ( value->BindState.PretendBindingActive || value->BindState.m_bindContext.m_numElements )
    {
      if ( value->BindState.m_pauseReasons )
      {
        if ( value->BindState.m_actualPauseState == DatapathRunning )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)value;
          KLockHolder::ReleaseExclusive(&v45);
          ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v45);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_56;
        }
      }
    }
    ++v5;
  }
  v8 = this->m_miniport;
  v9 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v10 = v9 - 1;
    do
    {
      if ( v10 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_100;
      v11 = this->m_miniport->Bindings.Filters._p[v10].__ptr_.__value_;
      if ( v11->BindState.PretendBindingActive || v11->BindState.m_bindContext.m_numElements )
      {
        if ( v11->BindState.m_pauseReasons )
        {
          if ( v11->BindState.m_actualPauseState == DatapathRunning )
          {
            this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v11;
            KLockHolder::ReleaseExclusive(&v45);
            ndisPauseFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
            KLockHolder::AcquireExclusive(&v45);
            this->m_currentOperation = 0LL;
            Ndis::BindEngine::ApplyRules(this);
            if ( this->m_isDirty )
              goto LABEL_56;
          }
        }
      }
      --v10;
      --v9;
    }
    while ( v9 );
    v8 = this->m_miniport;
  }
  if ( v8->Bindings.Miniport.m_pauseReasons && v8->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v45);
    ndisMPauseMiniport(this->m_miniport);
    KLockHolder::AcquireExclusive(&v45);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_56;
    v8 = this->m_miniport;
  }
  v12 = v8->Bindings.Protocols.m_numElements;
  for ( i = 0LL; i != v12; ++i )
  {
    if ( i >= v8->Bindings.Protocols.m_numElements )
      goto LABEL_100;
    p = v8->Bindings.Protocols._p;
    p_BindState = &p[i].__ptr_.__value_->BindState;
    if ( p_BindState->m_unbindReasons && (p_BindState->PretendBindingActive || p_BindState->m_bindContext.m_numElements) )
    {
      if ( Ndis::BindState::SetSource(p_BindState, RemoveBindSource, UnsolicitedOpen)
        && (unsigned __int8)byte_1C00EC66B >= 4u
        && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p[i].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_,
          0x1Cu,
          0xAu,
          (struct _GUID *)&WPP_1edf3853795934c168f7fc439cf9fda8_Traceguids,
          &p[i].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          p[i].__ptr_.__value_->BindState.Miniport);
      }
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)p[i];
      KLockHolder::ReleaseExclusive(&v45);
      m_currentOperation = this->m_currentOperation;
      v44 = this->m_miniport;
      if ( *((_BYTE *)m_currentOperation[1].BindState.Miniport->Reserved4.Buffer + 56) < 6u )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(&v44->BindEngine.m_lock, 0LL);
        m_currentOperation->BindState.m_actualPauseState = DatapathPaused;
        Ndis::BindEngine::EndPolicyUpdates(&v44->BindEngine);
      }
      m_currentOperation->BindState.PretendBindingActive = 0;
      ndisUnbindEachProtocolOpenOnMiniport(v44, (struct NDIS_BIND_PROTOCOL_LINK *)m_currentOperation);
      KLockHolder::AcquireExclusive(&v45);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_56;
    }
  }
  v16 = this->m_miniport;
  v17 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v18 = v17 - 1;
    do
    {
      if ( v18 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_100;
      v19 = this->m_miniport->Bindings.Filters._p[v18].__ptr_.__value_;
      if ( v19->BindState.m_unbindReasons
        && (v19->BindState.PretendBindingActive || v19->BindState.m_bindContext.m_numElements) )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v19;
        KLockHolder::ReleaseExclusive(&v45);
        ndisDetachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
        KLockHolder::AcquireExclusive(&v45);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_56;
      }
      --v18;
      --v17;
    }
    while ( v17 );
    v16 = this->m_miniport;
  }
  v20 = 0LL;
  if ( v16->Bindings.Filters.m_numElements )
  {
    while ( v20 < v16->Bindings.Filters.m_numElements )
    {
      v21 = &v16->Bindings.Filters._p[v20].__ptr_.__value_->BindState;
      if ( !v21->m_unbindReasons && Ndis::BindState::GetActualBindingState(v21) == BindingDisabled )
      {
        this->m_currentOperation = v25;
        KLockHolder::ReleaseExclusive(&v45);
        ndisAttachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation, v26);
        KLockHolder::AcquireExclusive(&v45);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_56;
      }
      v16 = this->m_miniport;
      if ( ++v20 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_46;
    }
LABEL_100:
    __fastfail(5u);
  }
LABEL_46:
  v22 = v16->Bindings.Protocols.m_numElements;
  for ( j = 0LL; j != v22; ++j )
  {
    if ( j >= v16->Bindings.Protocols.m_numElements )
      goto LABEL_100;
    v24 = &v16->Bindings.Protocols._p[j].__ptr_.__value_->BindState;
    if ( !v24->m_unbindReasons && Ndis::BindState::GetActualBindingState(v24) == BindingDisabled )
    {
      this->m_currentOperation = v27;
      KLockHolder::ReleaseExclusive(&v45);
      ndisBindProtocol(this->m_miniport, &this->m_currentOperation->BindState);
      KLockHolder::AcquireExclusive(&v45);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_56;
    }
  }
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  v29 = this->m_miniport;
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons || v29->Bindings.Miniport.m_actualPauseState )
    goto LABEL_60;
  KLockHolder::ReleaseExclusive(&v45);
  ndisMRestartMiniport(this->m_miniport, (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  KLockHolder::AcquireExclusive(&v45);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
  {
LABEL_56:
    v1 = 1;
    goto LABEL_57;
  }
  v29 = this->m_miniport;
LABEL_60:
  ndisPostProcessRestartParametersAfterMiniport(v29, (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  v30 = this->m_miniport;
  v31 = 0LL;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    while ( v31 < v30->Bindings.Filters.m_numElements )
    {
      if ( Ndis::BindState::GetActualBindingState(&v30->Bindings.Filters._p[v31].__ptr_.__value_->BindState) == BindingEnabled
        && !*(_DWORD *)(v32 + 36)
        && !*(_DWORD *)(v32 + 40) )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v32;
        KLockHolder::ReleaseExclusive(&v45);
        ndisRestartFilter(
          this->m_miniport,
          (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation,
          (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
        KLockHolder::AcquireExclusive(&v45);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_56;
      }
      v30 = this->m_miniport;
      if ( ++v31 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_64;
    }
    goto LABEL_100;
  }
LABEL_64:
  ndisPostProcessRestartParametersAfterFilters(v30, (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  v33 = this->m_miniport;
  v34 = 0LL;
  v35 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v34 != v35 )
  {
    if ( v34 >= v33->Bindings.Protocols.m_numElements )
      goto LABEL_100;
    v36 = v33->Bindings.Protocols._p;
    v37 = v36[v34].__ptr_.__value_;
    if ( (v37->BindState.PretendBindingActive || v37->BindState.m_bindContext.m_numElements)
      && !v37->BindState.m_pauseReasons
      && v37->BindState.m_actualPauseState == DatapathPaused )
    {
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v37;
      KLockHolder::ReleaseExclusive(&v45);
      ndisRestartProtocol(
        this->m_miniport,
        (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation,
        (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
      KLockHolder::AcquireExclusive(&v45);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_56;
    }
    v38 = v36[v34++].__ptr_.__value_;
    v38->BindState.m_AdditionalContext = 0LL;
  }
  ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, (struct NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&this->m_miniport->MiniportOwner);
  v39 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    p_Filters = &this->m_miniport->Bindings.Filters;
    v41 = v39 - 1;
    while ( v41 < p_Filters->m_numElements )
    {
      if ( !Ndis::BindState::IsAlive(&p_Filters->_p[v41].__ptr_.__value_->BindState) )
      {
        wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
          v42,
          (unsigned int)v42);
        Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
          p_Filters,
          (unsigned int)(v41 + 1),
          (unsigned int)v41,
          (unsigned int)(p_Filters->m_numElements - v41 - 1));
        --p_Filters->m_numElements;
      }
      --v41;
      if ( !--v39 )
        goto LABEL_84;
    }
    goto LABEL_100;
  }
LABEL_84:
  KLockHolder::ReleaseExclusive(&v45);
LABEL_57:
  KLockHolder::~KLockHolder(&v45);
  NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION((NDIS_RESTART_INFORMATION *)&v46.Padding[8]);
  return v1;
}
