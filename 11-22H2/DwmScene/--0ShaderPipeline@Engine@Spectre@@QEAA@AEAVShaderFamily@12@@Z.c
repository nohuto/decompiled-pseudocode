/*
 * XREFs of ??0ShaderPipeline@Engine@Spectre@@QEAA@AEAVShaderFamily@12@@Z @ 0x18008662C
 * Callers:
 *     ??$make_shared@VShaderPipeline@Engine@Spectre@@AEAVShaderFamily@23@@std@@YA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@AEAVShaderFamily@Engine@Spectre@@@Z @ 0x18005F690 (--$make_shared@VShaderPipeline@Engine@Spectre@@AEAVShaderFamily@23@@std@@YA-AV-$shared_ptr@VShad.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=13
Spectre::Engine::ShaderPipeline *__fastcall Spectre::Engine::ShaderPipeline::ShaderPipeline(
        Spectre::Engine::ShaderPipeline *this,
        struct Spectre::Engine::ShaderFamily *a2)
{
  _QWORD *v3; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 2;
  *((_DWORD *)this + 30) = 3;
  *((_WORD *)this + 62) = 257;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  `eh vector constructor iterator'((char *)this + 192, 32LL, 6LL, (void (*)(void *))std::string::string);
  `eh vector constructor iterator'(
    (char *)this + 384,
    16LL,
    6LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 60) = v3;
  `eh vector constructor iterator'(
    (char *)this + 496,
    16LL,
    10LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  return this;
}
