/*
 * XREFs of ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001BDD4 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001E44C (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C001E5B8 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009EB80 (-ndisQueryMiniportEthMulticastList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009EE9C (-ndisQueryOpenEthMulticastList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009FFC0 (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreEthMulticastList(struct _NDIS_REQ_TRACKER *a1, int a2)
{
  __int64 v2; // rdi
  struct _NDIS_OPEN_BLOCK *v4; // r14
  unsigned __int8 v5; // si
  struct _NDIS_MINIPORT_BLOCK *v6; // rbp
  int v7; // eax
  int OpenEthMulticastList; // eax
  __int64 v10; // rax
  struct _NDIS_MINIPORT_BLOCK *v11; // rcx
  __int64 v12; // [rsp+40h] [rbp-28h]

  v2 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x53u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)v6,
      (char)v4,
      v2,
      a1);
  v7 = *(_DWORD *)(v2 + 4);
  switch ( v7 )
  {
    case 2:
      goto LABEL_15;
    case 0:
      if ( *((_QWORD *)a1 + 3) )
      {
        OpenEthMulticastList = ndisQueryOpenEthMulticastList(v4, (struct _NDIS_OID_REQUEST *)v2);
LABEL_17:
        *((_DWORD *)a1 + 10) = OpenEthMulticastList;
        v5 = 1;
        break;
      }
LABEL_15:
      if ( !*(_QWORD *)a1 )
        break;
      OpenEthMulticastList = ndisQueryMiniportEthMulticastList(v6, (struct _NDIS_OID_REQUEST *)v2);
      goto LABEL_17;
    case 1:
      if ( !v4 || (v5 = ndisSetOpenEthMulticastList(v4, (struct _NDIS_OID_REQUEST *)v2, (int *)a1 + 10), v5 != 1) )
      {
        if ( *(_UNKNOWN **)(v2 + 104) == &ndisIntReqRestore )
        {
          v10 = *((_QWORD *)a1 + 2);
          v11 = v6;
          if ( v10 )
            v11 = *(struct _NDIS_MINIPORT_BLOCK **)(v10 + 32);
          ndisSetRestoreMulticastList(v11, (struct _NDIS_OID_REQUEST *)v2);
        }
        if ( v6 )
          v5 = ndisSetMiniportEthMulticastList(v6, (struct _NDIS_OID_REQUEST *)v2, (int *)a1 + 10);
      }
      break;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x54u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)v6,
      (char)v4,
      v5,
      v12);
  }
  return v5;
}
