/*
 * XREFs of ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C008289C
 * Callers:
 *     ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0015D00 (-ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0024220 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qs @ 0x1C008313C (WPP_RECORDER_SF_qs_ea_1C008313C.c)
 */

void __fastcall ndisQueuePowerIrp(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  const char *v5; // r8
  __int64 v6; // rax
  struct _WORK_QUEUE_ITEM *v7; // rbx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v5 = "SET";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v5 = "QUERY";
    WPP_RECORDER_SF_qs(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)v5, 146);
  }
  v6 = 4304LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 1 )
    v6 = 4336LL;
  v7 = (struct _WORK_QUEUE_ITEM *)(&a1->Header.Type + v6);
  *(void **)((char *)&a1->MiniportAdapterContext + v6) = a2;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  ndisReferenceMiniportNoCheck(a1, 0xDu);
  ExQueueWorkItem(v7, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
}
