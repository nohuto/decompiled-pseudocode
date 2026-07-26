/*
 * XREFs of ?ndisOidPreRSSv2Parameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007AF8 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0087594 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0087650 (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C008814C (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0088574 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 */

char __fastcall ndisOidPreRSSv2Parameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  __int64 v3; // rbx
  char v4; // di
  struct _NDIS_OPEN_BLOCK *v5; // r15
  int *v6; // r14

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
      (char)v1,
      (char)v5,
      v3);
  if ( *(_DWORD *)(v3 + 4) == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_17;
    v6 = (int *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = ndisQueryMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3);
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
      *v6 = ndisQueryOpenRSSv2Parameters(v5, (struct _NDIS_OID_REQUEST *)v3);
      v4 = 1;
      goto LABEL_17;
    }
    if ( v1 )
    {
      *v6 = ndisQueryMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3);
      v4 = 1;
    }
  }
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( !v5 || (v4 = ndisSetOpenRSSv2Parameters(v5, (struct _NDIS_OID_REQUEST *)v3, v6), v4 != 1) )
    {
      if ( v1 )
        v4 = ndisSetMiniportRSSv2Parameters(v1, (struct _NDIS_OID_REQUEST *)v3, v6);
    }
  }
LABEL_17:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Du,
      (struct _GUID *)&WPP_aaef0678e9a53a35292f438c4061d952_Traceguids,
      (char)v1,
      (char)v5,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
