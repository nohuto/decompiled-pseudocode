/*
 * XREFs of ??_GDeviceVertexLayout@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052E60
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VVertexLayoutGeneric@Engine@Spectre@@@std@@EEAAXXZ @ 0x180053C20 (-_Destroy@-$_Ref_count_obj2@VVertexLayoutGeneric@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceVertexLayout@Engine@Spectre@@UEAA@XZ @ 0x18008BD8C (--1DeviceVertexLayout@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceVertexLayout *__fastcall Spectre::Engine::DeviceVertexLayout::`scalar deleting destructor'(
        Spectre::Engine::DeviceVertexLayout *this,
        char a2)
{
  Spectre::Engine::DeviceVertexLayout::~DeviceVertexLayout(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
