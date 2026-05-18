/*
 * XREFs of ??_EDeviceResource@Engine@Spectre@@UEAAPEAXI@Z @ 0x180029360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceResource@Engine@Spectre@@UEAA@XZ @ 0x18002802C (--1DeviceResource@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceResource *__fastcall Spectre::Engine::DeviceResource::`vector deleting destructor'(
        Spectre::Engine::DeviceResource *this,
        char a2)
{
  Spectre::Engine::DeviceResource::~DeviceResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
