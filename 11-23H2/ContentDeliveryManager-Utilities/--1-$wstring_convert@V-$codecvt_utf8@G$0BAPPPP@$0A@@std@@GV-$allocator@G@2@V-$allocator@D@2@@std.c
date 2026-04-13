/*
 * XREFs of ??1?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18006E6F0
 * Callers:
 *     ??_E?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x18006ED50 (--_E-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@st.c)
 *     ?Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBD@Z @ 0x180071340 (-Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@GU-$char_tr.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x1800713E0 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     _CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String_::_1_::dtor$2 @ 0x1800D7F66 (_CreativeFramework--CommonHelper--StringUtils--WStringToUtf8String_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180043320 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(
        __int64 a1)
{
  *(_QWORD *)a1 = &std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::`vftable';
  std::wstring::_Tidy((_QWORD *)(a1 + 56), 1, 0LL);
  std::string::_Tidy((void **)(a1 + 24), 1, 0LL);
  std::locale::~locale((std::locale *)(a1 + 16));
}
