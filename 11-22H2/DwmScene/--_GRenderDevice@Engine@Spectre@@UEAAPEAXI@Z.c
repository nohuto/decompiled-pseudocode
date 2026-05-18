/*
 * XREFs of ??_GRenderDevice@Engine@Spectre@@UEAAPEAXI@Z @ 0x180025E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0 (--1RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::RenderDevice *__fastcall Spectre::Engine::RenderDevice::`scalar deleting destructor'(
        Spectre::Engine::RenderDevice *this,
        char a2)
{
  Spectre::Engine::RenderDevice::~RenderDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
