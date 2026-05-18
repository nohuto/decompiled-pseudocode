/*
 * XREFs of ??_GDeviceVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008B3C8 (--1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceVertexBuffer *__fastcall Spectre::Engine::DeviceVertexBuffer::`scalar deleting destructor'(
        Spectre::Engine::DeviceVertexBuffer *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  Spectre::Engine::DeviceArrayBuffer::~DeviceArrayBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
