/*
 * XREFs of sub_140B25AE4 @ 0x140B25AE4
 * Callers:
 *     sub_140B25950 @ 0x140B25950 (sub_140B25950.c)
 * Callees:
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void sub_140B25AE4()
{
  const void **v0; // rbx
  unsigned __int64 v1; // rsi
  unsigned int *v2; // rdi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbp

  v0 = (const void **)qword_140C485C0;
  v1 = 4LL;
  v2 = (unsigned int *)&unk_140C485A0;
  do
  {
    if ( *v0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *v2, 0x6D427642u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
        KeBugCheck(0x7Du);
      memmove(PoolWithTag, *v0, *v2);
      *v0 = v4;
    }
    v1 += 4LL;
    ++v2;
    ++v0;
  }
  while ( v1 < 0x1C );
}
