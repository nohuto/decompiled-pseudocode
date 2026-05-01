/*
 * XREFs of ?seekoff@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x1806E4890
 * Callers:
 *     <none>
 * Callees:
 *     ?_Endwrite@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAA_NXZ @ 0x1806E3DAC (-_Endwrite@-$basic_filebuf@GU-$char_traits@G@std@@@std@@IEAA_NXZ.c)
 *     ?_Reset_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1806E3F88 (-_Reset_back@-$basic_filebuf@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 */

fpos_t *__fastcall std::basic_filebuf<unsigned short>::seekoff(__int64 a1, fpos_t *a2, __int64 a3, int a4)
{
  fpos_t v8; // rax
  fpos_t v9; // rcx
  fpos_t Position; // [rsp+30h] [rbp+8h] BYREF

  if ( std::basic_streambuf<unsigned short>::gptr(a1) == a1 + 112 && a4 == 1 && !*(_QWORD *)(a1 + 104) )
    a3 -= 2LL;
  if ( !*(_QWORD *)(a1 + 128)
    || !std::basic_filebuf<unsigned short>::_Endwrite(a1)
    || (a3 || a4 != 1) && _fseeki64(*(FILE **)(a1 + 128), a3, a4)
    || fgetpos(*(FILE **)(a1 + 128), &Position) )
  {
    *a2 = -1LL;
    a2[1] = 0LL;
    v8 = 0LL;
  }
  else
  {
    std::basic_filebuf<unsigned short>::_Reset_back(a1);
    v8 = *(_QWORD *)(a1 + 116);
    v9 = Position;
    a2[1] = 0LL;
    *a2 = v9;
  }
  a2[2] = v8;
  return a2;
}
