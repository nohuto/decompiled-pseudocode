/*
 * XREFs of ?seekpos@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x18064BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Endwrite@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAA_NXZ @ 0x18064B580 (-_Endwrite@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAA_NXZ.c)
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18064B7A8 (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 */

fpos_t *__fastcall std::filebuf::seekpos(__int64 a1, fpos_t *a2, _QWORD *a3)
{
  bool v5; // zf
  fpos_t v7; // rax
  fpos_t v8; // rcx
  fpos_t Position; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 128) == 0LL;
  Position = *a3 + a3[1];
  if ( v5 || !std::filebuf::_Endwrite(a1) || fsetpos(*(FILE **)(a1 + 128), &Position) )
  {
    *a2 = -1LL;
    a2[1] = 0LL;
    v7 = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 116) = a3[2];
    std::filebuf::_Reset_back(a1);
    v7 = *(_QWORD *)(a1 + 116);
    v8 = Position;
    a2[1] = 0LL;
    *a2 = v8;
  }
  a2[2] = v7;
  return a2;
}
