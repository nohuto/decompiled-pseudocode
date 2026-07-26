/*
 * XREFs of ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0088574
 * Callers:
 *     ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087190 (-ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     memcmp @ 0x1C00380F0 (memcmp.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0086170 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0086808 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008836C (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisSetOpenRSSv2Parameters(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  char v7; // si
  int v8; // eax
  int CombinedRSSParameters; // edi
  unsigned __int8 *Pool2; // rax
  _BYTE *InformationBuffer; // r15
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // r13
  bool v13; // dl
  bool v14; // r8
  bool v15; // zf
  unsigned int v16; // edx
  bool v17; // si
  struct _NDIS_MINIPORT_BLOCK *VPortBlockForRequest; // rax
  int v19; // edx
  char v20; // r9
  int v21; // r8d
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v23; // edx
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  KIRQL v25; // dl
  __int64 v27; // [rsp+38h] [rbp-40h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF

  MiniportHandle = a1->MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x25u,
      (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
  NewIrql = 0;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v7 = 1;
  v8 = ndisSetMiniportRSSv2ParametersHelper(MiniportHandle, a2);
  CombinedRSSParameters = v8;
  if ( v8 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v27) = v8;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x26u,
        (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
        (char)MiniportHandle,
        (char)a2,
        v27);
    }
    goto LABEL_34;
  }
  if ( !a1->RssParametersBuffer )
  {
    Pool2 = (unsigned __int8 *)ExAllocatePool2(72LL, 1108LL, 1936868430);
    a1->RssParametersBuffer = Pool2;
    if ( !Pool2 )
    {
      CombinedRSSParameters = -1073741670;
LABEL_34:
      a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
      goto LABEL_35;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
  CombinedRSSParameters = ndisAllocateCombinedRSSParameters(MiniportHandle, a2, 0LL, 0LL, 0LL, 0LL);
  if ( !CombinedRSSParameters )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( MiniportHandle->CombinedNdisRSSParameters )
    {
      RssParametersBuffer = MiniportHandle->RssParametersBuffer;
      v13 = (RssParametersBuffer->Combined[4] & 0x10) == 0
         && (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8];
      v14 = 0;
      v15 = v13 == (InformationBuffer[4] & 1);
      v16 = *((_DWORD *)InformationBuffer + 3);
      if ( v15 )
        v14 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == (unsigned __int8)*((_DWORD *)InformationBuffer
                                                                                                + 2);
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[20] != v16 )
        goto LABEL_22;
      v17 = 0;
      if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[12] >> 2 == *((_DWORD *)InformationBuffer + 6) )
        v17 = v14;
      if ( memcmp(
             &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
             &InformationBuffer[*((unsigned int *)InformationBuffer + 4)],
             v16) )
      {
LABEL_22:
        v17 = 0;
      }
      VPortBlockForRequest = ndisGetVPortBlockForRequest(MiniportHandle, a2);
      v19 = *((_DWORD *)InformationBuffer + 2);
      v20 = 0;
      v21 = (unsigned __int8)v19;
      if ( *((_DWORD *)InformationBuffer + 5) == LODWORD(VPortBlockForRequest->Reserved30) )
        v20 = v17;
      OpenQueue = MiniportHandle->OpenQueue;
      v23 = v19 & 0xFFFF00;
      while ( OpenQueue )
      {
        NdisRSSParameters = OpenQueue->NdisRSSParameters;
        if ( NdisRSSParameters && OpenQueue != a1 )
          v23 |= NdisRSSParameters->HashInformation & 0xFFFF00;
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
      v7 = v20;
      *((_DWORD *)InformationBuffer + 2) = v23 | v21;
      if ( v23 != (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00) )
        v7 = 0;
    }
    else
    {
      v7 = 0;
    }
  }
  v25 = NewIrql;
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v25);
  if ( v7 )
    goto LABEL_34;
LABEL_35:
  *a3 = CombinedRSSParameters;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x27u,
      (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v7,
      CombinedRSSParameters);
  if ( CombinedRSSParameters && (byte_1C00F7644 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      CombinedRSSParameters,
      2,
      (char)a1);
  return v7;
}
