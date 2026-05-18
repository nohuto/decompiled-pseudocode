/*
 * XREFs of ??1RenderDeviceGeneric@Engine@Spectre@@UEAA@XZ @ 0x1800527C8
 * Callers:
 *     ??_ERenderDeviceGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180018050 (--_ERenderDeviceGeneric@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderDeviceGeneric::~RenderDeviceGeneric(Spectre::Engine::RenderDeviceGeneric *this)
{
  *(_QWORD *)this = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  Spectre::Engine::RenderDevice::~RenderDevice(this);
}
