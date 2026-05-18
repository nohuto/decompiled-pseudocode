/*
 * XREFs of ??1RenderStateGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B834
 * Callers:
 *     ??_GRenderStateGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052DA0 (--_GRenderStateGeneric@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderStateGeneric::~RenderStateGeneric(Spectre::Engine::RenderStateGeneric *this)
{
  *(_QWORD *)this = &Spectre::Engine::RenderStateGeneric::`vftable';
  Spectre::Engine::DeviceRenderState::~DeviceRenderState(this);
}
