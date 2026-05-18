/*
 * XREFs of ?RemoveHandler@JsonConfigurationManager@Utils@Spectre@@UEAAXH@Z @ 0x1800DED40
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@HV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBH@Z @ 0x1800DF4EC (-erase@-$_Tree@V-$_Tmap_traits@HV-$function@$$A6AXAEBV-$basic_string@_WU-$char_traits@_W@std@@V-.c)
 */

void __fastcall Spectre::Utils::JsonConfigurationManager::RemoveHandler(
        Spectre::Utils::JsonConfigurationManager *this,
        int a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = (Spectre::Utils::JsonConfigurationManager *)((char *)this + 160);
  std::_Mutex_base::lock((Spectre::Utils::JsonConfigurationManager *)((char *)this + 160));
  std::_Tree<std::_Tmap_traits<int,std::function<void (std::wstring const &)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (std::wstring const &)>>>,0>>::erase(
    (char *)this + 240,
    &v4);
  _Mtx_unlock(v2);
}
