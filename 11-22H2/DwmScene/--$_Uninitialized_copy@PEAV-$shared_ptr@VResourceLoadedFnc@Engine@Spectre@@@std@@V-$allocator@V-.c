/*
 * XREFs of ??$_Uninitialized_copy@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@YAPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@0@@Z @ 0x1800972F0
 * Callers:
 *     ??$_Assign_range@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@1@0Uforward_iterator_tag@1@@Z @ 0x18009705C (--$_Assign_range@PEAV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     ??$_Insert_range@PEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@1@PEAV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800E0510 (--$_Insert_range@PEAV-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@-$vector@V-$shared_ptr@V.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x18001203C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YA.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::_Uninitialized_copy<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *,std::allocator<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // r8

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a3, v5);
      a3 += 2;
      v5 = (_QWORD *)(v6 + 16);
    }
    while ( v5 != v7 );
  }
  std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>((__int64)a3, (__int64)a3);
  return a3;
}
