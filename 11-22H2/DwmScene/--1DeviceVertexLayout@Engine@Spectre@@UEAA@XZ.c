/*
 * XREFs of ??1DeviceVertexLayout@Engine@Spectre@@UEAA@XZ @ 0x18008BD8C
 * Callers:
 *     ??_GDeviceVertexLayout@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052E60 (--_GDeviceVertexLayout@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1VertexLayoutD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D3A18 (--1VertexLayoutD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18007E75C (-_Tidy@-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementD.c)
 */

void __fastcall Spectre::Engine::DeviceVertexLayout::~DeviceVertexLayout(Spectre::Engine::DeviceVertexLayout *this)
{
  *(_QWORD *)this = &Spectre::Engine::DeviceVertexLayout::`vftable';
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Tidy((__int64)this + 112);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
