/*
 * XREFs of ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800D3F40
 * Callers:
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800D3980 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800D3DC8 (-MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer.c)
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x1800D3F94 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VSettingsContainer@CommonHelper@CreativeFramework@@AEAPEAUIApplicationDataContainer@Storage@Windows@@@std@@YA?AV?$shared_ptr@VSettingsContainer@CommonHelper@CreativeFramework@@@0@AEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800D3780 (--$make_shared@VSettingsContainer@CommonHelper@CreativeFramework@@AEAPEAUIApplicationDataContain.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::CommonHelper::MakeSettingsContainer(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v3 = std::make_shared<CreativeFramework::CommonHelper::SettingsContainer,Windows::Storage::IApplicationDataContainer * &>(
         &v5,
         &v7);
  *a1 = *v3;
  a1[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
