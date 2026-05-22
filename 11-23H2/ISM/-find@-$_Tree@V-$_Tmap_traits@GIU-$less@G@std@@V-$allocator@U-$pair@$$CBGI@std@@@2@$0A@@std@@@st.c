/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@@2@AEBG@Z @ 0x18005AF30
 * Callers:
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800F3958 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@AEBG@Z @ 0x18005ABF8 (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::find(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int64 *v4; // r11
  __int64 v5; // r10
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
    a1,
    (__int64)v7,
    a3);
  v5 = v8;
  if ( *(_BYTE *)(v8 + 25) || *a3 < *(_WORD *)(v8 + 28) )
    v5 = qword_180268CA0;
  *v4 = v5;
  return v4;
}
