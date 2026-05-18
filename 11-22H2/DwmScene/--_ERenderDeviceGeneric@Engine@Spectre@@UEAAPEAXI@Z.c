/*
 * XREFs of ??_ERenderDeviceGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180018050
 * Callers:
 *     ??1?$_Temporary_owner@VRenderDeviceGeneric@Engine@Spectre@@@std@@QEAA@XZ @ 0x180017970 (--1-$_Temporary_owner@VRenderDeviceGeneric@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VRenderDeviceGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x18001B6E0 (-_Destroy@-$_Ref_count@VRenderDeviceGeneric@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderDeviceGeneric@Engine@Spectre@@UEAA@XZ @ 0x1800527C8 (--1RenderDeviceGeneric@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::RenderDeviceGeneric *__fastcall Spectre::Engine::RenderDeviceGeneric::`vector deleting destructor'(
        Spectre::Engine::RenderDeviceGeneric *this,
        char a2)
{
  Spectre::Engine::RenderDeviceGeneric::~RenderDeviceGeneric(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
