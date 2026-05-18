/*
 * XREFs of ??1DeviceFrameBuffer@Engine@Spectre@@UEAA@XZ @ 0x180027FE8
 * Callers:
 *     ??_GDeviceFrameBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800280E0 (--_GDeviceFrameBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1RenderTargetD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CB610 (--1RenderTargetD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::DeviceFrameBuffer::~DeviceFrameBuffer(Spectre::Engine::DeviceFrameBuffer *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)this = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 15);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
