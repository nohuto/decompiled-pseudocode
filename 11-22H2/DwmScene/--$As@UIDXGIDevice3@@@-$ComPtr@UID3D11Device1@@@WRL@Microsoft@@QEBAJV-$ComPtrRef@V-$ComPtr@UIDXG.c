/*
 * XREFs of ??$As@UIDXGIDevice3@@@?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIDevice3@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C2FE4
 * Callers:
 *     ?GetFramePresentationMaximumLatency@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEBAIXZ @ 0x1800C58D0 (-GetFramePresentationMaximumLatency@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEBAIXZ.c)
 *     ?SetFramePresentationMaximumLatency@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXI@Z @ 0x1800C74E0 (-SetFramePresentationMaximumLatency@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXI@Z.c)
 *     ?Suspend@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C7630 (-Suspend@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAXXZ @ 0x1800D9200 (-CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAX.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID3D11Device1>::As<IDXGIDevice3>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_6007896c_3244_4afd_bf18_a6d3beda5023, a2);
}
