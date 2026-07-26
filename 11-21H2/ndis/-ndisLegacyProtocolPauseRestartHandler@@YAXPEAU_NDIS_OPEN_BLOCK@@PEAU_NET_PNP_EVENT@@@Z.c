/*
 * XREFs of ?ndisLegacyProtocolPauseRestartHandler@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT@@@Z @ 0x1C0096000
 * Callers:
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C013E824 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     NdisWaitEvent @ 0x1C0025720 (NdisWaitEvent.c)
 */

void __fastcall ndisLegacyProtocolPauseRestartHandler(struct _NDIS_OPEN_BLOCK *a1, struct _NET_PNP_EVENT *a2)
{
  KIRQL v4; // al
  char v5; // bp
  KIRQL v6; // al
  bool v7; // zf
  __int64 v8; // [rsp+30h] [rbp-28h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x4Du,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)a1,
      a2->NetEvent);
  if ( a2->NetEvent == NetEventPause )
  {
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock);
    v7 = a1->OutstandingSends == 0;
    a1->PnPStateLock.OldIrql = v6;
    a1->PnPState = Ndis5StatePaused;
    if ( v7 )
      v5 = 1;
    else
      KeClearEvent(&a1->PauseEvent.Event);
    KeReleaseSpinLock(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock, a1->PnPStateLock.OldIrql);
    if ( !v5 )
      NdisWaitEvent(&a1->PauseEvent, 0);
  }
  else if ( a2->NetEvent == NetEventRestart )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock);
    a1->PnPState = Ndis5StateRunning;
    a1->PnPStateLock.OldIrql = v4;
    KeReleaseSpinLock(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock, v4);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = a2->NetEvent;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x4Eu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)a1,
      v8);
  }
}
