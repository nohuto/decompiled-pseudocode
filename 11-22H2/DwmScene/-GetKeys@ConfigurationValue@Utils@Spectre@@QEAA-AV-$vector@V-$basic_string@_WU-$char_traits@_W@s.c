/*
 * XREFs of ?GetKeys@ConfigurationValue@Utils@Spectre@@QEAA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800DFA14
 * Callers:
 *     ?GetKeys@JsonConfigurationManager@Utils@Spectre@@UEBA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x1800DE790 (-GetKeys@JsonConfigurationManager@Utils@Spectre@@UEBA-AV-$vector@V-$basic_string@_WU-$char_trait.c)
 * Callees:
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@QEAV21@AEBV21@@Z @ 0x180058AAC (--$_Emplace_reallocate@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$ve.c)
 *     ?_Reallocate_exactly@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAX_K@Z @ 0x1800DFBE4 (-_Reallocate_exactly@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Utils::ConfigurationValue::GetKeys(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  _QWORD **v5; // rdi
  _QWORD *i; // rbx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
    std::vector<std::wstring>::_Reallocate_exactly(a2);
  }
  v5 = *(_QWORD ***)(a1 + 72);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a2 + 16) )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(
        (char **)a2,
        *(char **)(a2 + 8),
        (__int64)(i + 2));
    }
    else
    {
      std::wstring::wstring(*(_QWORD **)(a2 + 8), (__int64)(i + 2));
      *(_QWORD *)(a2 + 8) += 32LL;
    }
  }
  return a2;
}
