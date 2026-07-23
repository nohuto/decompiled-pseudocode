/*
 * XREFs of sub_140A87B3C @ 0x140A87B3C
 * Callers:
 *     sub_140A8781C @ 0x140A8781C (sub_140A8781C.c)
 *     sub_140A8798C @ 0x140A8798C (sub_140A8798C.c)
 *     sub_140A88268 @ 0x140A88268 (sub_140A88268.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

void __fastcall sub_140A87B3C(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v4; // rsi
  size_t v6; // rbx
  void *v9; // rbp
  const void *v10; // r12

  v4 = a2;
  v6 = a2;
  v9 = (void *)a1;
  v10 = (const void *)(a2 + a1);
  if ( (a4 & 1) != 0 )
  {
    v9 = (void *)(a1 - 8);
    if ( RtlCompareMemory((const void *)(a1 - 8), "DmaVrfy0 ", 8uLL) != 8 )
    {
      sub_140A88948(
        byte_140C0D944,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      sub_1405FFA20(0xE6u, 0xFuLL, 1uLL, (unsigned int)v4, a1, byte_140C0D944);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, "DmaVrfy0 ", 8uLL) != 8 )
    {
      sub_140A88948(
        byte_140C0D92C,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      sub_1405FFA20(0xE6u, 0xFuLL, 2uLL, v4, a1, byte_140C0D92C);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset(v9, 15, v6);
}
