/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1800DD454
 * Callers:
 *     ??$_Assign_cast@AEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1800DD528 (--$_Assign_cast@AEAU-$pair@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VCon.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$construct@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@AEBU12@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@1@QEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@1@AEBU31@@Z @ 0x1800DDD38 (--$construct@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfi.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DE05C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_WU-$char_trait.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>,std::_Iterator_base0>>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // r15
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-10h]

  if ( a2 != a3 )
  {
    v4 = a2;
    v10 = *a1;
    v11 = 0LL;
    v6 = a1 + 2;
    if ( a1[1] )
      goto LABEL_5;
    v7 = operator new(0xB0uLL);
    v11 = v7;
    std::_Default_allocator_traits<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>::construct<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,std::pair<std::wstring const,Spectre::Utils::ConfigurationValue> const &>(
      v8,
      v7 + 2,
      v4 + 2);
    a1[3] = (__int64)v7;
    while ( 1 )
    {
      v11 = 0LL;
      *v6 = v7;
      ++a1[1];
      v4 = (_QWORD *)*v4;
LABEL_5:
      if ( v4 == a3 )
        break;
      v7 = operator new(0xB0uLL);
      v11 = v7;
      std::_Default_allocator_traits<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>::construct<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,std::pair<std::wstring const,Spectre::Utils::ConfigurationValue> const &>(
        v9,
        v7 + 2,
        v4 + 2);
      *(_QWORD *)*v6 = v7;
      v7[1] = *v6;
    }
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(&v10);
  }
}
