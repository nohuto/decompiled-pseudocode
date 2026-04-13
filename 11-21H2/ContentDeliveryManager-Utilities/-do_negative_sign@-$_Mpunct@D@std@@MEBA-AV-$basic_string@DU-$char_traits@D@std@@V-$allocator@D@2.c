/*
 * XREFs of ?do_negative_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800204F0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800486C4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 */

_QWORD *__fastcall std::_Mpunct<char>::do_negative_sign(__int64 a1, _QWORD *a2)
{
  size_t v3; // r8
  _BYTE *v4; // rdx
  __int64 v5; // rax

  v3 = 0LL;
  v4 = *(_BYTE **)(a1 + 48);
  a2[3] = 15LL;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  if ( *v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    v3 = v5;
  }
  std::string::assign(a2, v4, v3);
  return a2;
}
