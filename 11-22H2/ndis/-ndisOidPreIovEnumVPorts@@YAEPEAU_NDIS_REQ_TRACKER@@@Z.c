/*
 * XREFs of ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078650
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BFC4 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00752A8 (-ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075EF0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0075F6C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  struct _NDIS_OID_REQUEST *v2; // rbp
  unsigned int Blink_high; // r15d
  struct _NDIS_PF_BLOCK *PFBlock; // r13
  struct _NDIS_REQ_TRACKER *v5; // r12
  char v6; // bl
  int *v7; // rsi
  _DWORD *v8; // rcx
  int v9; // eax
  _NDIS_NIC_SWITCH_CAPABILITIES *v10; // r10
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  PVOID InformationBuffer; // rbx
  _BYTE *OidSourceHandle; // rax
  _BYTE *v15; // r8
  unsigned __int16 v16; // dx
  _LIST_ENTRY *v17; // rbp
  _NDIS_OPEN_BLOCK *v18; // r8
  struct _NDIS_VPORT_BLOCK *p_Blink; // rbx
  struct _NDIS_VPORT_BLOCK *Flink; // rdx
  __int64 v21; // rax
  bool v22; // zf
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // ebp
  __int64 v26; // rax
  KIRQL v27; // dl
  _DWORD *v28; // rax
  struct _NDIS_VPORT_BLOCK *v29; // r14
  unsigned int v30; // eax
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v31; // rbp
  struct _NDIS_VPORT_BLOCK *v32; // rdx
  KIRQL v33; // dl
  __int64 v34; // rax
  char v35[8]; // [rsp+30h] [rbp-88h]
  _LIST_ENTRY *VFByVFId; // [rsp+40h] [rbp-78h]
  _LIST_ENTRY *SwitchBySwitchId; // [rsp+48h] [rbp-70h]
  _BYTE *v38; // [rsp+50h] [rbp-68h]
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v39; // [rsp+58h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v40; // [rsp+60h] [rbp-58h]
  KIRQL NewIrql; // [rsp+C8h] [rbp+10h] BYREF
  int v43; // [rsp+D0h] [rbp+18h]
  unsigned int v44; // [rsp+D8h] [rbp+20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  Blink_high = 0;
  v40 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v38 = 0LL;
  PFBlock = 0LL;
  SwitchBySwitchId = 0LL;
  v5 = a1;
  VFByVFId = 0LL;
  v6 = 1;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x35u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)a1,
      v1);
  v2->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v7 = (int *)((char *)v5 + 40);
  v8 = (_DWORD *)*((_QWORD *)v5 + 4);
  if ( v8[1] != 12 )
    goto LABEL_15;
  *v7 = 0;
  if ( v8[12] < 0x1Cu )
  {
    v9 = -1073676268;
LABEL_8:
    v8[17] = 28;
    *v7 = v9;
    *(_DWORD *)(*((_QWORD *)v5 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v5 + 4) + 64LL) = 0;
    goto LABEL_16;
  }
  if ( v8[13] < 0x1Cu )
  {
    v9 = -1073676266;
    goto LABEL_8;
  }
  if ( !v1 )
  {
    v6 = 0;
    goto LABEL_16;
  }
  if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
  {
    SriovCurrentCapabilities = v1->SriovCurrentCapabilities;
    if ( !SriovCurrentCapabilities
      || v1->NicSwitchCurrentCapabilities == v10
      || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
    {
LABEL_15:
      *v7 = -1073741637;
      goto LABEL_16;
    }
  }
  InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
  *(_DWORD *)(*((_QWORD *)v5 + 4) + 60LL) = (_DWORD)v10;
  *(_DWORD *)(*((_QWORD *)v5 + 4) + 64LL) = 28;
  OidSourceHandle = ndisGetOidSourceHandle(v2);
  if ( OidSourceHandle )
  {
    if ( *OidSourceHandle == 18 )
      v15 = OidSourceHandle;
    v38 = v15;
  }
  if ( (*((_DWORD *)InformationBuffer + 1) & 2) != 0 )
  {
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *((_DWORD *)InformationBuffer + 2));
    if ( !SwitchBySwitchId )
    {
LABEL_25:
      *v7 = -1073741811;
      goto LABEL_26;
    }
  }
  if ( (*((_DWORD *)InformationBuffer + 1) & 1) != 0 )
  {
    v16 = *((_WORD *)InformationBuffer + 6);
    if ( v16 == 0xFFFF )
    {
      PFBlock = v1->PFBlock;
      if ( !PFBlock )
        goto LABEL_25;
      v17 = 0LL;
    }
    else
    {
      VFByVFId = ndisIovFindVFByVFId(v1, v16);
      v17 = VFByVFId;
      if ( !VFByVFId )
        goto LABEL_25;
    }
  }
  else
  {
    v17 = 0LL;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
  v18 = (_NDIS_OPEN_BLOCK *)v38;
  if ( !v38 )
  {
    if ( PFBlock )
    {
      Blink_high = *((_DWORD *)PFBlock + 7);
      p_Blink = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
    }
    else if ( v17 )
    {
      Blink_high = HIDWORD(v17[4].Blink);
      p_Blink = (struct _NDIS_VPORT_BLOCK *)&v17[5];
    }
    else if ( SwitchBySwitchId )
    {
      Blink_high = (unsigned int)SwitchBySwitchId[3].Flink;
      p_Blink = (struct _NDIS_VPORT_BLOCK *)&SwitchBySwitchId[3].Blink;
    }
    else
    {
      Blink_high = v1->NumActiveVPorts;
      p_Blink = (struct _NDIS_VPORT_BLOCK *)&v1->VPortList;
    }
    goto LABEL_57;
  }
  if ( PFBlock )
  {
    p_Blink = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
LABEL_49:
    Flink = (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink;
    while ( Flink != p_Blink )
    {
      if ( v17 || (v21 = 48LL, PFBlock) )
        v21 = 32LL;
      v22 = *(_LIST_ENTRY **)((char *)&Flink->AdapterLink.Flink + v21) == (_LIST_ENTRY *)v38;
      v23 = Blink_high + 1;
      Flink = (struct _NDIS_VPORT_BLOCK *)Flink->AdapterLink.Flink;
      if ( !v22 )
        v23 = Blink_high;
      Blink_high = v23;
    }
    goto LABEL_57;
  }
  if ( v17 )
  {
    p_Blink = (struct _NDIS_VPORT_BLOCK *)&v17[5];
    goto LABEL_49;
  }
  if ( SwitchBySwitchId )
  {
    p_Blink = (struct _NDIS_VPORT_BLOCK *)&SwitchBySwitchId[3].Blink;
    goto LABEL_49;
  }
  Blink_high = *((_DWORD *)v38 + 206);
  p_Blink = (struct _NDIS_VPORT_BLOCK *)(v38 + 832);
LABEL_57:
  v24 = *((_QWORD *)v5 + 4);
  v25 = 576 * Blink_high + 28;
  v44 = v25;
  *(_DWORD *)(v24 + 68) = v25;
  v26 = *((_QWORD *)v5 + 4);
  if ( v25 > *(_DWORD *)(v26 + 52) )
  {
    v27 = NewIrql;
    *v7 = -1073676266;
    v1->MiniportThread = 0LL;
    KeReleaseSpinLock(&v1->Lock, v27);
    goto LABEL_26;
  }
  v28 = *(_DWORD **)(v26 + 40);
  *v28 = 1835392;
  v28[4] = 28;
  v28[5] = Blink_high;
  v28[6] = 576;
  v29 = (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink;
  v39 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)(v28 + 7);
  v30 = 0;
  v43 = 0;
  if ( v29 == p_Blink )
    goto LABEL_75;
  v31 = v39;
  while ( v30 < Blink_high )
  {
    if ( VFByVFId || PFBlock )
    {
      v32 = (struct _NDIS_VPORT_BLOCK *)((char *)v29 - 48);
LABEL_70:
      v29 = (struct _NDIS_VPORT_BLOCK *)v29->AdapterLink.Flink;
      if ( !v18 )
        goto LABEL_72;
      goto LABEL_71;
    }
    if ( SwitchBySwitchId )
    {
      v32 = (struct _NDIS_VPORT_BLOCK *)((char *)v29 - 32);
      goto LABEL_70;
    }
    if ( !v18 )
    {
      v32 = v29;
      v29 = (struct _NDIS_VPORT_BLOCK *)v29->AdapterLink.Flink;
LABEL_72:
      ndisIovCopyVPortInfo(v31, v32);
      v31 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)((char *)v31 + 576);
      v18 = (_NDIS_OPEN_BLOCK *)v38;
      v30 = ++v43;
      goto LABEL_73;
    }
    v32 = (struct _NDIS_VPORT_BLOCK *)((char *)v29 - 16);
    v29 = (struct _NDIS_VPORT_BLOCK *)v29->AdapterLink.Flink;
LABEL_71:
    if ( v18 == v32->Open )
      goto LABEL_72;
LABEL_73:
    if ( v29 == p_Blink )
      break;
  }
  v5 = a1;
  v1 = v40;
  v25 = v44;
  v7 = (int *)((char *)a1 + 40);
LABEL_75:
  v33 = NewIrql;
  v1->MiniportThread = 0LL;
  KeReleaseSpinLock(&v1->Lock, v33);
  v34 = *((_QWORD *)v5 + 4);
  *v7 = 0;
  *(_DWORD *)(v34 + 60) = v25;
LABEL_26:
  v6 = 1;
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v35 = *v7;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x36u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v1,
      *(_QWORD *)v35);
  }
  return v6;
}
