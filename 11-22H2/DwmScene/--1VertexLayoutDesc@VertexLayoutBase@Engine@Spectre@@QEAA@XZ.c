/*
 * XREFs of ??1VertexLayoutDesc@VertexLayoutBase@Engine@Spectre@@QEAA@XZ @ 0x18007CC3C
 * Callers:
 *     _Spectre::Engine::ShaderPipeline::ShaderPipeline_::_1_::dtor$6 @ 0x1800EA4E9 (_Spectre--Engine--ShaderPipeline--ShaderPipeline_--_1_--dtor$6.c)
 *     _Spectre::Engine::VertexLayout::VertexLayout_::_1_::dtor$1 @ 0x1800EA612 (_Spectre--Engine--VertexLayout--VertexLayout_--_1_--dtor$1.c)
 *     _Spectre::Engine::DeviceVertexLayout::Create_::_1_::dtor$0 @ 0x1800EA628 (_Spectre--Engine--DeviceVertexLayout--Create_--_1_--dtor$0.c)
 *     _Spectre::Engine::VertexLayout::Create_::_1_::dtor$0 @ 0x1800EA63A (_Spectre--Engine--VertexLayout--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::VertexLayoutBase::VertexLayoutDesc::~VertexLayoutDesc(
        Spectre::Engine::VertexLayoutBase::VertexLayoutDesc *this)
{
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Tidy((char *)this + 16);
}
