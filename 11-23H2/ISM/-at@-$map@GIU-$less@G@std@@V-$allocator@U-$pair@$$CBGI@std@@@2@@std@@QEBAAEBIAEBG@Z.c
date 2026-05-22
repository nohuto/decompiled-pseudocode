/*
 * XREFs of ?at@?$map@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@@std@@QEBAAEBIAEBG@Z @ 0x18005AEE0
 * Callers:
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800F3958 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@AEBG@Z @ 0x18005ABF8 (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@.c)
 */

__int64 __fastcall std::map<unsigned short,unsigned int>::at(__int64 a1, unsigned __int16 *a2)
{
  _WORD *v2; // r11
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
    a1,
    (__int64)v4,
    a2);
  if ( *(_BYTE *)(v5 + 25) || *v2 < *(_WORD *)(v5 + 28) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x18005AF29LL);
  }
  return v5 + 32;
}
