/*
 * XREFs of ??1GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C42AC
 * Callers:
 *     ??_EGpuQueryD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C4AC0 (--_EGpuQueryD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::GpuQueryD3D11::~GpuQueryD3D11(Spectre::Engine::D3D11::GpuQueryD3D11 *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 12);
  Spectre::Engine::GpuQuery::~GpuQuery(this);
}
