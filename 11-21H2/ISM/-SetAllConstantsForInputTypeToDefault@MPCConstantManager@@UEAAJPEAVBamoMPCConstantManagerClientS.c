/*
 * XREFs of ?SetAllConstantsForInputTypeToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800962A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_lower_bound@W4InputType@@@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@@1@AEBW4InputType@@@Z @ 0x180038DFC (--$_Find_lower_bound@W4InputType@@@-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@G.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4InputType@@@Z @ 0x1800973F4 (-erase@-$_Tree@V-$_Tmap_traits@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 */

__int64 __fastcall MPCConstantManager::SetAllConstantsForInputTypeToDefault(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  bool v4; // zf
  __int64 v6; // rdx
  int v7; // r10d
  __int64 v8; // r11
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 80) == 0LL;
  v11 = a3;
  v12 = a3;
  if ( !v4 )
  {
    v6 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::_Find_lower_bound<enum InputType>(
                       (__int64 *)(a1 + 72),
                       (__int64)&v10,
                       &v12)
                   + 16);
    if ( !*(_BYTE *)(v6 + 25) && v7 >= *(_DWORD *)(v6 + 32) )
      std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::erase(
        v8,
        &v11);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a4 + 8) + 24LL))(a4 + 8, 0LL);
}
