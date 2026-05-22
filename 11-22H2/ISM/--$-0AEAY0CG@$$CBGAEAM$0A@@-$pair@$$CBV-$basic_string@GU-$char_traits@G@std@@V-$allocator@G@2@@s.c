/*
 * XREFs of ??$?0AEAY0CG@$$CBGAEAM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0CG@$$CBGAEAM@Z @ 0x1800486D8
 * Callers:
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180048448 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180048798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
        _QWORD *a1,
        _WORD *a2,
        _DWORD *a3)
{
  __int64 v5; // r8

  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  std::wstring::assign(a1, a2);
  *((_DWORD *)a1 + 8) = *a3;
  *((_BYTE *)a1 + 36) = 2;
  return a1;
}
