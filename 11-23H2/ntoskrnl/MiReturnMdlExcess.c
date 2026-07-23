/*
 * XREFs of MiReturnMdlExcess @ 0x140623C78
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1402F8F6C (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MiInitializeMdlBatchPages @ 0x1402F95A0 (MiInitializeMdlBatchPages.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     MiReturnMdlCharges @ 0x140623BA0 (MiReturnMdlCharges.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnMdlExcess(__int64 a1)
{
  unsigned int *v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  int v5; // eax
  _WORD *Pool; // rax
  _WORD *v7; // rsi

  v1 = *(unsigned int **)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 48) * ((unsigned __int64)v1[10] >> 12);
  v4 = *(_QWORD *)(a1 + 32) - v3;
  if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
    MiReturnMdlCharges(*(_QWORD *)a1, v4);
  if ( !v3 )
    goto LABEL_4;
  v5 = *(_DWORD *)(a1 + 56);
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 0x40) == 0 )
      MiInitializeMdlBatchPages(a1);
    MiFreePagesFromMdl((ULONG_PTR)v1, 0);
LABEL_4:
    if ( (*(_DWORD *)(a1 + 84) & 1) == 0 )
      ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
    return;
  }
  if ( (*(_DWORD *)(a1 + 84) & 1) == 0 && *(_QWORD *)(a1 + 48) == 1LL && v4 > 0x800 )
  {
    Pool = MiAllocatePool(64, 8 * v3 + 48, 0x69646D4Du);
    v7 = Pool;
    if ( Pool )
    {
      *(_QWORD *)Pool = 0LL;
      Pool[5] = 0;
      *((_DWORD *)Pool + 10) = (_DWORD)v3 << 12;
      *((_QWORD *)Pool + 4) = 0LL;
      Pool[4] = 8 * (v3 + 6);
      *((_DWORD *)Pool + 11) = 0;
      memmove(Pool + 24, (const void *)(*(_QWORD *)(a1 + 64) + 48LL), 8 * v3);
      v7[5] = *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL);
      ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
      *(_QWORD *)(a1 + 64) = v7;
    }
  }
}
