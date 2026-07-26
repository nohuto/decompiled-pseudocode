/*
 * XREFs of ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FF50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1C008D9F8 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x1C008DCD0 (-ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C008EBFC (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0093300 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00941A0 (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094AD0 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMAddWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OPEN_BLOCK *v1; // r14
  unsigned __int8 v2; // di
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  __int64 v5; // rsi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rcx
  unsigned int WoLPatternSize; // eax
  struct _NDIS_PM_WOL_PATTERN *v8; // r9
  _NDIS_PROTOCOL_BLOCK *v9; // rcx
  int v10; // eax
  struct _NDIS_FILTER_BLOCK *v11; // rdx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int8 v18; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v2 = 1;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *((_QWORD *)a1 + 4);
  v18 = 1;
  if ( v1 )
  {
    ProtocolHandle = v1->ProtocolHandle;
    if ( ProtocolHandle->MajorNdisVersion <= 6u
      && (ProtocolHandle->MajorNdisVersion != 6 || ProtocolHandle->MinorNdisVersion < 0x14u) )
    {
      goto LABEL_6;
    }
  }
  if ( *(_DWORD *)(v5 + 4) != 1 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v5 + 88) & 0xC0000) != 0 )
    return 0;
  *(_DWORD *)(v5 + 56) = 0;
  if ( *(_DWORD *)(v5 + 48) < 0xC4u )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    return v2;
  }
  WoLPatternSize = ndisGetWoLPatternSize(*(struct _NDIS_PM_WOL_PATTERN **)(v5 + 40));
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v5 + 48) < WoLPatternSize )
  {
    *(_DWORD *)(v5 + 56) = WoLPatternSize;
    *((_DWORD *)a1 + 10) = -1073676268;
    return v2;
  }
  if ( !ndisIsValidWoLPattern(v8) )
  {
    *((_DWORD *)a1 + 10) = -1073676267;
    return v2;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    v9 = v1->ProtocolHandle;
    if ( v9->MajorNdisVersion <= 6u && (v9->MajorNdisVersion != 6 || v9->MinorNdisVersion < 0x14u) )
      goto LABEL_6;
    v10 = ndisSourcePreAddWoLPattern(v1, 0LL, (struct _NDIS_OID_REQUEST *)v5, &v18);
    v2 = v18;
    *((_DWORD *)a1 + 10) = v10;
    if ( v2 )
      return v2;
  }
  v11 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 1);
  if ( !v11 || (*(_DWORD *)(v5 + 88) & 0x4000) != 0 )
    goto LABEL_25;
  FilterDriver = v11->FilterDriver;
  if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
    && (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion != 6
     || FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion < 0x14u) )
  {
LABEL_6:
    *((_DWORD *)a1 + 10) = -1073741637;
    return v2;
  }
  v13 = ndisSourcePreAddWoLPattern(0LL, v11, (struct _NDIS_OID_REQUEST *)v5, &v18);
  v2 = v18;
  *((_DWORD *)a1 + 10) = v13;
  if ( v2 )
    return v2;
LABEL_25:
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( v3->MajorNdisVersion > 6u || v3->MajorNdisVersion == 6 && v3->MinorNdisVersion >= 0x14u )
  {
    v16 = ndisMiniportPreAddWoLPattern(v3, (struct _NDIS_OID_REQUEST *)v5, (char *)&v18);
    v2 = v18;
    *((_DWORD *)a1 + 10) = v16;
    if ( v2 )
      return v2;
    return 0;
  }
  v14 = ndisXlateAddWolPatternToPacketPatternOid((struct _NDIS_OID_REQUEST *)v5, &v18);
  v2 = v18;
  *((_DWORD *)a1 + 10) = v14;
  if ( v2 != 1 )
  {
    v15 = ndisSetAddWakeUpPattern(v3, (struct _NDIS_OID_REQUEST *)v5, &v18);
    v2 = v18;
    *((_DWORD *)a1 + 10) = v15;
    if ( v2 != 1 )
      return 0;
  }
  return v2;
}
