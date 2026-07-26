/*
 * XREFs of ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F9B4
 * Callers:
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F700 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C003DA16 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003EF92 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1C003F0BA (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C003F176 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C003F50C (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F72C (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1C00ACAE4 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00B0FDC (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3218 (PktMonClientNblDropNdis.c)
 */

bool __fastcall ndisWdfSetBusyAsync(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rdi
  struct _NET_BUFFER_LIST *v7; // rsi
  unsigned int v10; // r12d
  char v11; // r13
  char v12; // bl
  _DWORD *v13; // rcx
  char v15; // r15
  __int64 v16; // rcx
  int v17; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  __int64 v19; // [rsp+20h] [rbp-40h]
  KIRQL NewIrql; // [rsp+40h] [rbp-20h]
  struct _NET_BUFFER_LIST *v21; // [rsp+48h] [rbp-18h] BYREF
  struct _LIST_ENTRY v22; // [rsp+50h] [rbp-10h] BYREF
  char v23; // [rsp+A0h] [rbp+40h] BYREF
  int v24; // [rsp+A8h] [rbp+48h]

  v24 = a2;
  v5 = *(_QWORD *)(a1 + 4448);
  v22.Blink = &v22;
  v7 = 0LL;
  v22.Flink = &v22;
  v21 = 0LL;
  v23 = 0;
  v10 = 0;
  v11 = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  if ( ndisIsPowerReferencedForSelectiveSuspend((struct _NDIS_SELECTIVE_SUSPEND *)v5, 1) )
  {
    v12 = ndisIncrementAsyncIdleCountersLocked(v5, v24, a3);
    ndisSelectiveSuspendSetResumeBusyReason(v13, 0, a3, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)v5, NewIrql);
    return v12;
  }
  if ( a3 == 54 )
  {
    v15 = 1;
    goto LABEL_6;
  }
  ndisPendWorkOnSetBusyAsyncLocked(
    v5,
    (unsigned __int64 (*)(void *, struct _NET_BUFFER_LIST *))a3,
    a4,
    a5,
    &v21,
    &v22,
    &v23);
  v15 = v23;
  v7 = v21;
  if ( v23 )
  {
LABEL_6:
    if ( !*(_DWORD *)(v5 + 512)
      && !*(_DWORD *)(v5 + 516)
      && !*(_DWORD *)(v5 + 528)
      && !*(_DWORD *)(v5 + 532)
      && !*(_DWORD *)(v5 + 520)
      && !*(_DWORD *)(v5 + 524)
      && !*(_DWORD *)(v5 + 576)
      && !*(_DWORD *)(v5 + 508) )
    {
      v11 = 1;
      KeClearEvent((PRKEVENT)(v5 + 272));
      v10 = a3;
    }
    ndisIncrementAsyncIdleCountersLocked(v5, v24, a3);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v5, NewIrql);
  if ( v15 && v11 )
    ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)a1, 0, 1);
  if ( v7 )
  {
    if ( byte_1C00F5390 && (*(_DWORD *)(a1 + 5864) & 2) != 0 )
      PktMonClientNblDropNdis(a1 + 5808, (_DWORD)v7, v17, 2, -1071448017, -536866804);
    Alignment = v7;
    do
    {
      Alignment->Status = -1071448052;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
    ndisMSendNetBufferListsCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v7, 0, 0);
  }
  if ( v22.Flink != &v22 )
    ndisCancelDequeuedDirectOidRequests((struct _NDIS_MINIPORT_BLOCK *)a1, &v22);
  if ( v10 )
  {
    if ( (byte_1C00F7641 & 8) != 0 )
    {
      LODWORD(v19) = v10;
      McTemplateK0qq_EtwWriteTransfer(
        v16,
        &SSResumeRequested,
        (const GUID *)(a1 + 4008),
        (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF,
        v19);
    }
  }
  return a3 == 54;
}
