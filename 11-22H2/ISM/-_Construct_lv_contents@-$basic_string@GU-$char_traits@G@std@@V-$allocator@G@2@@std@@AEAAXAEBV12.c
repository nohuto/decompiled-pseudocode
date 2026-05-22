/*
 * XREFs of ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEBV12@@Z @ 0x180047320
 * Callers:
 *     ??$insert@PEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAXPEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@1@0@Z @ 0x180046E38 (--$insert@PEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$varian.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BD280 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800A9FB8 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

void __fastcall std::wstring::_Construct_lv_contents(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rax
  size_t v7; // rcx
  void *v8; // rax

  v2 = (_OWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  if ( v3 >= 8 )
  {
    v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = v3 | 7;
    if ( (v3 | 7) > 0x7FFFFFFFFFFFFFFELL )
    {
      v7 = -2LL;
    }
    else
    {
      v5 = v3 | 7;
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      v7 = 2 * (v6 + 1);
      if ( v7 < 0x1000 )
      {
        v8 = 0LL;
        if ( v7 )
          v8 = operator new(v7);
        goto LABEL_9;
      }
    }
    v8 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v7);
LABEL_9:
    *a1 = v8;
    memcpy_0(v8, v2, 2 * v3 + 2);
    a1[2] = v3;
    a1[3] = v5;
    return;
  }
  *(_OWORD *)a1 = *v2;
  a1[2] = v3;
  a1[3] = 7LL;
}
