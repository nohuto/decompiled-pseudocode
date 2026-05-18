/*
 * XREFs of ??$_Emplace_reallocate@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x180016F04
 * Callers:
 *     ?push_back@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@2@@Z @ 0x18001B88C (-push_back@-$vector@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$shared_pt.c)
 *     ?ReleaseQuery@QueryPool@RenderDevice@Engine@Spectre@@UEAAX$$QEAV?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@Z @ 0x180026FE0 (-ReleaseQuery@QueryPool@RenderDevice@Engine@Spectre@@UEAAX$$QEAV-$shared_ptr@VGpuQuery@Engine@Sp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x180012228 (--$_Uninitialized_move@PEAV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$sha.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@2@_K1@Z @ 0x18001306C (-_Change_array@-$vector@V-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V-$allocator@V-$share.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<Spectre::Engine::IRenderOutput>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::IRenderOutput>>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // rsi
  _QWORD *v15; // r8
  char *v16; // rdx
  char *v17; // rcx

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
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
      v17,
      a2,
      v13);
    v16 = (char *)a1[1];
    v15 = v14 + 2;
    v17 = a2;
  }
  std::_Uninitialized_move<std::shared_ptr<Spectre::Engine::IRenderOutput> *,std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(
    v17,
    v16,
    v15);
  std::vector<std::shared_ptr<Spectre::Utils::Tweening::Tween>>::_Change_array((__int64)a1, (__int64)v13, v9, v3);
  return v14;
}
