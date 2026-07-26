/*
 * XREFs of ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C009CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0112018 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115960 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167E0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013ABCC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 m_numElements; // r15
  unsigned __int64 v5; // rdi
  unsigned int v6; // edx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rsi
  Ndis::BindState *p_BindState; // rcx
  __int64 v9; // r8
  int v10; // edx
  char v11[160]; // [rsp+40h] [rbp-B8h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x51u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      a1);
  Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
  m_numElements = a2->Bindings.Protocols.m_numElements;
  v5 = 0LL;
  v6 = a2->Bindings.Protocols.m_numElements;
  while ( v5 != m_numElements )
  {
    if ( v5 >= v6 )
      __fastfail(5u);
    p = a2->Bindings.Protocols._p;
    p_BindState = &p[v5].__ptr_.__value_->BindState;
    v9 = *((_QWORD *)p_BindState[1].m_AdditionalContext + 5);
    if ( v9 && *(_BYTE *)(v9 + 56) < 6u )
    {
      if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_RebindNeeded) )
      {
        memset(v11, 0, sizeof(v11));
        if ( (unsigned __int8)byte_1C00F5443 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[v5].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v11);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v10,
              0x1Cu,
              0x52u,
              (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
              *(unsigned __int16 **)&v11[8],
              *(_QWORD *)v11);
        }
      }
      v6 = a2->Bindings.Protocols.m_numElements;
    }
    ++v5;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous, 0);
  ndisDereferenceMiniport(a2, 0x36u);
  ExFreePoolWithTag(a1, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x53u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      a2);
}
