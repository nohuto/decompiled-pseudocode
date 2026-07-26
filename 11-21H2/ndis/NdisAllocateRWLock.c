/*
 * XREFs of NdisAllocateRWLock @ 0x1C00227D0
 * Callers:
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x1C002EC68 (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C008AE64 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C0155C5C (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C0022858 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  struct _NDIS_RW_LOCK_EX *v2; // rdi
  __int64 Pool2; // rbx

  v2 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 40LL, 2003977294);
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)Pool2 = 827086674;
    if ( ndisInitializeRWLock((struct _NDIS_RW_LOCK_EX *)Pool2, NdisHandle) )
      return (PNDIS_RW_LOCK_EX)Pool2;
  }
  else
  {
    Pool2 = 0LL;
  }
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return v2;
}
