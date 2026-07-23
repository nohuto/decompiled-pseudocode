/*
 * XREFs of sub_1409987A0 @ 0x1409987A0
 * Callers:
 *     sub_140996FDC @ 0x140996FDC (sub_140996FDC.c)
 * Callees:
 *     sub_140864194 @ 0x140864194 (sub_140864194.c)
 *     sub_14099858C @ 0x14099858C (sub_14099858C.c)
 */

void __fastcall sub_1409987A0(char a1, int a2)
{
  int v2; // eax

  if ( a2 || !dword_140D01528 )
  {
    v2 = dword_140C1F9D0;
    if ( a1 )
    {
      ++dword_140C1F9D0;
      if ( !v2 )
        sub_140864194(3);
    }
    else if ( dword_140C1F9D0 )
    {
      --dword_140C1F9D0;
      if ( v2 == 1 )
        sub_14099858C(3);
    }
  }
}
