/*
 * XREFs of ??_GDeviceFrameBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800280E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceFrameBuffer@Engine@Spectre@@UEAA@XZ @ 0x180027FE8 (--1DeviceFrameBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceFrameBuffer *__fastcall Spectre::Engine::DeviceFrameBuffer::`scalar deleting destructor'(
        Spectre::Engine::DeviceFrameBuffer *this,
        char a2)
{
  Spectre::Engine::DeviceFrameBuffer::~DeviceFrameBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
