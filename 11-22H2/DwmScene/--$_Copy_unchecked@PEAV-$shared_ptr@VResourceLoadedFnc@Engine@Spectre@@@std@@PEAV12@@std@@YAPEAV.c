/*
 * XREFs of ??$_Copy_unchecked@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18009718C
 * Callers:
 *     ??$_Assign_range@PEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@1@0Uforward_iterator_tag@1@@Z @ 0x18009705C (--$_Assign_range@PEAV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall std::_Copy_unchecked<std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *,std::shared_ptr<Spectre::Engine::ResourceLoadedFnc> *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *i; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a1; i != a2; i += 2 )
  {
    v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v11,
           i);
    v7 = *v6;
    *v6 = *a3;
    *a3 = v7;
    v8 = v6[1];
    v6[1] = a3[1];
    v9 = v11[1];
    a3[1] = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    a3 += 2;
  }
  return a3;
}
