/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@YAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x1803F66B8
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@QEAU21@$$QEAU21@@Z @ 0x1803F52A0 (--$_Emplace_reallocate@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@s.c)
 *     ?_Reallocate_exactly@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18040A244 (-_Reallocate_exactly@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x1803F4A74 (--$_Destroy_range@V-$allocator@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

_DWORD *__fastcall std::_Uninitialized_move<std::pair<unsigned long,std::wstring> *,std::allocator<std::pair<unsigned long,std::wstring>>>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_DWORD *)(v4 - 8);
      a3 += 10;
      *(_QWORD *)&v5[v4] = 0LL;
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      *(_QWORD *)&v5[v4 + 24] = 0LL;
      *(_OWORD *)&v5[v4] = *(_OWORD *)v4;
      *(_OWORD *)&v5[v4 + 16] = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 7LL;
      *(_WORD *)v4 = 0;
      v4 += 40LL;
    }
    while ( v4 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<unsigned long,std::wstring>>>((__int64)a3, (__int64)a3);
  return a3;
}
