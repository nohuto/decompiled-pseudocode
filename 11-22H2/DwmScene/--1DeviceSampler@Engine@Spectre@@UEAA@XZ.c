/*
 * XREFs of ??1DeviceSampler@Engine@Spectre@@UEAA@XZ @ 0x1800544B0
 * Callers:
 *     ??_GDeviceSampler@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800545A0 (--_GDeviceSampler@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1SamplerGeneric@Engine@Spectre@@UEAA@XZ @ 0x18008B534 (--1SamplerGeneric@Engine@Spectre@@UEAA@XZ.c)
 *     ??1SamplerD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D48DC (--1SamplerD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::DeviceSampler::~DeviceSampler(Spectre::Engine::DeviceSampler *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)this = &Spectre::Engine::DeviceSampler::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 15);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
