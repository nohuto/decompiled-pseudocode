/*
 * XREFs of MiInitializeAffinityWalker @ 0x140223104
 * Callers:
 *     MiZeroInParallel @ 0x1403044C0 (MiZeroInParallel.c)
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 * Callees:
 *     MiInitializeDpcGroupAffinity @ 0x140221C20 (MiInitializeDpcGroupAffinity.c)
 *     MiObtainParkedCoreMasks @ 0x14022320C (MiObtainParkedCoreMasks.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 */

__int64 __fastcall MiInitializeAffinityWalker(int a1, unsigned int a2, int a3)
{
  __int64 v6; // r14
  __int64 Pool; // rax
  __int64 v8; // rsi
  int v9; // ecx

  v6 = *(_QWORD *)(376LL * a2 + qword_140C65AA0 + 368);
  Pool = MiAllocatePool(64LL, 16 * (*(unsigned __int16 *)(v6 + 8) + 19LL), 2000775501LL);
  v8 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 0;
    *(_DWORD *)(Pool + 4) = *(unsigned __int16 *)(v6 + 8);
    *(_QWORD *)(Pool + 8) = Pool + 304;
    MiObtainParkedCoreMasks(Pool + 40);
    MiInitializeDpcGroupAffinity(*(_OWORD **)(v8 + 8), *(_QWORD *)v6, *(_DWORD *)(v8 + 4), a1);
    *(_DWORD *)(v8 + 16) = 0;
    v9 = *(_DWORD *)(KeNodeBlock[(unsigned __int16)a2] + 292);
    *(_DWORD *)(v8 + 24) = a2;
    if ( !v9 )
      v9 = 1;
    *(_DWORD *)(v8 + 28) = a3;
    *(_DWORD *)(v8 + 20) = v9;
    *(_DWORD *)(v8 + 32) = a1;
  }
  return v8;
}
