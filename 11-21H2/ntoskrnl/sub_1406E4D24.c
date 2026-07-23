/*
 * XREFs of sub_1406E4D24 @ 0x1406E4D24
 * Callers:
 *     sub_14067F34C @ 0x14067F34C (sub_14067F34C.c)
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067F804 @ 0x14067F804 (sub_14067F804.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406E4D24(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int128 v11; // xmm0

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x72544D43u);
  v9 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB8uLL);
    *(_QWORD *)(v9 + 56) = a1;
    *(_QWORD *)(v9 + 104) = 0xFFFFFFFF00000000uLL;
    *(_DWORD *)(v9 + 48) = 8;
    v10 = *(_DWORD *)(v9 + 48);
    if ( (a1 & 1) != 0 )
      v10 = 136;
    *(_QWORD *)(v9 + 64) = a3;
    *(_DWORD *)(v9 + 48) = v10;
    if ( a2 )
    {
      v11 = *a2;
    }
    else
    {
      if ( (a1 & 1) != 0 )
      {
LABEL_9:
        *(_QWORD *)(v9 + 8) = v9;
        *(_QWORD *)(v9 + 24) = v9 + 16;
        *(_QWORD *)(v9 + 16) = v9 + 16;
        *(_QWORD *)v9 = v9;
        *(_QWORD *)(v9 + 40) = v9 + 32;
        *(_QWORD *)(v9 + 32) = v9 + 32;
        sub_14067F804(a4, v9);
        return v9;
      }
      v11 = *(_OWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 176);
    }
    *(_OWORD *)(v9 + 88) = v11;
    goto LABEL_9;
  }
  return v9;
}
