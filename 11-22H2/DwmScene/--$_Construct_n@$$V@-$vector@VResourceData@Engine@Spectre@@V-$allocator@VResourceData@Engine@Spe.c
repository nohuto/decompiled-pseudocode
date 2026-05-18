/*
 * XREFs of ??$_Construct_n@$$V@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18006FCFC
 * Callers:
 *     ??0ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x18006FFFC (--0ResourceManager@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Engine@Spectre@@QEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FD94 (--$_Destroy_range@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Eng.c)
 *     ??1?$_Tidy_guard@V?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180070084 (--1-$_Tidy_guard@V-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spect.c)
 *     ?allocate@?$allocator@VResourceData@Engine@Spectre@@@std@@QEAAPEAVResourceData@Engine@Spectre@@_K@Z @ 0x1800705E8 (-allocate@-$allocator@VResourceData@Engine@Spectre@@@std@@QEAAPEAVResourceData@Engine@Spectre@@_.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@XZ @ 0x1800973E0 (--0ResourceData@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::vector<Spectre::Engine::ResourceData>::_Construct_n<>(
        Spectre::Engine::ResourceData **a1,
        Spectre::Engine::ResourceData **a2)
{
  __int64 v3; // rdi
  Spectre::Engine::ResourceData *v4; // rbx
  Spectre::Engine::ResourceData **v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v3 = 8LL;
  v4 = (Spectre::Engine::ResourceData *)std::allocator<Spectre::Engine::ResourceData>::allocate(a1, 8LL);
  *a1 = v4;
  a1[1] = v4;
  a1[2] = (Spectre::Engine::ResourceData *)((char *)v4 + 1024);
  v6 = a1;
  do
  {
    Spectre::Engine::ResourceData::ResourceData(v4);
    v4 = (Spectre::Engine::ResourceData *)((char *)v4 + 128);
    --v3;
  }
  while ( v3 );
  std::_Destroy_range<std::allocator<Spectre::Engine::ResourceData>>(v4);
  a1[1] = v4;
  v6 = 0LL;
  return std::_Tidy_guard<std::vector<Spectre::Engine::ResourceData>>::~_Tidy_guard<std::vector<Spectre::Engine::ResourceData>>(&v6);
}
