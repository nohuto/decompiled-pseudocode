/*
 * XREFs of ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007C88 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C154 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075F10 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EFDC (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovNicSwitchParameters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r13
  char v2; // bl
  __int64 v3; // rsi
  char v4; // r15
  _DWORD *v5; // r12
  int v7; // eax
  unsigned int v8; // ebp
  int *v9; // rdi
  int v10; // eax
  void **v11; // r15
  int v12; // eax
  int v13; // eax
  struct _NDIS_MINIPORT_BLOCK *v14; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _LIST_ENTRY *SwitchBySwitchId; // rdx
  int v17; // eax
  unsigned int v18; // r8d
  _BYTE *OidSourceHandle; // rax

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x19u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v1,
      v3);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = 548;
  v9 = (int *)((char *)a1 + 40);
  if ( v7 == 12 )
  {
    *v9 = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x224u )
    {
      v10 = -1073676268;
LABEL_8:
      *(_DWORD *)(v3 + 68) = 548;
      *v9 = v10;
LABEL_9:
      v2 = 1;
      goto LABEL_55;
    }
    if ( *(_DWORD *)(v3 + 52) < 0x224u )
    {
      v10 = -1073676266;
      goto LABEL_8;
    }
    v11 = (void **)(v3 + 40);
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) >= 2u )
    {
      v8 = 552;
      if ( *(_DWORD *)(v3 + 48) < 0x228u )
      {
        v12 = -1073676268;
LABEL_15:
        *(_DWORD *)(v3 + 68) = 552;
        *v9 = v12;
LABEL_16:
        v2 = 1;
        v4 = 0;
        goto LABEL_55;
      }
      if ( *(_DWORD *)(v3 + 52) < 0x228u )
      {
        v12 = -1073676266;
        goto LABEL_15;
      }
    }
  }
  else
  {
    if ( v7 != 1 )
    {
      v2 = 1;
      *v9 = -1073741637;
      goto LABEL_55;
    }
    *v9 = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x224u )
    {
      *(_DWORD *)(v3 + 56) = 548;
      *v9 = -1073676268;
      goto LABEL_9;
    }
    v11 = (void **)(v3 + 40);
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) >= 2u )
    {
      *v9 = 0;
      v8 = 552;
      if ( *(_DWORD *)(v3 + 48) < 0x228u )
      {
        *(_DWORD *)(v3 + 56) = 552;
        *v9 = -1073676268;
        goto LABEL_16;
      }
    }
  }
  if ( !v1 )
    goto LABEL_54;
  v13 = *(_DWORD *)(v3 + 4);
  if ( v13 == 12 )
  {
    *(_DWORD *)(v3 + 60) = 0;
    *(_DWORD *)(v3 + 64) = v8;
LABEL_28:
    v5 = *v11;
    goto LABEL_29;
  }
  if ( v13 == 1 )
  {
    *(_DWORD *)(v3 + 52) = v8;
    goto LABEL_28;
  }
LABEL_29:
  if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
  {
    SriovCurrentCapabilities = v1->SriovCurrentCapabilities;
    if ( !SriovCurrentCapabilities
      || !v1->NicSwitchCurrentCapabilities
      || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
    {
      goto LABEL_33;
    }
  }
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v14, v5[3]);
  if ( !SwitchBySwitchId )
  {
LABEL_36:
    *v9 = -1073741811;
    goto LABEL_34;
  }
  v17 = *(_DWORD *)(v3 + 4);
  if ( v17 == 12 )
  {
    memmove(*v11, (char *)&SwitchBySwitchId[6].Flink + 4, v8);
    *v9 = 0;
    *(_DWORD *)(v3 + 60) = v8;
    goto LABEL_34;
  }
  if ( v17 != 1 )
  {
LABEL_54:
    v4 = 0;
    goto LABEL_55;
  }
  if ( v8 >= 0x228 )
  {
    if ( ndisIovHWvRSSSupported(v1) )
    {
      if ( !v18 || v18 > v1->NicSwitchCurrentCapabilities->MaxNumQueuePairsForDefaultVPort )
        goto LABEL_36;
    }
    else if ( v18 != 1 )
    {
      *v9 = -1073741637;
    }
  }
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
  if ( !OidSourceHandle || *OidSourceHandle != 18 )
  {
LABEL_33:
    *v9 = -1073741637;
LABEL_34:
    v4 = 0;
    v2 = 1;
    goto LABEL_55;
  }
  v4 = (char)OidSourceHandle;
  if ( (v5[1] & 0x10000) == 0 || *((_WORD *)v5 + 8) > 0x200u )
  {
    v2 = 1;
    *v9 = -1073741811;
  }
LABEL_55:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Au,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v1,
      v4,
      v2,
      *v9);
  return v2;
}
