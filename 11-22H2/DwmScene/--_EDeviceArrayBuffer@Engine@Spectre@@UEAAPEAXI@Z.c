/*
 * XREFs of ??_EDeviceArrayBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052D60
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VIndexBufferGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x180053BA0 (-_Destroy@-$_Ref_count_obj2@VIndexBufferGeneric@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008B3C8 (--1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceArrayBuffer *__fastcall Spectre::Engine::DeviceArrayBuffer::`vector deleting destructor'(
        Spectre::Engine::DeviceArrayBuffer *this,
        char a2)
{
  Spectre::Engine::DeviceArrayBuffer::~DeviceArrayBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
