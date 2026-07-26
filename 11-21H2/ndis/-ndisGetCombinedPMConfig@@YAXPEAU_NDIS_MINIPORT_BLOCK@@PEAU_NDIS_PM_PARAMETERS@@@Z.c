/*
 * XREFs of ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008D854
 * Callers:
 *     ?ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008DFE0 (-ndisMIndicatePMOffloadReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008E0BC (-ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008F250 (-ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008F4A0 (-ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008F840 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008F9C0 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092664 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0093D30 (-ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

void __fastcall ndisGetCombinedPMConfig(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PM_PARAMETERS *a2)
{
  int v4; // ecx
  unsigned int v5; // r8d
  int v6; // edx
  _NDIS_OPEN_BLOCK *i; // rax
  _NDIS_FILTER_BLOCK *j; // rax
  unsigned int v9; // ecx
  KIRQL v10; // dl
  __int128 v11; // [rsp+20h] [rbp-20h]
  KIRQL NewIrql; // [rsp+50h] [rbp+10h] BYREF

  LODWORD(v11) = 1311360;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v4 = 0;
  v5 = a2->EnabledWoLPacketPatterns & 2;
  v6 = 0;
  for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
  {
    v5 |= i->PMCurrentParameters.EnabledWoLPacketPatterns;
    v6 |= i->PMCurrentParameters.EnabledProtocolOffloads;
    v4 |= i->PMCurrentParameters.MediaSpecificWakeUpEvents;
  }
  for ( j = a1->LowestFilter; j; j = j->HigherFilter )
  {
    v5 |= j->PMCurrentParameters.EnabledWoLPacketPatterns;
    v6 |= j->PMCurrentParameters.EnabledProtocolOffloads;
    v4 |= j->PMCurrentParameters.MediaSpecificWakeUpEvents;
  }
  v9 = a1->PMWmiParameters.MediaSpecificWakeUpEvents | v4;
  DWORD2(v11) = a1->PMWmiParameters.EnabledProtocolOffloads | v6;
  v10 = NewIrql;
  DWORD1(v11) = a1->PMWmiParameters.EnabledWoLPacketPatterns | v5;
  HIDWORD(v11) = a2->WakeUpFlags;
  *(_OWORD *)&a2->Header.Type = v11;
  a2->MediaSpecificWakeUpEvents = v9;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v10);
}
