/*
 * XREFs of ??$make_shared@VSettingsContainer@CommonHelper@CreativeFramework@@AEAPEAUIApplicationDataContainer@Storage@Windows@@@std@@YA?AV?$shared_ptr@VSettingsContainer@CommonHelper@CreativeFramework@@@0@AEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800D3780
 * Callers:
 *     ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800D3F40 (-MakeSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer@Com.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??0?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBUless@Details@CommonHelper@CreativeFramework@@AEBV?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@1@@Z @ 0x1800D3928 (--0-$_Tree_comp@$0A@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$all_ea_1800D3928.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_shared<CreativeFramework::CommonHelper::SettingsContainer,Windows::Storage::IApplicationDataContainer * &>(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  __int64 v7; // rcx

  v4 = operator new(0x38uLL);
  v6 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<CreativeFramework::CommonHelper::SettingsContainer>::`vftable';
    v7 = *a2;
    *((_QWORD *)v4 + 2) = &CreativeFramework::CommonHelper::SettingsContainer::`vftable';
    *((_QWORD *)v4 + 3) = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    std::_Tree_comp<0,std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Tree_comp<0,std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(
      v6 + 8,
      v5);
    *((_BYTE *)v6 + 48) = 1;
  }
  else
  {
    v6 = 0LL;
  }
  a1[1] = v6;
  *a1 = v6 + 4;
  return a1;
}
