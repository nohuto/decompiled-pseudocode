/*
 * XREFs of ??1SettingsContainer@CommonHelper@CreativeFramework@@QEAA@XZ @ 0x1800D39A4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSettingsContainer@CommonHelper@CreativeFramework@@@std@@EEAAXXZ @ 0x1800D42A0 (-_Destroy@-$_Ref_count_obj@VSettingsContainer@CommonHelper@CreativeFramework@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18009B18C (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$s.c)
 */

void __fastcall CreativeFramework::CommonHelper::SettingsContainer::~SettingsContainer(
        CreativeFramework::CommonHelper::SettingsContainer *this)
{
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>((void **)this + 2);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 1);
}
