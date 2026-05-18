/*
 * XREFs of ??1?$array@V?$shared_ptr@VShader@Engine@Spectre@@@std@@$05@std@@QEAA@XZ @ 0x18008682C
 * Callers:
 *     _Spectre::Engine::ShaderPipeline::ShaderPipeline_::_1_::dtor$9 @ 0x1800EA534 (_Spectre--Engine--ShaderPipeline--ShaderPipeline_--_1_--dtor$9.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall std::array<std::shared_ptr<Spectre::Engine::Shader>,6>::~array<std::shared_ptr<Spectre::Engine::Shader>,6>(
        char *a1)
{
  `eh vector destructor iterator'(
    a1,
    16LL,
    6LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
}
