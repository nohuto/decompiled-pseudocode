/*
 * XREFs of ??1EngineDescription@Engine@Spectre@@QEAA@XZ @ 0x180017A28
 * Callers:
 *     _Spectre::dtor$2::Engine::Create_Spectre::Engine::ViewerEngine_Spectre::Engine::D3D11::RenderDeviceD3D11__::_1_::dtor$2 @ 0x1800E43F8 (_Spectre--dtor$2--Engine--Create_Spectre--Engine--ViewerEngine_Spectre--Engine--D3D11--RenderDev.c)
 *     _Spectre::dtor$18::Engine::Engine_::_1_::dtor$18 @ 0x1800E55DB (_Spectre--dtor$18--Engine--Engine_--_1_--dtor$18.c)
 *     _Spectre::dtor$15::Engine::_Engine_::_1_::dtor$15 @ 0x1800E58DE (_Spectre--dtor$15--Engine--_Engine_--_1_--dtor$15.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::EngineDescription::~EngineDescription(Spectre::Engine::EngineDescription *this)
{
  Spectre::Engine::DeviceDescription::~DeviceDescription((Spectre::Engine::EngineDescription *)((char *)this + 40));
}
