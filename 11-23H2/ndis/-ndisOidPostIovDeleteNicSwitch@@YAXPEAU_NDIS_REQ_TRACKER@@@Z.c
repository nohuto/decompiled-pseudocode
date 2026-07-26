/*
 * XREFs of ?ndisOidPostIovDeleteNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C154 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075990 (-ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075A24 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovDeleteNicSwitch(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rbx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x12u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
  if ( *(_QWORD *)a1
    && ndisIovNicSwitchWithoutIovSupported(v3)
    && ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) != &ndisIntReqGeneric
    && !*((_DWORD *)a1 + 10) )
  {
    v4 = *(_QWORD *)(v1 + 40);
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(v3, *(_DWORD *)(v4 + 8));
    ndisIovDeleteNicSwitch(v3, *(_DWORD *)(v4 + 8));
  }
}
