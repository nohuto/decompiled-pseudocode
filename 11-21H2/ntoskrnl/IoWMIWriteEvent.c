/*
 * XREFs of IoWMIWriteEvent @ 0x140223810
 * Callers:
 *     sub_1405D868C @ 0x1405D868C (sub_1405D868C.c)
 *     sub_1405D8720 @ 0x1405D8720 (sub_1405D8720.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402E0130 @ 0x1402E0130 (sub_1402E0130.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIWriteEvent(PVOID WnodeEventItem)
{
  NTSTATUS v1; // edi
  int v3; // ebx
  _LIST_ENTRY *PoolWithTag; // rbp
  unsigned int v5; // ebx
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  struct _LIST_ENTRY *v8; // rbx
  NTSTATUS result; // eax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf

  v1 = 0;
  if ( !qword_140C164D8 )
    return -1073741823;
  v3 = *((_DWORD *)WnodeEventItem + 11);
  if ( (v3 & 0x60000) != 0 )
  {
    v10 = *(_DWORD *)WnodeEventItem;
    v11 = v3 & 0x20000;
    v12 = *((unsigned __int16 *)WnodeEventItem + 4);
    if ( (unsigned int)v10 < 0x30 )
      return -1073741789;
    if ( v11 )
    {
      if ( (unsigned int)v10 <= 0xFFFF )
        goto LABEL_16;
    }
    else if ( v10 >= 0 )
    {
LABEL_16:
      result = sub_140460192(v12, WnodeEventItem, 48LL, 3222536192LL, 0);
      if ( v11 )
        return result;
      goto LABEL_3;
    }
    return -2147483643;
  }
LABEL_3:
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x77696D57u);
  if ( !PoolWithTag )
    return -1073741670;
  v5 = *((_DWORD *)WnodeEventItem + 1);
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C16660);
  v7 = sub_1402E0130(v5);
  v8 = (struct _LIST_ENTRY *)v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 48));
  KeReleaseSpinLockFromDpcLevel(&qword_140C16660);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  *((_DWORD *)WnodeEventItem + 10) = *((_DWORD *)WnodeEventItem + 2);
  PoolWithTag[1].Flink = v8;
  PoolWithTag[1].Blink = (struct _LIST_ENTRY *)WnodeEventItem;
  ExInterlockedInsertTailList(&stru_140C03668, PoolWithTag, &Lock);
  if ( _InterlockedIncrement(&dword_140C16508) == 1 )
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  return v1;
}
