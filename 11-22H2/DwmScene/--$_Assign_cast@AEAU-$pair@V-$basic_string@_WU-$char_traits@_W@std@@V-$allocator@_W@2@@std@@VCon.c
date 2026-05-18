/*
 * XREFs of ??$_Assign_cast@AEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1800DD528
 * Callers:
 *     ??4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE344 (--4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 * Callees:
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800320AC (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1800DD454 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DD6D4 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DE124 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_WU-$char_trai.c)
 *     ??4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE344 (--4ConfigurationValue@Utils@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>::_Assign_cast<std::pair<std::wstring,Spectre::Utils::ConfigurationValue> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>,std::_Iterator_base0>>(
        __int64 a1,
        char *a2,
        char *a3)
{
  char **v6; // r12
  char *v7; // r14
  char *v8; // rax
  __int64 v9; // rsi
  char *v10; // rbx
  __int64 result; // rax
  char **v12; // rdx
  __int64 v13; // r8
  char *v14; // rcx
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+28h] [rbp-30h]
  char ***v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]

  v6 = *(char ***)a1;
  v7 = **(char ***)a1;
  while ( v7 != (char *)v6 )
  {
    if ( a2 == a3 )
    {
      v8 = (char *)*((_QWORD *)v7 + 1);
      *(_QWORD *)v8 = v6;
      v6[1] = v8;
      v9 = 0LL;
      do
      {
        v10 = *(char **)v7;
        result = std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(
                   a1,
                   v7);
        v7 = v10;
        ++v9;
      }
      while ( v10 != (char *)v6 );
      *(_QWORD *)(a1 + 8) -= v9;
      return result;
    }
    std::wstring::operator=(v7 + 16, a2 + 16);
    Spectre::Utils::ConfigurationValue::operator=(v7 + 48, a2 + 48);
    v7 = *(char **)v7;
    a2 = *(char **)a2;
  }
  v17 = a1;
  v18 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>>,std::_Iterator_base0>>(
    &v17,
    a2,
    a3);
  v12 = *(char ***)a1;
  v13 = v18;
  if ( v18 )
  {
    v14 = v12[1];
    v15 = v20;
    *(_QWORD *)(v20 + 8) = v14;
    *(_QWORD *)v14 = v15;
    v16 = (char *)v19;
    *v19 = v12;
    v12[1] = v16;
    *(_QWORD *)(a1 + 8) += v13;
    v18 = 0LL;
  }
  return std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(
           &v17,
           v12);
}
