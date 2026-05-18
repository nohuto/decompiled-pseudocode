/*
 * XREFs of ??1DeviceConstantBuffer@Engine@Spectre@@UEAA@XZ @ 0x18009BC20
 * Callers:
 *     ??1ConstantBufferGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B6B8 (--1ConstantBufferGeneric@Engine@Spectre@@UEAA@XZ.c)
 *     ??_EDeviceConstantBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008B6F0 (--_EDeviceConstantBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D70F0 (--1ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::DeviceConstantBuffer::~DeviceConstantBuffer(
        Spectre::Engine::DeviceConstantBuffer *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
