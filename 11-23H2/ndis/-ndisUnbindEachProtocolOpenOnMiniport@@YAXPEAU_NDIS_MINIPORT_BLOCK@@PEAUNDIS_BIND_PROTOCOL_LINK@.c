/*
 * XREFs of ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C010FA60
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011093C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x1C011398C (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zqq @ 0x1C0020780 (WPP_RECORDER_SF_Zqq.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C010FB9C (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142A8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0147C28 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindEachProtocolOpenOnMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  struct _NDIS_OPEN_BLOCK *v4; // rdi
  int v5; // edx
  int v6; // edx

  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  while ( a2->BindState.m_bindContext.m_numElements )
  {
    v4 = (struct _NDIS_OPEN_BLOCK *)*a2->BindState.m_bindContext._p;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    Ndis::BindState::RemoveBindContext(&a2->BindState, v4);
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        0x1Cu,
        0x10u,
        (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
        &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
        (char)a2->BindState.Miniport,
        v4);
    ndisUnbindProtocolOpen(a1, v4);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        0x1Cu,
        0x11u,
        (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
        &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
        (char)a2->BindState.Miniport,
        v4);
  }
}
