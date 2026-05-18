/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18003A324
 * Callers:
 *     ?AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003B744 (-AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VComponent@Engine@Spectre.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@0@@Z @ 0x18002FFB8 (--$_Uninitialized_move@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VCamera@Engine@Spectre@@@2@_K1@Z @ 0x180037F1C (-_Change_array@-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@V.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Engine::Component>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::Component> const &>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // rsi
  char *v16; // rdx
  _QWORD *v17; // r8
  char *v18; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)&a2[-*a1];
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)((char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = v13;
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v14, a3);
  v16 = (char *)a1[1];
  v17 = v15;
  v18 = (char *)*a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::Camera> *,std::allocator<std::shared_ptr<Spectre::Engine::Camera>>>(
      v18,
      a2,
      v15);
    v16 = (char *)a1[1];
    v17 = v14 + 2;
    v18 = a2;
  }
  std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::Camera> *,std::allocator<std::shared_ptr<Spectre::Engine::Camera>>>(
    v18,
    v16,
    v17);
  std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Change_array((__int64)a1, (__int64)v15, v9, v3);
  return v14;
}
