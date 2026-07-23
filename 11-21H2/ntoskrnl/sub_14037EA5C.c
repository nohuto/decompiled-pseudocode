/*
 * XREFs of sub_14037EA5C @ 0x14037EA5C
 * Callers:
 *     sub_14037EAF8 @ 0x14037EAF8 (sub_14037EAF8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char *__fastcall sub_14037EA5C(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned int v4; // ecx
  unsigned int v5; // r15d
  char *v6; // rdi
  __int64 v7; // rsi
  SIZE_T v9; // rbp
  char *PoolWithTag; // rax

  v2 = 0LL;
  v3 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v5 = a2 ^ (1 << v4);
  if ( v4 < 0x20 )
  {
    v6 = *(char **)(v3 + 8 * a1);
    v7 = (unsigned int)a1;
    if ( !v6 )
    {
      v9 = (unsigned int)(16 * (1 << a1));
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x41426D73u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return (char *)v2;
      memset(PoolWithTag, 0, (unsigned int)v9);
      *(_QWORD *)(v3 + 8 * v7) = v6;
    }
    return &v6[16 * v5];
  }
  return (char *)v2;
}
