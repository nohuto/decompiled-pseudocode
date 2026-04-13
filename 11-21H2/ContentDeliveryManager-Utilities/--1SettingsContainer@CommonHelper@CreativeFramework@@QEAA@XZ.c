/*
 * XREFs of ??1SettingsContainer@CommonHelper@CreativeFramework@@QEAA@XZ @ 0x1800EC870
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSettingsContainer@CommonHelper@CreativeFramework@@@std@@EEAAXXZ @ 0x1800ED640 (-_Destroy@-$_Ref_count_obj@VSettingsContainer@CommonHelper@CreativeFramework@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x180066F70 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::CommonHelper::SettingsContainer::~SettingsContainer(
        CreativeFramework::CommonHelper::SettingsContainer *this)
{
  void **v2; // rbx
  __int64 v3; // rcx

  v2 = (void **)((char *)this + 16);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Erase(
    (__int64)this + 16,
    *(__int64 **)(*((_QWORD *)this + 2) + 8LL));
  *((_QWORD *)*v2 + 1) = *v2;
  *(_QWORD *)*v2 = *v2;
  *((_QWORD *)*v2 + 2) = *v2;
  v2[1] = 0LL;
  operator delete(*v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
