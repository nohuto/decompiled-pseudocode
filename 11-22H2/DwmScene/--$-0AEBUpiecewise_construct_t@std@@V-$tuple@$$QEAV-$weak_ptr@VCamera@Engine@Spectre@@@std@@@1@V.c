/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$weak_ptr@VCamera@Engine@Spectre@@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$weak_ptr@VCamera@Engine@Spectre@@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180056B58
 * Callers:
 *     ??$_Try_emplace@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@$$V@?$map@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@U?$owner_less@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VCamera@Engine@Spectre@@@1@@Z @ 0x180056F38 (--$_Try_emplace@V-$weak_ptr@VCamera@Engine@Spectre@@@std@@$$V@-$map@V-$weak_ptr@VCamera@Engine@S.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = operator new(0x48uLL);
  a1[1] = v7;
  v8 = *a5;
  v7[4] = 0LL;
  v7[5] = 0LL;
  v7[4] = *v8;
  v7[5] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  *(_QWORD *)((char *)v7 + 52) = 0LL;
  *(_QWORD *)((char *)v7 + 60) = 0LL;
  v7[6] = 0LL;
  v7[7] = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
