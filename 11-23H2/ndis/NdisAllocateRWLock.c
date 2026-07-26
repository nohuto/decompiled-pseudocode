/*
 * XREFs of NdisAllocateRWLock @ 0x1C001B350
 * Callers:
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x1C003538C (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C0090B14 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0163044 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C001B3C8 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  __int64 Pool2; // rax
  struct _NDIS_RW_LOCK_EX *v3; // rbx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  Pool2 = ExAllocatePool2(64LL, 40LL, 2003977294);
  v3 = (struct _NDIS_RW_LOCK_EX *)Pool2;
  if ( Pool2 )
  {
    v5 = Pool2;
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)Pool2 = 827086674;
    if ( ndisInitializeRWLock((struct _NDIS_RW_LOCK_EX *)Pool2, NdisHandle) )
      return v3;
  }
  else
  {
    v5 = 0LL;
  }
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v5);
  return 0LL;
}
