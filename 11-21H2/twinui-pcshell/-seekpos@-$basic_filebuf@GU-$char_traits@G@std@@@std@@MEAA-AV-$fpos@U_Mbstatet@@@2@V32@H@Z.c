/*
 * XREFs of ?seekpos@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x1805DE990
 * Callers:
 *     <none>
 * Callees:
 *     ?_Endwrite@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAA_NXZ @ 0x1805DE0EC (-_Endwrite@-$basic_filebuf@GU-$char_traits@G@std@@@std@@IEAA_NXZ.c)
 *     ?_Reset_back@?$basic_filebuf@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1805DE300 (-_Reset_back@-$basic_filebuf@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 */

fpos_t *__fastcall std::basic_filebuf<unsigned short>::seekpos(__int64 a1, fpos_t *a2, _QWORD *a3)
{
  bool v5; // zf
  fpos_t v7; // rax
  fpos_t v8; // rcx
  fpos_t Position; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 128) == 0LL;
  Position = *a3 + a3[1];
  if ( v5 || !std::basic_filebuf<unsigned short>::_Endwrite(a1) || fsetpos(*(FILE **)(a1 + 128), &Position) )
  {
    *a2 = -1LL;
    a2[1] = 0LL;
    v7 = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 116) = a3[2];
    std::basic_filebuf<unsigned short>::_Reset_back(a1);
    v7 = *(_QWORD *)(a1 + 116);
    v8 = Position;
    a2[1] = 0LL;
    *a2 = v8;
  }
  a2[2] = v7;
  return a2;
}
