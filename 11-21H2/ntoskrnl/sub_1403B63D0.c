/*
 * XREFs of sub_1403B63D0 @ 0x1403B63D0
 * Callers:
 *     sub_1403B6350 @ 0x1403B6350 (sub_1403B6350.c)
 *     sub_14053F590 @ 0x14053F590 (sub_14053F590.c)
 *     sub_1407FFF4C @ 0x1407FFF4C (sub_1407FFF4C.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 * Callees:
 *     sub_1402A4320 @ 0x1402A4320 (sub_1402A4320.c)
 */

void __fastcall sub_1403B63D0(int a1)
{
  unsigned int i; // ebx

  _m_prefetchw(&dword_140C0B8C0);
  if ( _InterlockedAnd(&dword_140C0B8C0, ~a1) == a1 )
  {
    for ( i = 0; i < 3; ++i )
      sub_1402A4320(i, 0LL, 1);
  }
}
