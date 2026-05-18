/*
 * XREFs of ?_Erase_noexcept@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV12@_K_K@Z @ 0x18001E604
 * Callers:
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x18001E750 (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

_QWORD *__fastcall std::string::_Erase_noexcept(_QWORD *a1, __int64 a2, unsigned __int64 a3)
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
