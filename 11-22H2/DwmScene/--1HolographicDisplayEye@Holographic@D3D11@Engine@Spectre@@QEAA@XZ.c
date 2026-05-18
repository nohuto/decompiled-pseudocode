/*
 * XREFs of ??1HolographicDisplayEye@Holographic@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D8D60
 * Callers:
 *     ?DiscardViews@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D9460 (-DiscardViews@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     _Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::DiscardViews_::_1_::dtor$2 @ 0x1800F1BCF (_Spectre--Engine--D3D11--Holographic--RenderOutputD3D11Holographic--DiscardViews_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::Holographic::HolographicDisplayEye::~HolographicDisplayEye(
        Spectre::Engine::D3D11::Holographic::HolographicDisplayEye *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
}
