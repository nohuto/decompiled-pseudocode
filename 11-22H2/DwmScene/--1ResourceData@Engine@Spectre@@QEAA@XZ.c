/*
 * XREFs of ??1ResourceData@Engine@Spectre@@QEAA@XZ @ 0x1800975A8
 * Callers:
 *     ??$_Destroy_range@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Engine@Spectre@@QEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FD94 (--$_Destroy_range@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Eng.c)
 *     ?Add@ResourceManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x180070160 (-Add@ResourceManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@.c)
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 *     _Spectre::Engine::ResourceManager::Request_::_1_::dtor$5 @ 0x1800E8462 (_Spectre--Engine--ResourceManager--Request_--_1_--dtor$5.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ResourceData::~ResourceData(Spectre::Engine::ResourceData *this)
{
  std::_Ref_count_base *v2; // rcx

  _Mtx_destroy_in_situ((Spectre::Engine::ResourceData *)((char *)this + 48));
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)this);
}
