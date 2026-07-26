/*
 * XREFs of ?ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078300
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1C0075100 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075F10 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreIovEnumVFs(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // r8
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  unsigned int Blink; // ebp
  _BYTE *v4; // r15
  _LIST_ENTRY *v5; // r12
  char v7; // r13
  int *v8; // rdi
  _DWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  _BYTE *OidSourceHandle; // rax
  __int64 v13; // rdx
  _LIST_ENTRY *p_VFList; // r15
  _LIST_ENTRY *Flink; // rdx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  __int64 v19; // rax
  KIRQL v20; // dl
  _DWORD *v21; // rax
  unsigned int v22; // ecx
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rdi
  struct _NDIS_NIC_SWITCH_VF_INFO *v25; // r12
  struct _NDIS_VF_BLOCK *v26; // rdx
  KIRQL v27; // dl
  __int64 v28; // rax
  __int64 v30; // [rsp+30h] [rbp-68h]
  _LIST_ENTRY *SwitchBySwitchId; // [rsp+40h] [rbp-58h]
  struct _NDIS_NIC_SWITCH_VF_INFO *v32; // [rsp+48h] [rbp-50h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+8h] BYREF
  struct _NDIS_OID_REQUEST *v34; // [rsp+A8h] [rbp+10h]
  unsigned int v35; // [rsp+B0h] [rbp+18h]
  _LIST_ENTRY *v36; // [rsp+B8h] [rbp+20h]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  Blink = 0;
  v34 = v1;
  v4 = 0LL;
  v36 = 0LL;
  v5 = 0LL;
  SwitchBySwitchId = 0LL;
  NewIrql = 0;
  v7 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x29u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)a1,
      v2);
    v1 = v34;
  }
  v1->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v8 = (int *)((char *)a1 + 40);
  v9 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( v9[1] != 12 )
    goto LABEL_46;
  *v8 = 0;
  if ( v9[12] < 0x18u )
  {
    v10 = -1073676268;
LABEL_8:
    v9[17] = 24;
    *v8 = v10;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
    goto LABEL_47;
  }
  if ( v9[13] < 0x18u )
  {
    v10 = -1073676266;
    goto LABEL_8;
  }
  if ( !v2 )
  {
    v7 = 0;
    goto LABEL_47;
  }
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 4608LL);
  if ( v11 && *(_QWORD *)(*(_QWORD *)a1 + 3568LL) && (*(_BYTE *)(v11 + 8) & 3) == 3 )
  {
    v9[15] = 0;
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 24;
    OidSourceHandle = ndisGetOidSourceHandle(v1);
    if ( OidSourceHandle )
    {
      if ( *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      v36 = (_LIST_ENTRY *)v4;
    }
    if ( (*(_DWORD *)(v13 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v2, *(_DWORD *)(v13 + 8)), (v5 = SwitchBySwitchId) != 0LL) )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
      if ( v4 )
      {
        p_VFList = (_LIST_ENTRY *)(v4 + 808);
        if ( v5 )
        {
          Flink = p_VFList->Flink;
          while ( Flink != p_VFList )
          {
            v16 = Flink[3].Flink == v5;
            v17 = Blink + 1;
            Flink = Flink->Flink;
            if ( !v16 )
              v17 = Blink;
            Blink = v17;
          }
        }
        else
        {
          Blink = (unsigned int)v36[50].Flink;
        }
      }
      else
      {
        if ( v5 )
          Blink = (unsigned int)v5[4].Blink;
        else
          Blink = v2->NumAllocatedVFs;
        p_VFList = &v2->VFList;
      }
      v18 = 1632 * Blink + 24;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 68LL) = v18;
      v19 = *((_QWORD *)a1 + 4);
      v35 = v18;
      if ( v18 <= *(_DWORD *)(v19 + 52) )
      {
        v21 = *(_DWORD **)(v19 + 40);
        v22 = 0;
        LODWORD(v34) = 0;
        *v21 = 1573248;
        v21[3] = 24;
        v21[4] = Blink;
        v21[5] = 1632;
        v32 = (struct _NDIS_NIC_SWITCH_VF_INFO *)(v21 + 6);
        v23 = p_VFList->Flink;
        if ( p_VFList->Flink != p_VFList )
        {
          v24 = v36;
          v25 = v32;
          do
          {
            if ( v22 >= Blink )
              break;
            v26 = (struct _NDIS_VF_BLOCK *)&v23[-1];
            if ( !v24 )
              v26 = (struct _NDIS_VF_BLOCK *)v23;
            v23 = v23->Flink;
            v36 = v23;
            if ( !SwitchBySwitchId || *((_LIST_ENTRY **)v26 + 8) == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v25, v26);
              v25 = (struct _NDIS_NIC_SWITCH_VF_INFO *)((char *)v25 + 1632);
              v23 = v36;
              v22 = (_DWORD)v34 + 1;
              LODWORD(v34) = (_DWORD)v34 + 1;
            }
          }
          while ( v23 != p_VFList );
          v18 = v35;
          v8 = (int *)((char *)a1 + 40);
        }
        v27 = NewIrql;
        v2->MiniportThread = 0LL;
        KeReleaseSpinLock(&v2->Lock, v27);
        v28 = *((_QWORD *)a1 + 4);
        *v8 = 0;
        *(_DWORD *)(v28 + 60) = v18;
      }
      else
      {
        v20 = NewIrql;
        *v8 = -1073676266;
        v2->MiniportThread = 0LL;
        KeReleaseSpinLock(&v2->Lock, v20);
      }
    }
    else
    {
      *v8 = -1073741811;
    }
  }
  else
  {
LABEL_46:
    *v8 = -1073741637;
  }
LABEL_47:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v30) = *v8;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Au,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v2,
      v30);
  }
  return v7;
}
