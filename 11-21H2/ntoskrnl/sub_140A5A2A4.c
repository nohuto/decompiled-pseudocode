/*
 * XREFs of sub_140A5A2A4 @ 0x140A5A2A4
 * Callers:
 *     sub_140A54CD8 @ 0x140A54CD8 (sub_140A54CD8.c)
 *     sub_140A5A2A4 @ 0x140A5A2A4 (sub_140A5A2A4.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140A5A2A4 @ 0x140A5A2A4 (sub_140A5A2A4.c)
 */

void __fastcall sub_140A5A2A4(void **a1, unsigned int a2)
{
  __int64 v4; // rdi
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  v4 = 512LL;
  do
  {
    v5 = *a1;
    if ( *a1 )
    {
      if ( a2 >= 2 )
      {
        sub_140A5A2A4(v5, a2 - 1);
        v5 = *a1;
      }
      *a1 = (void *)(MmGetPhysicalAddress(v5).QuadPart & 0xFFFFFFFFFF000LL);
      v6 = 1LL;
      v7 = 2LL;
      do
      {
        *a1 = (void *)(v6++ | (unsigned __int64)*a1);
        --v7;
      }
      while ( v7 );
    }
    ++a1;
    --v4;
  }
  while ( v4 );
}
