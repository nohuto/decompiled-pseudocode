/*
 * XREFs of ??_EDeviceDepthBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x18006F220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceDepthBuffer@Engine@Spectre@@UEAA@XZ @ 0x18006F1A0 (--1DeviceDepthBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceDepthBuffer *__fastcall Spectre::Engine::DeviceDepthBuffer::`vector deleting destructor'(
        Spectre::Engine::DeviceDepthBuffer *this,
        char a2)
{
  Spectre::Engine::DeviceDepthBuffer::~DeviceDepthBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
