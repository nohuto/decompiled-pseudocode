/*
 * XREFs of ?ndisOidPostIovCreateNicSwitch@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0076CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C154 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0075DA0 (-ndisIovFinalizeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAU_ND.c)
 *     ?ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAPEAU_NDIS_PF_BLOCK@@PEAPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00764BC (-ndisIovInitializeNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_PARAMETERS@@PEAPE.c)
 */

void __fastcall ndisOidPostIovCreateNicSwitch(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r13
  struct _NDIS_NIC_SWITCH_BLOCK *v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // r15
  struct _NDIS_PF_BLOCK *v4; // r14
  struct _NDIS_VPORT_BLOCK *v5; // rdi
  struct _NDIS_NIC_SWITCH_PARAMETERS *v7; // r12
  int v8; // eax
  struct _NDIS_NIC_SWITCH_BLOCK *v9; // [rsp+80h] [rbp+40h] BYREF
  struct _NDIS_PF_BLOCK *v10; // [rsp+88h] [rbp+48h] BYREF
  struct _NDIS_VPORT_BLOCK *v11; // [rsp+90h] [rbp+50h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0xEu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
  if ( *(_QWORD *)a1 )
  {
    if ( ndisIovNicSwitchWithoutIovSupported(v3) )
    {
      if ( ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) != &ndisIntReqGeneric && !*((_DWORD *)a1 + 10) )
      {
        v7 = *(struct _NDIS_NIC_SWITCH_PARAMETERS **)(v1 + 40);
        v8 = ndisIovInitializeNicSwitch(v3, v7, &v9, &v10, &v11);
        v5 = v11;
        v4 = v10;
        v2 = v9;
        *((_DWORD *)a1 + 10) = v8;
        if ( !v8 )
          *((_DWORD *)a1 + 10) = ndisIovFinalizeNicSwitch(v3, v7, v2, v4, v5);
      }
    }
  }
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0xFu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v3,
      v1);
}
