/*
 * XREFs of SmStoreCompressionStop @ 0x1409D7AC8
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A437C4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ExQueueWorkItemToPartition @ 0x1402B982C (ExQueueWorkItemToPartition.c)
 *     SmpGetProcessPartition @ 0x140344D10 (SmpGetProcessPartition.c)
 *     SmpKeyedStoreEntryGet @ 0x140344D74 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1405C322C (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1406536D4 (MmQueryProcessWorkingSetSwapPages.c)
 *     SmSwapStore @ 0x140681864 (SmSwapStore.c)
 */

int __fastcall SmStoreCompressionStop(int a1)
{
  __int64 ProcessPartition; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // edi
  _DWORD **v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+50h] [rbp-20h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp+28h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF

  BugCheckParameter2[1] = 0LL;
  memset(&Event, 0, sizeof(Event));
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = SmpGetProcessPartition((__int64)Process);
  v3 = SmpKeyedStoreEntryGet(ProcessPartition + 2072, &Process, 0, 0);
  v4 = v3;
  if ( v3 )
    v5 = *(unsigned __int16 *)(v3 + 16);
  else
    v5 = *(_DWORD *)(ProcessPartition + 2112);
  if ( v5 != -1 )
  {
    v9 = ProcessPartition;
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    BugCheckParameter2[0] = 0LL;
    BugCheckParameter2[2] = (ULONG_PTR)SmpFlushStorePages;
    BugCheckParameter2[3] = (ULONG_PTR)&v9;
    ExQueueWorkItemToPartition(BugCheckParameter2, 0, 0xFFFFFFFF, *(_QWORD *)(ProcessPartition + 1936));
    LODWORD(v3) = KeWaitForSingleObject(&Event, WrKernel, 0, 0, 0LL);
    if ( v4 )
    {
      SmSwapStore(*(_QWORD *)(ProcessPartition + 1936), 1);
      if ( a1 )
      {
        v6 = (_DWORD **)SmKmStoreRefFromStoreIndex(ProcessPartition, v5 & 0x3FF);
        SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v7, *v6, 0LL);
      }
      LODWORD(v3) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v13);
      if ( (int)v3 < 0 )
        LODWORD(v3) = SmSwapStore(*(_QWORD *)(ProcessPartition + 1936), 2);
    }
  }
  return v3;
}
