/*
 * XREFs of ?ndisOidPreEthMulticastOid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A13F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C000798C (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0007BFC (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A5EB0 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     WPP_RECORDER_SF_qqqqD @ 0x1C00A96EC (WPP_RECORDER_SF_qqqqD_ea_1C00A96EC.c)
 */

unsigned __int8 __fastcall ndisOidPreEthMulticastOid(struct _NDIS_REQ_TRACKER *a1, int a2, int a3, int a4)
{
  __int64 v4; // rsi
  struct _NDIS_OPEN_BLOCK *v6; // r15
  unsigned __int8 v7; // di
  struct _NDIS_MINIPORT_BLOCK *v8; // rbp
  int v10; // [rsp+20h] [rbp-48h]

  v4 = *((_QWORD *)a1 + 4);
  v6 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v7 = 0;
  v8 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x45u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v8,
      (char)v6,
      v4);
  if ( *(_DWORD *)(v4 + 4) == 1 )
  {
    if ( *((_QWORD *)a1 + 3) )
    {
      v7 = ndisSetOpenEthAddDeleteMulticast(v6, (struct _NDIS_OID_REQUEST *)v4, (int *)a1 + 10);
      if ( v7 != 1 && v8 && *(_DWORD *)(v4 + 32) == 16843011 )
        v7 = ndisSetMiniportEthMulticastList(v8, (struct _NDIS_OID_REQUEST *)v4, (int *)a1 + 10);
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      a4,
      v10,
      (char)v8,
      (char)v6,
      *((_QWORD *)a1 + 4),
      (char)a1,
      v7);
  return v7;
}
