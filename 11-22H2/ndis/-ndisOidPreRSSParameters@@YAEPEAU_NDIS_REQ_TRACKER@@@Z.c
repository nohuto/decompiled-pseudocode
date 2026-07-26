/*
 * XREFs of ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012E94 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0087D00 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A50E4 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A5440 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5B74 (-ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A637C (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00A70C0 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreRSSParameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  __int64 v3; // rbx
  char v4; // di
  struct _NDIS_OPEN_BLOCK *v5; // rbp
  int *v6; // r15
  int v7; // r9d
  _BYTE v9[12]; // [rsp+50h] [rbp-38h] BYREF
  int v10; // [rsp+5Ch] [rbp-2Ch]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x89u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v1,
      (char)v5,
      v3);
  if ( *(_DWORD *)(v3 + 4) == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_24;
    v6 = (int *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = ndisQueryMiniportRSSParameters(v1, (struct _NDIS_OID_REQUEST *)v3);
    v4 = 1;
  }
  else
  {
    v6 = (int *)((char *)a1 + 40);
  }
  if ( !*(_DWORD *)(v3 + 4) )
  {
    if ( v5 )
    {
      *v6 = ndisQueryOpenRSSParameters(v5, (struct _NDIS_OID_REQUEST *)v3);
      v4 = 1;
      goto LABEL_24;
    }
    if ( v1 )
    {
      *v6 = ndisQueryMiniportRSSParameters(v1, (struct _NDIS_OID_REQUEST *)v3);
      v4 = 1;
    }
  }
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( !v5
      || !ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v3)
      || (v4 = ndisSetOpenRSSParameters(v5, (struct _NDIS_OID_REQUEST *)v3, v6), v4 != 1) )
    {
      if ( v1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 4LL) & 4) == 0 )
        {
          NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v9, v1);
          if ( (v10 & 0x800) != 0 )
            *(_QWORD *)(v3 + 144) = __rdtsc();
          else
            *(_QWORD *)(v3 + 144) = 0LL;
        }
        v4 = ndisSetMiniportRSSParameters(v1, (struct _NDIS_OID_REQUEST *)v3, v6);
        if ( v4 != 1 && (v1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 )
          v4 = ndisSetMiniportRSSv1ParametersForMiniportV2(v1, (struct _NDIS_OID_REQUEST *)v3, v6, v7);
      }
    }
  }
LABEL_24:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x8Au,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v1,
      (char)v5,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
