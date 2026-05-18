/*
 * XREFs of ??1?$_Temporary_owner@VRenderDeviceGeneric@Engine@Spectre@@@std@@QEAA@XZ @ 0x180017970
 * Callers:
 *     ??$?0VRenderDeviceGeneric@Engine@Spectre@@$0A@@?$shared_ptr@VRenderDeviceGeneric@Engine@Spectre@@@std@@QEAA@PEAVRenderDeviceGeneric@Engine@Spectre@@@Z @ 0x180015530 (--$-0VRenderDeviceGeneric@Engine@Spectre@@$0A@@-$shared_ptr@VRenderDeviceGeneric@Engine@Spectre@.c)
 * Callees:
 *     ??_ERenderDeviceGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180018050 (--_ERenderDeviceGeneric@Engine@Spectre@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<Spectre::Engine::RenderDeviceGeneric>::~_Temporary_owner<Spectre::Engine::RenderDeviceGeneric>(
        Spectre::Engine::RenderDeviceGeneric **a1)
{
  Spectre::Engine::RenderDeviceGeneric *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return Spectre::Engine::RenderDeviceGeneric::`vector deleting destructor'(v1, 1u);
  return result;
}
