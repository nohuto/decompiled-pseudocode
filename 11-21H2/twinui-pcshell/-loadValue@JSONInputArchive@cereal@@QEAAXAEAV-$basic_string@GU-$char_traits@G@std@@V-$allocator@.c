/*
 * XREFs of ?loadValue@JSONInputArchive@cereal@@QEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18035147C
 * Callers:
 *     ??$process@V?$NameValuePair@AEAG@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAG@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x18034A0C8 (--$process@V-$NameValuePair@AEAG@cereal@@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@s.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18034AA88 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18034AA88.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18046E650 (--$serialize@VJSONInputArchive@cereal@@@_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperien.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18046E744 (--$serialize@VJSONInputArchive@cereal@@@_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardEx.c)
 *     ?deserialize@?$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18058BC20 (-deserialize@-$test_merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Window.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetString@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBDXZ @ 0x18034E738 (-GetString@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?string_to_wstring@util@cereal@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@4@@Z @ 0x180351F68 (-string_to_wstring@util@cereal@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::JSONInputArchive::loadValue(cereal::JSONInputArchive *a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 String; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 result; // rax
  WCHAR WideCharStr[16]; // [rsp+30h] [rbp-48h] BYREF

  cereal::JSONInputArchive::search(a1);
  v4 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)a1 + 43) - 40LL);
  String = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(v4);
  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(String + v6) );
  v7 = cereal::util::string_to_wstring(WideCharStr);
  if ( a2 != (_OWORD *)v7 )
  {
    std::wstring::_Tidy_deallocate((__int64)a2);
    *a2 = *(_OWORD *)v7;
    a2[1] = *(_OWORD *)(v7 + 16);
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 7LL;
    *(_WORD *)v7 = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)WideCharStr);
  result = *((_QWORD *)a1 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
