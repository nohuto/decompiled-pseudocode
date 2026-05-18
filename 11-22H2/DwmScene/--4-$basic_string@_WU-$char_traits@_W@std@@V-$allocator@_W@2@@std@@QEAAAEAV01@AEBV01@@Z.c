/*
 * XREFs of ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800320AC
 * Callers:
 *     ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C (-UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@.c)
 *     ?UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ @ 0x1800374F8 (-UpdatePerformanceStats@Engine@1Spectre@@IEAAXXZ.c)
 *     ??$_Copy_unchecked@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEAV10@00@Z @ 0x1800588F8 (--$_Copy_unchecked@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@PEAV12@@s.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@ConfigurationValue@Utils@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x1800DC698 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@ConfigurationValue.c)
 *     ??$_Assign_cast@AEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1800DD528 (--$_Assign_cast@AEAU-$pair@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VCon.c)
 *     ??4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE344 (--4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001E6E8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

char *__fastcall std::wstring::operator=(char *a1, char *a2)
{
  unsigned __int64 v3; // r8

  if ( a1 != a2 )
  {
    v3 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(char **)a2;
    std::wstring::assign(a1, a2, v3);
  }
  return a1;
}
