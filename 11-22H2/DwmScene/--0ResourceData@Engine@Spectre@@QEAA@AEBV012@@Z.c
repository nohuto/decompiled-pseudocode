/*
 * XREFs of ??0ResourceData@Engine@Spectre@@QEAA@AEBV012@@Z @ 0x180097360
 * Callers:
 *     ??$_Emplace_reallocate@VResourceData@Engine@Spectre@@@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAPEAVResourceData@Engine@Spectre@@QEAV234@$$QEAV234@@Z @ 0x18006FDCC (--$_Emplace_reallocate@VResourceData@Engine@Spectre@@@-$vector@VResourceData@Engine@Spectre@@V-$.c)
 *     ??$_Uninitialized_move@PEAVResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@YAPEAVResourceData@Engine@Spectre@@QEAV123@0PEAV123@AEAV?$allocator@VResourceData@Engine@Spectre@@@0@@Z @ 0x18006FF24 (--$_Uninitialized_move@PEAVResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectr.c)
 *     ?push_back@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAX$$QEAVResourceData@Engine@Spectre@@@Z @ 0x1800706D4 (-push_back@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@st.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@std@@@std@@@1@0AEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180096FAC (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VResourceLoadedFnc@.c)
 */

// Hidden C++ exception states: #wind=3
Spectre::Engine::ResourceData *__fastcall Spectre::Engine::ResourceData::ResourceData(
        Spectre::Engine::ResourceData *this,
        char **a2)
{
  std::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>::vector<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>(
    this,
    *a2,
    a2[1]);
  *((_QWORD *)this + 3) = a2[3];
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)this + 4,
    a2 + 4);
  _Mtx_init_in_situ((Spectre::Engine::ResourceData *)((char *)this + 48), 2);
  std::_Mutex_base::lock((Spectre::Engine::ResourceData *)((char *)this + 48));
  _Mtx_unlock((Spectre::Engine::ResourceData *)((char *)this + 48));
  return this;
}
