/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x18058C66C
 * Callers:
 *     ?uflow@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGXZ @ 0x1805DEB90 (-uflow@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAAGXZ.c)
 * Callees:
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8

  v4 = a1;
  v5 = a1[2];
  if ( v5 < a3 )
    a3 = a1[2];
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v6 = v5 - a3;
  v4[2] = v6;
  memmove_0(a1, (char *)a1 + a3, v6 + 1);
  return v4;
}
