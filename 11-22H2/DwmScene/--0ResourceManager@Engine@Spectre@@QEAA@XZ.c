/*
 * XREFs of ??0ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x18006FFFC
 * Callers:
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 * Callees:
 *     ??0?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEAA@XZ @ 0x180030E6C (--0-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@s.c)
 *     ??$_Construct_n@$$V@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18006FCFC (--$_Construct_n@$$V@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spe.c)
 *     ?clear@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAXXZ @ 0x180070658 (-clear@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@std@@@.c)
 */

// Hidden C++ exception states: #wind=4
Spectre::Engine::ResourceManager *__fastcall Spectre::Engine::ResourceManager::ResourceManager(
        Spectre::Engine::ResourceManager *this,
        Spectre::Engine::ResourceData **a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  std::vector<Spectre::Engine::ResourceData>::_Construct_n<>((Spectre::Engine::ResourceData **)this, a2);
  _Mtx_init_in_situ((Spectre::Engine::ResourceManager *)((char *)this + 24), 2);
  _Mtx_init_in_situ((Spectre::Engine::ResourceManager *)((char *)this + 104), 2);
  std::map<unsigned int,_LARGE_INTEGER>::map<unsigned int,_LARGE_INTEGER>((_QWORD *)this + 23);
  std::map<unsigned int,_LARGE_INTEGER>::map<unsigned int,_LARGE_INTEGER>((_QWORD *)this + 25);
  *((_DWORD *)this + 54) = 0;
  std::vector<Spectre::Engine::ResourceData>::clear(this);
  return this;
}
