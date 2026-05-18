/*
 * XREFs of ??_EDepthBufferGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052CC0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VDepthBufferGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x180053B80 (-_Destroy@-$_Ref_count_obj2@VDepthBufferGeneric@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceDepthBuffer@Engine@Spectre@@UEAA@XZ @ 0x18006F1A0 (--1DeviceDepthBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DepthBufferGeneric *__fastcall Spectre::Engine::DepthBufferGeneric::`vector deleting destructor'(
        Spectre::Engine::DepthBufferGeneric *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Engine::DepthBufferGeneric::`vftable';
  Spectre::Engine::DeviceDepthBuffer::~DeviceDepthBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
