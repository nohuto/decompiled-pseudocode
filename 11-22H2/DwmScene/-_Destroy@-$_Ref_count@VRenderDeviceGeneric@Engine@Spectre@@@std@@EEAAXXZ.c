/*
 * XREFs of ?_Destroy@?$_Ref_count@VRenderDeviceGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x18001B6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ERenderDeviceGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180018050 (--_ERenderDeviceGeneric@Engine@Spectre@@UEAAPEAXI@Z.c)
 */

Spectre::Engine::RenderDeviceGeneric *__fastcall std::_Ref_count<Spectre::Engine::RenderDeviceGeneric>::_Destroy(
        __int64 a1)
{
  Spectre::Engine::RenderDeviceGeneric *v1; // rcx
  Spectre::Engine::RenderDeviceGeneric *result; // rax

  v1 = *(Spectre::Engine::RenderDeviceGeneric **)(a1 + 16);
  if ( v1 )
    return Spectre::Engine::RenderDeviceGeneric::`vector deleting destructor'(v1, 1);
  return result;
}
