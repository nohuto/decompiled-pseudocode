/*
 * XREFs of ??$As@UIDXGISurface1@@@?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGISurface1@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C8738
 * Callers:
 *     ?CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9560 (-CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID3D11Texture2D>::As<IDXGISurface1>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_4ae63092_6327_4c1b_80ae_bfe12ea32b86, a2);
}
