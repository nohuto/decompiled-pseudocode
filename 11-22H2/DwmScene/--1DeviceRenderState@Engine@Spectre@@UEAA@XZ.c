/*
 * XREFs of ??1DeviceRenderState@Engine@Spectre@@UEAA@XZ @ 0x18008B800
 * Callers:
 *     ??1RenderStateGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B834 (--1RenderStateGeneric@Engine@Spectre@@UEAA@XZ.c)
 *     ??_EDeviceRenderState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008B850 (--_EDeviceRenderState@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1RenderStateD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D4C28 (--1RenderStateD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::DeviceRenderState::~DeviceRenderState(Spectre::Engine::DeviceRenderState *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::DeviceRenderState::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
