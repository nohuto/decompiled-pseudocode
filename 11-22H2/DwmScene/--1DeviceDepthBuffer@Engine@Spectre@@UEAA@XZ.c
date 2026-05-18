/*
 * XREFs of ??1DeviceDepthBuffer@Engine@Spectre@@UEAA@XZ @ 0x18006F1A0
 * Callers:
 *     ??_EDepthBufferGeneric@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052CC0 (--_EDepthBufferGeneric@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??_EDeviceDepthBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x18006F220 (--_EDeviceDepthBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1DepthBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D5980 (--1DepthBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::DeviceDepthBuffer::~DeviceDepthBuffer(Spectre::Engine::DeviceDepthBuffer *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
