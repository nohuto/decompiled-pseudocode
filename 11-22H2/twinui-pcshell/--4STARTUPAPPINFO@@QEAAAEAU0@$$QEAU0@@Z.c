/*
 * XREFs of ??4STARTUPAPPINFO@@QEAAAEAU0@$$QEAU0@@Z @ 0x18063E418
 * Callers:
 *     ??$_Insert_or_assign@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18063D914 (--$_Insert_or_assign@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPIN.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall STARTUPAPPINFO::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _OWORD *v3; // rbp
  _OWORD *v6; // rsi
  _OWORD *v7; // rsi
  _OWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi

  v2 = a2 + 8;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = (_OWORD *)(a1 + 8);
  if ( a1 + 8 != a2 + 8 )
  {
    std::wstring::_Tidy_deallocate(a1 + 8);
    *v3 = *(_OWORD *)v2;
    v3[1] = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 7LL;
    *(_WORD *)v2 = 0;
  }
  v6 = (_OWORD *)(a2 + 40);
  if ( a1 + 40 != a2 + 40 )
  {
    std::wstring::_Tidy_deallocate(a1 + 40);
    *(_OWORD *)(a1 + 40) = *v6;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_QWORD *)(a2 + 64) = 7LL;
    *(_WORD *)v6 = 0;
  }
  v7 = (_OWORD *)(a2 + 72);
  if ( a1 + 72 != a2 + 72 )
  {
    std::wstring::_Tidy_deallocate(a1 + 72);
    *(_OWORD *)(a1 + 72) = *v7;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_QWORD *)(a2 + 96) = 7LL;
    *(_WORD *)v7 = 0;
  }
  v8 = (_OWORD *)(a2 + 104);
  if ( a1 + 104 != a2 + 104 )
  {
    std::wstring::_Tidy_deallocate(a1 + 104);
    *(_OWORD *)(a1 + 104) = *v8;
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
    *(_QWORD *)(a2 + 120) = 0LL;
    *(_QWORD *)(a2 + 128) = 7LL;
    *(_WORD *)v8 = 0;
  }
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  v9 = *(_QWORD *)(a2 + 144);
  v10 = a2 + 152;
  *(_QWORD *)(a1 + 144) = v9;
  if ( a1 + 152 != v10 )
  {
    std::wstring::_Tidy_deallocate(a1 + 152);
    *(_OWORD *)(a1 + 152) = *(_OWORD *)v10;
    *(_OWORD *)(a1 + 168) = *(_OWORD *)(v10 + 16);
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 24) = 7LL;
    *(_WORD *)v10 = 0;
  }
  return a1;
}
