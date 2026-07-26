/*
 * XREFs of ?ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z @ 0x1C0092E84
 * Callers:
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00949B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A088 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 * Callees:
 *     memcmp @ 0x1C0038280 (memcmp.c)
 */

bool __fastcall ndisComparePMProtocolOffloads(
        struct _NDIS_PM_PROTOCOL_OFFLOAD *a1,
        struct _NDIS_PM_PROTOCOL_OFFLOAD *a2)
{
  _NDIS_PM_PROTOCOL_OFFLOAD_TYPE ProtocolOffloadType; // r8d
  char v3; // bl
  __int32 v6; // r8d
  __int32 v7; // r8d
  __int32 v8; // r8d
  size_t v9; // r8
  unsigned __int64 v10; // rdx

  ProtocolOffloadType = a1->ProtocolOffloadType;
  v3 = 0;
  if ( ProtocolOffloadType != a2->ProtocolOffloadType )
    return 0;
  v6 = ProtocolOffloadType - 1;
  if ( !v6 )
  {
    v10 = *(_QWORD *)&a1->ProtocolOffloadParameters.IPv4ARPParameters.Flags
        - *(_QWORD *)&a2->ProtocolOffloadParameters.IPv4ARPParameters.Flags;
    if ( !v10 )
    {
      v10 = a1->ProtocolOffloadParameters.Dot11RSNRekeyParametersV2.KeyReplayCounter
          - a2->ProtocolOffloadParameters.Dot11RSNRekeyParametersV2.KeyReplayCounter;
      if ( !v10 )
        v10 = a1->ProtocolOffloadParameters.Dot11RSNRekeyParametersV2.AuthAlgo
            - (unsigned __int64)a2->ProtocolOffloadParameters.Dot11RSNRekeyParametersV2.AuthAlgo;
    }
    return v10 == 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = 76LL;
LABEL_10:
    if ( !memcmp(&a1->ProtocolOffloadParameters, &a2->ProtocolOffloadParameters, v9) )
      return 1;
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = 48LL;
    goto LABEL_10;
  }
  if ( v8 == 1 )
  {
    v9 = 96LL;
    goto LABEL_10;
  }
  return v3;
}
