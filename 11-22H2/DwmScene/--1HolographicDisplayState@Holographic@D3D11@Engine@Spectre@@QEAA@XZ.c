/*
 * XREFs of ??1HolographicDisplayState@Holographic@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D8DA4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@EEAAXXZ @ 0x1800DA7B0 (-_Destroy@-$_Ref_count_obj2@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@EEA.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::Holographic::HolographicDisplayState::~HolographicDisplayState(
        Spectre::Engine::D3D11::Holographic::HolographicDisplayState *this)
{
  `eh vector destructor iterator'(
    (char *)this + 48,
    48LL,
    2LL,
    (void (*)(void *))Spectre::Engine::D3D11::Holographic::HolographicDisplayEye::~HolographicDisplayEye);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
