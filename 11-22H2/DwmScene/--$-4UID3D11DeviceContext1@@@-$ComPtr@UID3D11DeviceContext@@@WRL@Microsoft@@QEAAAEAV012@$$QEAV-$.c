/*
 * XREFs of ??$?4UID3D11DeviceContext1@@@?$ComPtr@UID3D11DeviceContext@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@UID3D11DeviceContext1@@@12@@Z @ 0x1800C8700
 * Callers:
 *     ?ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C9120 (-ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8F80 (-ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11DeviceContext>::operator=<ID3D11DeviceContext1>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  v6 = v4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return a1;
}
