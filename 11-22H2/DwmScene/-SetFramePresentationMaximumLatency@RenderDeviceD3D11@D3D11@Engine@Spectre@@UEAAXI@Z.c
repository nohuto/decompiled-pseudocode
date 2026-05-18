/*
 * XREFs of ?SetFramePresentationMaximumLatency@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXI@Z @ 0x1800C74E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDXGIDevice3@@@?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIDevice3@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C2FE4 (--$As@UIDXGIDevice3@@@-$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIDXG.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::SetFramePresentationMaximumLatency(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this,
        unsigned int a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device1>::As<IDXGIDevice3>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 532,
    &v3);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 96LL))(v3, a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3);
}
