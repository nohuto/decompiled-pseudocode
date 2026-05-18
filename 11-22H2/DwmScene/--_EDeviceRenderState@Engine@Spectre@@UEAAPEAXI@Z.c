/*
 * XREFs of ??_EDeviceRenderState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008B850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceRenderState@Engine@Spectre@@UEAA@XZ @ 0x18008B800 (--1DeviceRenderState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceRenderState *__fastcall Spectre::Engine::DeviceRenderState::`vector deleting destructor'(
        Spectre::Engine::DeviceRenderState *this,
        char a2)
{
  Spectre::Engine::DeviceRenderState::~DeviceRenderState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
