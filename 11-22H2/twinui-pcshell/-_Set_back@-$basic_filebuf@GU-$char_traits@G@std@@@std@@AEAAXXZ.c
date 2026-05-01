/*
 * XREFs of ?_Set_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1806E3FD4
 * Callers:
 *     ?pbackfail@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGG@Z @ 0x1806E4640 (-pbackfail@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAAGG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::_Set_back(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 112;
  if ( std::basic_streambuf<unsigned short>::eback(a1) != a1 + 112 )
  {
    *(_QWORD *)(a1 + 136) = std::basic_streambuf<unsigned short>::eback(a1);
    *(_QWORD *)(a1 + 144) = std::basic_streambuf<unsigned short>::egptr(a1);
  }
  return std::basic_streambuf<unsigned short>::setg(a1, v2, v2);
}
