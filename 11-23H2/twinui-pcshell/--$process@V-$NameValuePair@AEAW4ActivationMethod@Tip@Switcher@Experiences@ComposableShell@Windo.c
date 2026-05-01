/*
 * XREFs of ??$process@V?$NameValuePair@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEA_N@2@V42@V42@V42@V?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@222$$QEAV?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x180540FB0
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805415B0 (--$serialize@VJSONInputArchive@cereal@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experience.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x180163690 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@111$$QEAV?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x180540EF8 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V32@V-$NameValuePair@A.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::ActivationMethod &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r10
  _DWORD *v12; // rdi
  cereal::JSONInputArchive *v13; // rbx
  _BYTE *v14; // rax
  int Uint; // eax

  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v11 + 304) = *a2;
  v12 = (_DWORD *)a2[1];
  v13 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v13);
  v14 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v13 + 43) - 40LL);
  Uint = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v14);
  ++*(_QWORD *)(*((_QWORD *)v13 + 43) - 16LL);
  *v12 = Uint;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
           a1,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
