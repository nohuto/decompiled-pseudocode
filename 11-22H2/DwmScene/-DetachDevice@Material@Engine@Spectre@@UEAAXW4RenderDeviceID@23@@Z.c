/*
 * XREFs of ?DetachDevice@Material@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x1800442A0
 * Callers:
 *     ?DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180060590 (-DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     ?DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180084D40 (-DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 */

__int64 __fastcall Spectre::Engine::Material::DetachDevice(__int64 a1, int a2)
{
  if ( *(_QWORD *)(a1 + 120) )
    Spectre::Engine::ShaderPropertyBlock::DetachDevice();
  return Spectre::Engine::SharedResource::DetachDevice(a1, a2);
}
