/*
 * XREFs of ?Shutdown@CDXDeviceFactory@@QEAAXXZ @ 0x1800DBAB0
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDXDeviceFactory::Shutdown(CDXDeviceFactory *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
