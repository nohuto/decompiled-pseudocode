/*
 * XREFs of ??0?$map@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18003FAF0
 * Callers:
 *     ??0Scene@Engine@Spectre@@AEAA@PEAV112@@Z @ 0x18003FB60 (--0Scene@Engine@Spectre@@AEAA@PEAV112@@Z.c)
 *     ??0Scene@Engine@Spectre@@AEAA@PEAV112@W4ThreadingMode@Lockable@12@@Z @ 0x18003FC0C (--0Scene@Engine@Spectre@@AEAA@PEAV112@W4ThreadingMode@Lockable@12@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::map<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>>::map<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}
