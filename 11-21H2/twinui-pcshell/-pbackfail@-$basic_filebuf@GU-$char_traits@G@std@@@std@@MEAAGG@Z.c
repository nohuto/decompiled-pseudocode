/*
 * XREFs of ?pbackfail@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGG@Z @ 0x1805DE6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Set_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1805DE34C (-_Set_back@-$basic_filebuf@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::pbackfail(__int64 a1, wint_t a2)
{
  unsigned __int64 v4; // rbx
  FILE *v6; // rdx

  if ( std::basic_streambuf<unsigned short>::gptr(a1) )
  {
    v4 = std::basic_streambuf<unsigned short>::eback(a1);
    if ( v4 < std::basic_streambuf<unsigned short>::gptr(a1)
      && (a2 == 0xFFFF || *(_WORD *)(std::basic_streambuf<unsigned short>::gptr(a1) - 2) == a2) )
    {
      std::basic_streambuf<unsigned short>::_Gndec(a1);
      if ( a2 == 0xFFFF )
        return 0;
      return a2;
    }
  }
  v6 = *(FILE **)(a1 + 128);
  if ( v6 && a2 != 0xFFFF )
  {
    if ( !*(_QWORD *)(a1 + 104) && ungetwc(a2, v6) != 0xFFFF )
      return a2;
    if ( std::basic_streambuf<unsigned short>::gptr(a1) != a1 + 112 )
    {
      *(_WORD *)(a1 + 112) = a2;
      std::basic_filebuf<unsigned short>::_Set_back(a1);
      return a2;
    }
  }
  return 0xFFFFLL;
}
