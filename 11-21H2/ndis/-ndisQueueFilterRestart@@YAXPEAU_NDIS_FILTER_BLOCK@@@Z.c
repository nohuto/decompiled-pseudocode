/*
 * XREFs of ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01218F0
 * Callers:
 *     NdisFRestartFilter @ 0x1C0062E60 (NdisFRestartFilter.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C0121A20 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012ED38 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisQueueFilterRestart(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  char v4[160]; // [rsp+40h] [rbp-B8h] BYREF

  Miniport = a1->Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  if ( Ndis::BindState::SetPause(&a1->Bind->BindState, DatapathPaused, PauseReason_RestartNeeded) )
  {
    memset(v4, 0, sizeof(v4));
    if ( (unsigned __int8)byte_1C00EC66B >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v4);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v3,
          0x1Cu,
          0x24u,
          (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
          *(unsigned __int16 **)&v4[8],
          *(_QWORD *)v4);
    }
  }
  a1->Bind->BindState.NeedsPauseAction = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->Miniport->BindEngine, v3);
  Ndis::BindEngine::ApplyBindChanges(&a1->Miniport->BindEngine, RunAsynchronous, 0);
}
