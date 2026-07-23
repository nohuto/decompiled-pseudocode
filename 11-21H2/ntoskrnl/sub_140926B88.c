/*
 * XREFs of sub_140926B88 @ 0x140926B88
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140926B88(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // edi
  size_t v4; // rsi
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi
  void *v7; // rcx

  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 64) = 16LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 40) = 8LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( is_mul_ok(0LL, v2) && (v4 = 32 * v2, is_mul_ok(0x20uLL, v2)) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32 * v2, 0x72615452u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v4);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 72) = v6;
      *(_QWORD *)(a1 + 56) = 32LL;
      return 0;
    }
    v3 = -2147024882;
  }
  else
  {
    v3 = -2147483637;
  }
  v7 = *(void **)(a1 + 72);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72615452u);
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  return v3;
}
