/*
 * XREFs of ??0ViewerSceneData@ViewerEngine@Engine@Spectre@@QEAA@XZ @ 0x180063E74
 * Callers:
 *     ??$make_shared@UViewerSceneData@ViewerEngine@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@UViewerSceneData@ViewerEngine@Engine@Spectre@@@0@XZ @ 0x180063784 (--$make_shared@UViewerSceneData@ViewerEngine@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@UViewerS.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
Spectre::Engine::ViewerEngine::ViewerSceneData *__fastcall Spectre::Engine::ViewerEngine::ViewerSceneData::ViewerSceneData(
        Spectre::Engine::ViewerEngine::ViewerSceneData *this)
{
  _QWORD *v2; // rax

  *(_QWORD *)this = &Spectre::Engine::ViewerEngine::ViewerSceneData::`vftable';
  `eh vector constructor iterator'(
    (char *)this + 8,
    16LL,
    3LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  `eh vector constructor iterator'(
    (char *)this + 56,
    16LL,
    3LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 13) = v2;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 136,
    16LL,
    3LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  return this;
}
