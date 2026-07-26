/*
 * XREFs of ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092664
 * Callers:
 *     ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00903B0 (-ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00936B8 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008CA00 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C008D854 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00939FC (-ndisSetMiniportEnableWakeUp@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094D20 (-ndisXlatePMParametersToWakeUpEnableOid@@YAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreSetPMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // di
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v5; // rcx
  __int64 v6; // r14
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  __int128 *v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  int v13; // eax
  char v15[4]; // [rsp+38h] [rbp-20h]
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 1;
  v16 = 1;
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = MiniportFromReqTracker;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x32u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)MiniportFromReqTracker,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_34;
  }
  v8 = *(__int128 **)(v1 + 40);
  if ( *(_BYTE *)v8 != 0x80 || !*((_BYTE *)v8 + 1) || *((_WORD *)v8 + 1) < 0x10u )
  {
    *((_DWORD *)a1 + 10) = -1073676267;
    goto LABEL_34;
  }
  v9 = *((_DWORD *)v8 + 1);
  if ( (v9 & 2) != 0 && (unsigned int)(v7->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) > 2
    || (v9 & 0xFFFFFFFD & v7->PMAdvertisedCapabilities.SupportedWoLPacketPatterns) != (v9 & 0xFFFFFFFD)
    || (*((_DWORD *)v8 + 2) & v7->PMAdvertisedCapabilities.SupportedProtocolOffloads) != *((_DWORD *)v8 + 2)
    || (*((_DWORD *)v8 + 3) & 1) != 0 && (unsigned int)(v7->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2) > 2 )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_34;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    v11 = v6 + 308;
    goto LABEL_19;
  }
  v10 = *((_QWORD *)a1 + 1);
  if ( v10 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    v11 = v10 + 728;
LABEL_19:
    v12 = *v8;
    if ( *(_DWORD *)(v1 + 48) >= 0x14u )
    {
      *(_OWORD *)v11 = v12;
      *(_DWORD *)(v11 + 16) = *((_DWORD *)v8 + 4);
    }
    else
    {
      *(_OWORD *)v11 = v12;
    }
    ndisGetCombinedPMConfig(v7, &v7->PMCurrentParameters);
    v16 = 0;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_31;
  if ( v7->MajorNdisVersion <= 6u && (v7->MajorNdisVersion != 6 || v7->MinorNdisVersion < 0x14u) )
  {
    ndisXlatePMParametersToWakeUpEnableOid((struct _NDIS_OID_REQUEST *)v1);
    v13 = ndisSetMiniportEnableWakeUp(v7, (struct _NDIS_OID_REQUEST *)v1, &v16);
    v2 = v16;
    *((_DWORD *)a1 + 10) = v13;
    if ( v2 == 1 )
      goto LABEL_34;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqGeneric
    || (v7->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
  {
LABEL_31:
    v2 = 0;
  }
  else
  {
    v2 = 1;
  }
LABEL_34:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x33u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)v7,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v15);
  }
  return v2;
}
