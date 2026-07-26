/*
 * XREFs of ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqD @ 0x1C00072AC (WPP_RECORDER_SF_qqqD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001A2CC (-ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0022B4C (-ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisQueryMiniportPacketFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A5080 (-ndisQueryMiniportPacketFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenPacketFilter@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A5310 (-ndisQueryOpenPacketFilter@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A6D7C (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePacketFilter(struct _NDIS_REQ_TRACKER *a1, int a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  __int64 v4; // rsi
  unsigned __int8 v5; // bl
  struct _NDIS_OPEN_BLOCK *v6; // r14
  int v7; // eax
  bool v9; // zf
  int OpenPacketFilter; // eax
  __int64 v11; // rax
  struct _NDIS_MINIPORT_BLOCK *v12; // rcx

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  v5 = 0;
  v6 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Du,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v2,
      (char)v6,
      v4);
  v7 = *(_DWORD *)(v4 + 4);
  switch ( v7 )
  {
    case 2:
      v9 = *(_QWORD *)a1 == 0LL;
      goto LABEL_17;
    case 0:
      if ( v6 )
      {
        OpenPacketFilter = ndisQueryOpenPacketFilter(v6, (struct _NDIS_OID_REQUEST *)v4);
        goto LABEL_19;
      }
      v9 = v2 == 0LL;
LABEL_17:
      if ( v9 )
        break;
      OpenPacketFilter = ndisQueryMiniportPacketFilter(v2, (struct _NDIS_OID_REQUEST *)v4);
      if ( OpenPacketFilter == 259 )
        break;
LABEL_19:
      *((_DWORD *)a1 + 10) = OpenPacketFilter;
      v5 = 1;
      break;
    case 1:
      if ( !v6 || (v5 = ndisSetOpenPacketFilter(v6, (struct _NDIS_OID_REQUEST *)v4, (int *)a1 + 10), v5 != 1) )
      {
        if ( *(_UNKNOWN **)(v4 + 104) != &ndisIntReqRestore )
          goto LABEL_8;
        v11 = *((_QWORD *)a1 + 2);
        v12 = v2;
        if ( v11 )
          v12 = *(struct _NDIS_MINIPORT_BLOCK **)(v11 + 32);
        v5 = ndisSetRestorePacketFilter(v12, (struct _NDIS_OID_REQUEST *)v4, (int *)a1 + 10);
        if ( v5 != 1 )
        {
LABEL_8:
          if ( v2 )
            v5 = ndisSetMiniportPacketFilter(v2, (struct _NDIS_OID_REQUEST *)v4, (int *)a1 + 10);
        }
      }
      break;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x3Eu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v2,
      (char)v6,
      v4,
      v5);
  return v5;
}
