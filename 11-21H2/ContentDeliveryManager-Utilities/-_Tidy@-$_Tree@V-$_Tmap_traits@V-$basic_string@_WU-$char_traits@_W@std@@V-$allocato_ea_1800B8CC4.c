/*
 * XREFs of ?_Tidy@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800B8CC4
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::less_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0___::_Tree_std::_Tmap_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::less_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________0____::_1_::catch$3 @ 0x1800F608F (_std--_Tree_std--_Tmap_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__s_ea_1800F608F.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18006E450 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x1800734A8 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocat_ea_1800734A8.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Tidy(
        _QWORD *a1)
{
  __int64 v2; // rax
  void **v3; // rdi
  void **v4; // rsi
  __int64 result; // rax

  v2 = *a1;
  v3 = *(void ***)(*a1 + 8LL);
  v4 = v3;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
        (__int64)a1,
        v4[2]);
      v4 = (void **)*v4;
      std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>((__int64)(v3 + 4));
      operator delete(v3);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v2 = *a1;
  }
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}
