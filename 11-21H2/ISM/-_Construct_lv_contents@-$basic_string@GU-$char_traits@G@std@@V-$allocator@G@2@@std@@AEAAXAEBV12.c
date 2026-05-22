/*
 * XREFs of ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEBV12@@Z @ 0x180096E14
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009440C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

void __fastcall std::wstring::_Construct_lv_contents(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  void *v8; // rax

  v2 = (_OWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  if ( v3 >= 8 )
  {
    v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = v3 | 7;
    if ( (v3 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v7 = v6 + 1;
      v5 = v3 | 7;
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
    }
    else
    {
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v7);
    *a1 = v8;
    memcpy_0(v8, v2, 2 * v3 + 2);
    a1[2] = v3;
    a1[3] = v5;
  }
  else
  {
    *(_OWORD *)a1 = *v2;
    a1[2] = v3;
    a1[3] = 7LL;
  }
}
