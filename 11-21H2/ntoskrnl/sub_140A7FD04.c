/*
 * XREFs of sub_140A7FD04 @ 0x140A7FD04
 * Callers:
 *     sub_140A7FDC0 @ 0x140A7FDC0 (sub_140A7FDC0.c)
 *     sub_140A9B158 @ 0x140A9B158 (sub_140A9B158.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

void __fastcall sub_140A7FD04(char a1)
{
  unsigned int i; // eax
  unsigned __int64 v2; // rbx
  void *Pool3; // rax
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  v6 = 0;
  v4 = 1LL;
  v5 = 32;
  if ( (a1 & 0x10) != 0 )
  {
    _InterlockedExchange(&dword_140D018F4, 1);
    _InterlockedExchange(&dword_140D018F8, 0);
    if ( !qword_140C1B2D8 && dword_140C0C84C && (qword_140D01450 & 0x400000) == 0 )
    {
      for ( i = 2; i < 0x100000; i *= 2 )
      {
        if ( i >= dword_140C0C84C )
          break;
      }
      v2 = (unsigned __int64)i << 7;
      dword_140C0C84C = i;
      Pool3 = (void *)ExAllocatePool3(64LL, v2, 0x54496656u, (__int64)&v4, 1u);
      qword_140C1B2D8 = (__int64)Pool3;
      if ( Pool3 )
        memset(Pool3, 0, v2);
    }
  }
  else
  {
    _InterlockedExchange(&dword_140D018F8, 1);
  }
}
