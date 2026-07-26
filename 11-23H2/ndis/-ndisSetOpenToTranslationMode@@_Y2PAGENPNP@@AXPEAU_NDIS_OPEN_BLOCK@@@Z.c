/*
 * XREFs of ?ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0155E14
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01496A8 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeEvent @ 0x1C0024EF0 (NdisInitializeEvent.c)
 */

void __fastcall ndisSetOpenToTranslationMode(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  int (__fastcall *v3)(void *, _NDIS_PACKET *); // rax

  MiniportHandle = a1->MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x8Du,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  a1->OpenFlags |= 0x10000000u;
  KeInitializeSpinLock(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock);
  a1->PnPState = Ndis5StateRunning;
  NdisInitializeEvent(&a1->PauseEvent);
  a1->OutstandingSends = 0;
  if ( MiniportHandle->MediaType != NdisMediumWan
    || (v3 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend, (MiniportHandle->Flags & 0x20000) != 0) )
  {
    v3 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisSendWithPause;
  }
  a1->SendHandler = v3;
  a1->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisSendPacketsWithPause;
  a1->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisSendCompleteWithPause;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x8Eu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
}
