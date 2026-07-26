/*
 * XREFs of ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C009F1DC
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009AF0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C0027264 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C009EEAC (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C0001008 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00093D0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z @ 0x1C009FB4C (-ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z.c)
 */

void __fastcall ndisCancelOidRequestOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, void *a2, unsigned __int8 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY **p_Blink; // rbx
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY v12; // [rsp+58h] [rbp+17h] BYREF
  _OWORD v13[2]; // [rsp+68h] [rbp+27h] BYREF
  __int128 v14; // [rsp+88h] [rbp+47h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+67h] BYREF

  NewIrql = 0;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  ndisGrabOidCancellationList(&a1->OidRequestList, &v12, a2, a3);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  while ( 1 )
  {
    Flink = v12.Flink;
    if ( v12.Flink == &v12 )
      break;
    if ( v12.Flink->Blink != &v12 || (v9 = v12.Flink->Flink, v12.Flink->Flink->Blink != v12.Flink) )
      __fastfail(3u);
    p_Blink = &v12.Flink[-5].Blink;
    v12.Flink = v12.Flink->Flink;
    v11 = &v12;
    v9->Blink = &v12;
    *(_QWORD *)&v14 = (char *)Flink - 72;
    memset((char *)v13 + 8, 0, 24);
    *((_QWORD *)&v14 + 1) = 0x1C001000CLL;
    *(_QWORD *)&v13[0] = a1;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x9Bu,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)p_Blink,
        a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        (__int64)v9,
        (__int64)&CancelMiniportOidRequestEx,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        *((_DWORD *)p_Blink + 8),
        12);
    ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v13, (__int64)v11, v6, v7);
  }
}
