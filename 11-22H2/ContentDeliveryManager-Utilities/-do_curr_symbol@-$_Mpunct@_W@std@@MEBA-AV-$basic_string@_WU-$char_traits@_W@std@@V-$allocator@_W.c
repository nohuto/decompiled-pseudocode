/*
 * XREFs of ?do_curr_symbol@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x180017D20
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180096DB4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

__int64 __fastcall std::_Mpunct<wchar_t>::do_curr_symbol(__int64 a1, __int64 a2)
{
  _WORD *v3; // rdx
  __int64 v4; // rax

  v3 = *(_WORD **)(a1 + 32);
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  if ( *v3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
  }
  std::wstring::assign(a2);
  return a2;
}
