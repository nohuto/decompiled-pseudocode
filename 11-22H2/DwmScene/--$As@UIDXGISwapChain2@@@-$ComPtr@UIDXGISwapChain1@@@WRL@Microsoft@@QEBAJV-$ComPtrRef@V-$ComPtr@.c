/*
 * XREFs of ??$As@UIDXGISwapChain2@@@?$ComPtr@UIDXGISwapChain1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGISwapChain2@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C8794
 * Callers:
 *     ?SetSwapChainScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXXZ @ 0x1800CA990 (-SetSwapChainScaling@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDXGISwapChain1>::As<IDXGISwapChain2>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_a8be2ac4_199f_4946_b331_79599fb98de7, a2);
}
