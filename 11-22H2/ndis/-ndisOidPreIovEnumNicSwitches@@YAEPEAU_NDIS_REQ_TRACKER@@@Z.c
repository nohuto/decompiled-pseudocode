/*
 * XREFs of ?ndisOidPreIovEnumNicSwitches@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00780E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BFC4 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C0074FB4 (-ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovEnumNicSwitches(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  char v3; // si
  struct _NDIS_MINIPORT_BLOCK *v4; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  unsigned int NumSwitches; // r12d
  unsigned int v7; // ebp
  struct _NDIS_MINIPORT_BLOCK *v8; // rax
  KIRQL v9; // dl
  wchar_t *Buffer; // rax
  unsigned int v11; // r15d
  struct _NDIS_NIC_SWITCH_INFO *v12; // r13
  _LIST_ENTRY *p_NicSwitchList; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *Flink; // r14
  KIRQL v15; // dl
  struct _NDIS_MINIPORT_BLOCK *v16; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1;
  NewIrql = 0;
  v3 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x13u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      a1);
  HIDWORD(a1[4]->Reserved28) = 0;
  if ( (*(_DWORD *)(&a1[4]->Header + 1) & 0xFFFFFFFD) != 0 )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_18;
  }
  if ( v1 )
  {
    if ( ndisIovNicSwitchWithoutIovSupported(v1)
      || (SriovCurrentCapabilities = v1->SriovCurrentCapabilities) != 0LL
      && v1->NicSwitchCurrentCapabilities
      && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
      NumSwitches = v1->NumSwitches;
      v7 = 572 * NumSwitches + 16;
      LODWORD(a1[4]->OpenQueue) = v7;
      v8 = a1[4];
      if ( v7 <= v8->PcwDatapathEventMask )
      {
        Buffer = v8->Reserved4.Buffer;
        v11 = 0;
        *(_DWORD *)Buffer = 1048960;
        v12 = (struct _NDIS_NIC_SWITCH_INFO *)(Buffer + 8);
        *((_DWORD *)Buffer + 1) = 16;
        *((_DWORD *)Buffer + 2) = NumSwitches;
        *((_DWORD *)Buffer + 3) = 572;
        p_NicSwitchList = &v1->NicSwitchList;
        Flink = (struct _NDIS_NIC_SWITCH_BLOCK *)v1->NicSwitchList.Flink;
        while ( Flink != (struct _NDIS_NIC_SWITCH_BLOCK *)p_NicSwitchList && v11 < NumSwitches )
        {
          ndisIovCopyNicSwitchInfo(v12, Flink);
          Flink = *(struct _NDIS_NIC_SWITCH_BLOCK **)Flink;
          p_NicSwitchList = &v1->NicSwitchList;
          v12 = (struct _NDIS_NIC_SWITCH_INFO *)((char *)v12 + 572);
          ++v11;
        }
        v15 = NewIrql;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v15);
        v16 = a1[4];
        *((_DWORD *)a1 + 10) = 0;
        HIDWORD(v16->Reserved28) = v7;
      }
      else
      {
        v9 = NewIrql;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v9);
        *((_DWORD *)a1 + 10) = -1073676266;
      }
      goto LABEL_18;
    }
    goto LABEL_4;
  }
  v3 = 0;
LABEL_18:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x14u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v1,
      *((_DWORD *)a1 + 10));
  return v3;
}
