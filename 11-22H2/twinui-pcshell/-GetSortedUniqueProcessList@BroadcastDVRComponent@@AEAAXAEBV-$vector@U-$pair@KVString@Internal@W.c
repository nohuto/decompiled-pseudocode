/*
 * XREFs of ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1803D89EC
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1801BF15C (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ??$_Emplace_reallocate@VString@Internal@Windows@@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAPEAVString@Internal@Windows@@QEAV234@$$QEAV234@@Z @ 0x1803D3060 (--$_Emplace_reallocate@VString@Internal@Windows@@@-$vector@VString@Internal@Windows@@V-$allocato.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1803D3C24 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x1803D4130 (--$unique@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@VString@Internal@Windows@@@std@@@s.c)
 *     ?_Reallocate_exactly@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1803DCD8C (-_Reallocate_exactly@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@.c)
 *     ?erase@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@2@0@Z @ 0x1803DD13C (-erase@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall BroadcastDVRComponent::GetSortedUniqueProcessList(HSTRING a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r15
  Windows::Internal::String *v8; // rdi
  HRESULT v9; // eax
  HSTRING v10; // rbx
  HSTRING v11; // rcx
  HSTRING *v12; // rbx
  char v13; // r9
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  Windows::Internal::String *v15; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF
  HSTRING newString; // [rsp+68h] [rbp+10h] BYREF

  string = a1;
  v14 = 0LL;
  v15 = 0LL;
  v5 = (a2[1] - *a2) >> 4;
  if ( v5 )
  {
    if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<Windows::Internal::String>::_Reallocate_exactly(&v14);
  }
  v6 = *a2;
  v7 = a2[1];
  v8 = (Windows::Internal::String *)*((_QWORD *)&v14 + 1);
  while ( v6 != v7 )
  {
    string = 0LL;
    v9 = WindowsDuplicateString(*(HSTRING *)(v6 + 8), &newString);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x888,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v9);
      std::vector<Windows::Internal::String>::_Tidy((__int64)&v14);
      return;
    }
    v10 = newString;
    string = newString;
    WindowsDeleteString(0LL);
    if ( v8 == v15 )
    {
      std::vector<Windows::Internal::String>::_Emplace_reallocate<Windows::Internal::String>(
        (__int64 *)&v14,
        (__int64)v8,
        &string);
      v8 = (Windows::Internal::String *)*((_QWORD *)&v14 + 1);
      v11 = string;
    }
    else
    {
      *(_QWORD *)v8 = v10;
      v11 = 0LL;
      v8 = (Windows::Internal::String *)((char *)v8 + 8);
      *((_QWORD *)&v14 + 1) = v8;
    }
    if ( v11 )
      WindowsDeleteString(v11);
    v6 += 16LL;
  }
  v12 = (HSTRING *)v14;
  std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(
    (Windows::Internal::String *)v14,
    v8,
    (__int64)((__int64)v8 - v14) >> 3,
    0);
  std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Windows::Internal::String>>>,std::equal_to<void>>(
    (HSTRING **)&string,
    v12,
    (HSTRING *)v8,
    v13);
  std::vector<Windows::Internal::String>::erase(&v14, &string, string, v8);
  if ( (__int128 *)a3 != &v14 )
  {
    std::vector<Windows::Internal::String>::_Tidy(a3);
    *(_OWORD *)a3 = v14;
    *(_QWORD *)(a3 + 16) = v15;
    v14 = 0LL;
    v15 = 0LL;
  }
  std::vector<Windows::Internal::String>::_Tidy((__int64)&v14);
}
