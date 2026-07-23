/*
 * XREFs of sub_1405FF994 @ 0x1405FF994
 * Callers:
 *     sub_140A914C4 @ 0x140A914C4 (sub_140A914C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405FF994(signed __int64 a1)
{
  int v1; // r9d
  unsigned int v2; // r8d

  v1 = dword_140C1ADD8;
  v2 = dword_140C1ADD4;
  while ( _InterlockedCompareExchange64(&qword_140C1AE28[6 * v2], a1, 0LL) )
  {
    v2 = v2 + 1 < dword_140C1ADD8 ? v2 + 1 : 0;
    if ( !--v1 )
    {
      ++dword_140C1ADD0;
      return 0xFFFFFFFFLL;
    }
  }
  dword_140C1ADD4 = v2 + 1 < dword_140C1ADD8 ? v2 + 1 : 0;
  return v2;
}
