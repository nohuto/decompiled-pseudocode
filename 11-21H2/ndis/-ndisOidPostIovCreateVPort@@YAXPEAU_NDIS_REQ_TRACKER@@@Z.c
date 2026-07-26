/*
 * XREFs of ?ndisOidPostIovCreateVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0071A10
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C006F84C (-ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C006F8A0 (-ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  struct _NDIS_MINIPORT_BLOCK *v4; // rax
  struct _NDIS_VPORT_BLOCK *v5; // rbx
  void *v6; // rcx
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  unsigned int VPortId; // r8d
  _LIST_ENTRY *NextMiniport; // rcx
  _LIST_ENTRY *v10; // rax
  _NDIS_OPEN_BLOCK *Open; // r8
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_OpenLink; // rdx
  _LIST_ENTRY *v15; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // r8
  __int64 *j; // rax
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *p_SwitchLink; // rdx
  _LIST_ENTRY *v20; // rax
  struct _NDIS_VF_BLOCK *AttachedFunction; // rcx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  NewIrql = 0;
  v4 = v3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Fu,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v3,
      v1);
    v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  }
  if ( v4 )
  {
    v5 = *(struct _NDIS_VPORT_BLOCK **)(v1 + 152);
    if ( v5 )
    {
      if ( *((_DWORD *)a1 + 10) )
      {
        v6 = *(void **)(v1 + 152);
        v3->AllocatedVPortIndices[(unsigned __int64)v5->VPortParams.VPortId >> 3] &= ~(1 << (v5->VPortParams.VPortId & 7));
        ExFreePoolWithTag(v6, 0);
        goto LABEL_7;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
      Flink = (struct _NDIS_MINIPORT_BLOCK *)v3->VPortList.Flink;
      if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&v3->VPortList )
      {
LABEL_15:
        NextMiniport = (_LIST_ENTRY *)Flink->NextMiniport;
        v10 = NextMiniport->Flink;
        if ( NextMiniport->Flink->Blink != NextMiniport )
          goto LABEL_29;
        v5->AdapterLink.Flink = v10;
        v5->AdapterLink.Blink = NextMiniport;
        v10->Blink = &v5->AdapterLink;
        NextMiniport->Flink = &v5->AdapterLink;
        ++v3->NumActiveVPorts;
      }
      else
      {
        VPortId = v5->VPortParams.VPortId;
        while ( Flink->PnPFlags != VPortId )
        {
          if ( Flink->PnPFlags <= VPortId )
          {
            Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
            if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)&v3->VPortList )
              continue;
          }
          goto LABEL_15;
        }
      }
      Open = v5->Open;
      for ( i = Open->VPortList.Flink; i != &Open->VPortList; i = i->Flink )
      {
        if ( HIDWORD(i[6].Blink) > v5->VPortParams.VPortId )
          break;
      }
      Blink = i->Blink;
      p_OpenLink = &v5->OpenLink;
      v15 = Blink->Flink;
      if ( Blink->Flink->Blink == Blink )
      {
        v5->OpenLink.Blink = Blink;
        p_OpenLink->Flink = v15;
        v15->Blink = p_OpenLink;
        Blink->Flink = p_OpenLink;
        ++Open->NumActiveVPorts;
        NicSwitch = v5->NicSwitch;
        for ( j = (__int64 *)*((_QWORD *)NicSwitch + 7); j != (__int64 *)((char *)NicSwitch + 56); j = (__int64 *)*j )
        {
          if ( *((_DWORD *)j + 23) > v5->VPortParams.VPortId )
            break;
        }
        v18 = (_LIST_ENTRY *)j[1];
        p_SwitchLink = &v5->SwitchLink;
        v20 = v18->Flink;
        if ( v18->Flink->Blink == v18 )
        {
          p_SwitchLink->Flink = v20;
          v5->SwitchLink.Blink = v18;
          v20->Blink = p_SwitchLink;
          v18->Flink = p_SwitchLink;
          ++*((_DWORD *)NicSwitch + 12);
          *((_DWORD *)NicSwitch + 24) += v5->VPortParams.NumQueuePairs;
          AttachedFunction = (struct _NDIS_VF_BLOCK *)v5->AttachedFunction;
          if ( (v5->Flags & 2) != 0 )
            ndisIovAddVPortToVFList(AttachedFunction, v5);
          else
            ndisIovAddVPortToPFList(AttachedFunction, v5);
          v3->MiniportThread = 0LL;
          KeReleaseSpinLock(&v3->Lock, NewIrql);
          goto LABEL_7;
        }
      }
LABEL_29:
      __fastfail(3u);
    }
  }
LABEL_7:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x30u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)v3,
      v1);
}
