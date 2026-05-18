/*
 * XREFs of ??0ResourceData@Engine@Spectre@@QEAA@XZ @ 0x1800973E0
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18006FCFC (--$_Construct_n@$$V@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spe.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 *     ??0?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@_KAEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180097334 (--0-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VR.c)
 */

// Hidden C++ exception states: #wind=3
Spectre::Engine::ResourceData *__fastcall Spectre::Engine::ResourceData::ResourceData(
        Spectre::Engine::ResourceData *this,
        __int64 a2)
{
  std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>(
    this,
    a2);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  _Mtx_init_in_situ((Spectre::Engine::ResourceData *)((char *)this + 48), 2);
  std::_Mutex_base::lock((Spectre::Engine::ResourceData *)((char *)this + 48));
  std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear((__int64 *)this);
  _Mtx_unlock((Spectre::Engine::ResourceData *)((char *)this + 48));
  return this;
}
