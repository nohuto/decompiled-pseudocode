/*
 * XREFs of ?ndisOidPreIovDeleteNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqDD @ 0x1C00070B4 (WPP_RECORDER_SF_qqqDD.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0007BFC (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BFC4 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075EF0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreIovDeleteNicSwitch(struct _NDIS_REQ_TRACKER *a1, int a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  __int64 v4; // rsi
  char v5; // di
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  __int64 v9; // rax
  _LIST_ENTRY *SwitchBySwitchId; // rax

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  v5 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0x10u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v2,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v4);
  if ( !*(_QWORD *)a1 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported(v2) )
  {
    if ( ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) != &ndisIntReqGeneric )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_8;
    }
LABEL_4:
    v5 = 0;
    goto LABEL_8;
  }
  NicSwitchCurrentCapabilities = v2->NicSwitchCurrentCapabilities;
  if ( !NicSwitchCurrentCapabilities
    || NicSwitchCurrentCapabilities->Header.Revision < 2u
    || NicSwitchCurrentCapabilities->Header.Size < 0x74u
    || !NicSwitchCurrentCapabilities->MaxNumSwitches
    || *(_DWORD *)(v4 + 4) != 1 )
  {
    goto LABEL_7;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( !*(_DWORD *)(v4 + 48) )
  {
    *(_DWORD *)(v4 + 56) = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(v4 + 40);
  if ( !*(_BYTE *)(v9 + 1) || *(_DWORD *)(v9 + 8) )
    goto LABEL_19;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v6, 0);
  if ( SwitchBySwitchId )
  {
    if ( LODWORD(SwitchBySwitchId[3].Flink) <= 1 && !LODWORD(SwitchBySwitchId[4].Blink) )
      goto LABEL_4;
LABEL_19:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_8;
  }
  *((_DWORD *)a1 + 10) = 0;
LABEL_8:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0x11u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v5,
      *((_DWORD *)a1 + 10));
  return v5;
}
