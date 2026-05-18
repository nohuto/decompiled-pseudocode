/*
 * XREFs of ??$_Emplace_reallocate@VResourceData@Engine@Spectre@@@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAPEAVResourceData@Engine@Spectre@@QEAV234@$$QEAV234@@Z @ 0x18006FDCC
 * Callers:
 *     ?push_back@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAX$$QEAVResourceData@Engine@Spectre@@@Z @ 0x1800706D4 (-push_back@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@st.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Engine@Spectre@@QEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FD94 (--$_Destroy_range@V-$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAXPEAVResourceData@Eng.c)
 *     ??$_Uninitialized_move@PEAVResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAPEAVResourceData@Engine@Spectre@@QEAV123@0PEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FF24 (--$_Uninitialized_move@PEAVResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectr.c)
 *     ?_Change_array@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAXQEAVResourceData@Engine@Spectre@@_K1@Z @ 0x180070524 (-_Change_array@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@.c)
 *     ?allocate@?$allocator@VResourceData@Engine@Spectre@@@std@@QEAAPEAVResourceData@Engine@Spectre@@_K@Z @ 0x1800705E8 (-allocate@-$allocator@VResourceData@Engine@Spectre@@@std@@QEAAPEAVResourceData@Engine@Spectre@@_.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z @ 0x180097360 (--0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::ResourceData *__fastcall std::vector<Spectre::Engine::ResourceData>::_Emplace_reallocate<Spectre::Engine::ResourceData>(
        __int64 a1,
        struct Spectre::Engine::ResourceData *a2,
        const struct Spectre::Engine::ResourceData *a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  Spectre::Engine::ResourceData *v12; // r13
  const struct Spectre::Engine::ResourceData *v13; // r15
  const struct Spectre::Engine::ResourceData *v14; // rdi
  Spectre::Engine::ResourceData *v15; // rbx
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]

  v5 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 7;
  v7 = 0x1FFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 7;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  v11 = std::allocator<Spectre::Engine::ResourceData>::allocate(v9, v7);
  v12 = (Spectre::Engine::ResourceData *)((v5 & 0xFFFFFFFFFFFFFF80uLL) + v11);
  Spectre::Engine::ResourceData::ResourceData(v12, a3);
  v13 = *(const struct Spectre::Engine::ResourceData **)(a1 + 8);
  v14 = *(const struct Spectre::Engine::ResourceData **)a1;
  if ( a2 == v13 )
  {
    v17 = v11;
    v15 = (Spectre::Engine::ResourceData *)v11;
    v18 = v11;
    v19 = a1;
    while ( v14 != v13 )
    {
      Spectre::Engine::ResourceData::ResourceData(v15, v14);
      v15 = (Spectre::Engine::ResourceData *)((char *)v15 + 128);
      v18 = (__int64)v15;
      v14 = (const struct Spectre::Engine::ResourceData *)((char *)v14 + 128);
    }
    std::_Destroy_range<std::allocator<Spectre::Engine::ResourceData>>(v15, v15);
  }
  else
  {
    std::_Uninitialized_move<Spectre::Engine::ResourceData *>(*(struct Spectre::Engine::ResourceData **)a1);
    std::_Uninitialized_move<Spectre::Engine::ResourceData *>(a2);
  }
  std::vector<Spectre::Engine::ResourceData>::_Change_array(a1, v11, v8, v7, v17, v18, v19);
  return v12;
}
