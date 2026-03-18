/*
 * XREFs of VfDeadlockInitialize @ 0x140A98170
 * Callers:
 *     VfInitVerifierComponents @ 0x140A82480 (VfInitVerifierComponents.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140250C50 (ExInitializeNPagedLookasideListInternal.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ViDeadlockDetectionApplySettings @ 0x140A99478 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140A999D0 (ViDeadlockPopulateLookasideCache.c)
 */

void __fastcall VfDeadlockInitialize(int a1, int a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  int v11; // ecx
  _DWORD *v12; // rdx
  int v13; // ecx
  void *v14; // rcx
  void *v15; // rcx

  ViDeadlockGlobals = (PVOID)ExAllocatePool2(64LL, 0x8180uLL, 0x6B636C44u);
  if ( ViDeadlockGlobals )
  {
    Pool2 = ExAllocatePool2(64LL, 0x3FF0uLL, 0x6B636C44u);
    v5 = ViDeadlockGlobals;
    *((_QWORD *)ViDeadlockGlobals + 2) = Pool2;
    if ( Pool2
      && (v6 = ExAllocatePool2(64LL, 0x3FF0uLL, 0x6B636C44u),
          v5 = ViDeadlockGlobals,
          (*((_QWORD *)ViDeadlockGlobals + 2050) = v6) != 0LL) )
    {
      ViDeadlockDatabaseLock = 0;
      v7 = 0LL;
      v8 = 1023LL;
      do
      {
        v9 = (_QWORD *)(v7 + v5[2]);
        v9[1] = v9;
        *v9 = v9;
        v10 = (_QWORD *)(v7 + v5[2050]);
        v7 += 16LL;
        v10[1] = v10;
        *v10 = v10;
        --v8;
      }
      while ( v8 );
      v11 = 4;
      v12 = ViDeadlockGlobals;
      if ( ViRecursionDepthLimitFromRegistry )
        v11 = ViRecursionDepthLimitFromRegistry;
      *((_DWORD *)ViDeadlockGlobals + 8202) = v11;
      v13 = 1000;
      if ( ViSearchedNodesLimitFromRegistry )
        v13 = ViSearchedNodesLimitFromRegistry;
      v12[8203] = v13;
      ExInitializeNPagedLookasideListInternal(
        (__int64)&ViDeadlockThreadLookaside,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))((unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(a2 != 0)),
        (void (__stdcall *)(PVOID, ULONG))VfUtilFreePoolCheckIRQL,
        512,
        56,
        1919439958,
        a2 != 0 ? 512 : 32,
        VfInitializedWithoutReboot);
      ExInitializeNPagedLookasideListInternal(
        (__int64)&ViDeadlockResourceLookaside,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))((unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(a2 != 0)),
        (void (__stdcall *)(PVOID, ULONG))VfUtilFreePoolCheckIRQL,
        512,
        248,
        1936020054,
        a2 != 0 ? 0x2000 : 64,
        VfInitializedWithoutReboot);
      ExInitializeNPagedLookasideListInternal(
        (__int64)&ViDeadlockNodeLookaside,
        (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))((unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(a2 != 0)),
        (void (__stdcall *)(PVOID, ULONG))VfUtilFreePoolCheckIRQL,
        512,
        208,
        1685016150,
        a2 != 0 ? 0x4000 : 64,
        VfInitializedWithoutReboot);
      if ( a2 )
      {
        ViDeadlockPopulateLookasideCache(&ViDeadlockThreadLookaside);
        ViDeadlockPopulateLookasideCache(&ViDeadlockNodeLookaside);
        ViDeadlockPopulateLookasideCache(&ViDeadlockResourceLookaside);
        ViDeadlockState |= 2u;
      }
      if ( a1 )
        ViDeadlockState |= 4u;
      ViDeadlockDetectionApplySettings(((unsigned int)MmVerifierData >> 5) & 1);
    }
    else
    {
      v14 = (void *)v5[2];
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      v15 = (void *)*((_QWORD *)ViDeadlockGlobals + 2050);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      ExFreePoolWithTag(ViDeadlockGlobals, 0);
      ViDeadlockGlobals = 0LL;
    }
  }
}
