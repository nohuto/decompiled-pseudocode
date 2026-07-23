/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x1405CBD78
 * Callers:
 *     SmKmStoreHelperWorker @ 0x14036B770 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1405CBCAC (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x140368EA0 (SmSetThreadPagePriority.c)
 *     ZwUnlockVirtualMemory @ 0x14041EC50 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     SmFpAllocate @ 0x14046638E (SmFpAllocate.c)
 *     SmFpFree @ 0x1404664A8 (SmFpFree.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1405CB3AC (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmKmUnlockMdl @ 0x1405CC45C (SmKmUnlockMdl.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405CC614 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405CC734 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45E10 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140A45FD4 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // ebx
  volatile LONG *v10; // rcx
  struct _MDL *v11; // r14
  int v12; // r15d
  struct _MDL *v13; // r12
  PVOID v14; // rcx
  int v15; // eax
  ULONG_PTR v16; // rcx
  PVOID v17; // rcx
  int v18; // eax
  struct _KTHREAD *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = a2 - 2;
  if ( !v5 )
  {
    RegionSize = *(_QWORD *)(a3 + 8);
    BaseAddress = (PVOID)MmStoreAllocateVirtualMemory();
    v17 = BaseAddress;
    if ( BaseAddress )
    {
      if ( *(_QWORD *)(a1 + 112) )
      {
        if ( (*(_DWORD *)(a3 + 32) & 1) == 0 )
        {
          v18 = SmKmVirtualLockCtxLockMemory(*(_QWORD *)(a1 + 112));
          v17 = BaseAddress;
          v9 = v18;
          if ( v18 < 0 )
          {
            MmStoreFreeVirtualMemory(BaseAddress);
            goto LABEL_33;
          }
        }
      }
      *(_QWORD *)(a3 + 24) = v17;
LABEL_32:
      v9 = 0;
      goto LABEL_33;
    }
LABEL_10:
    v9 = -1073741670;
    goto LABEL_33;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v14 = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v15 = *(_DWORD *)(a3 + 16);
    BaseAddress = v14;
    if ( (v15 & 1) == 0 )
    {
      MmStoreFreeVirtualMemory(v14);
      v16 = *(_QWORD *)(a1 + 112);
      if ( v16 )
        SmKmVirtualLockCtxMemoryUnlocked(v16);
    }
    goto LABEL_32;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = *(volatile LONG **)(a1 + 120);
    BaseAddress = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v11 = (struct _MDL *)SmFpAllocate(v10, 2, a1, 0LL, *(_DWORD *)(a3 + 20) & 1);
    if ( v11 )
    {
      v19[0] = KeGetCurrentThread();
      v12 = SmSetThreadPagePriority(v19);
      v9 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, RegionSize, v11);
      if ( v9 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v13 = (struct _MDL *)SmFpAllocate(*(volatile LONG **)(a1 + 120), 4, a1, 0LL, 1);
        v9 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, RegionSize, v11);
        if ( v9 >= 0 )
          v11->Next = v13;
        else
          SmFpFree(*(_QWORD *)(a1 + 120), 4, a1, v13);
      }
      if ( v12 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v19);
      if ( v9 >= 0 )
      {
        BaseAddress = (PVOID)SmFpAllocate(*(volatile LONG **)(a1 + 120), 5, a1, (__int64)v11, *(_DWORD *)(a3 + 20) & 1);
        if ( BaseAddress )
        {
          *(_QWORD *)(a3 + 24) = v11;
          goto LABEL_32;
        }
        v9 = -1073741670;
        SmKmUnlockMdl(v11);
      }
      SmFpFree(*(_QWORD *)(a1 + 120), 2, a1, v11);
      goto LABEL_33;
    }
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
    goto LABEL_33;
  }
  if ( v8 == 1 )
  {
    BaseAddress = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    goto LABEL_32;
  }
  v9 = -1073741811;
LABEL_33:
  *(_DWORD *)(a3 + 40) = v9;
}
