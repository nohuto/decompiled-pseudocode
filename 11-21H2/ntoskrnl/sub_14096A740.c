/*
 * XREFs of sub_14096A740 @ 0x14096A740
 * Callers:
 *     sub_14096A868 @ 0x14096A868 (sub_14096A868.c)
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14096A740(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  PVOID v11; // rax
  void *v12; // rsi
  __int64 v13; // r14

  v3 = *a2;
  if ( *a2 )
  {
    v6 = a2[2];
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(v6 + 8 * v3 - 8) % v7;
    if ( ((*(_QWORD *)(v6 + 8 * v3 - 8) / v7) & 0x3FFFFF) + v8 + 1 == (a3 & 0x3FFFFF) && v8 != v7 - 1 )
    {
      ++*(_QWORD *)(v6 + 8 * v3 - 8);
      return 0LL;
    }
  }
  v9 = a2[1];
  if ( v3 != v9 )
  {
LABEL_15:
    *(_QWORD *)(a2[2] + 8 * v3) = (*(_QWORD *)&a3 & 0x3FFFFFLL) << 30;
    *a2 = v3 + 1;
    return 0LL;
  }
  v10 = 2LL;
  if ( v9 )
    v10 = 2 * v9;
  v11 = sub_1402828F0(64, 8 * v10, 0x7048694Du);
  v12 = (void *)a2[2];
  v13 = (__int64)v11;
  if ( v11 )
  {
    if ( v12 )
    {
      memmove(v11, (const void *)a2[2], 8 * a2[1]);
      ExFreePoolWithTag(v12, 0);
    }
    v3 = *a2;
    a2[2] = v13;
    a2[1] = v10;
    goto LABEL_15;
  }
  if ( v12 )
  {
    ExFreePoolWithTag((PVOID)a2[2], 0);
    a2[2] = 0LL;
  }
  return 3221225626LL;
}
