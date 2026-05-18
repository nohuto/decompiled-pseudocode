/*
 * XREFs of ?CreateDeviceIndependentResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D912C
 * Callers:
 *     ?CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAXXZ @ 0x1800D9200 (-CreateHolographicResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@EEAAX.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11DepthStencilView@@@01@$$T@Z @ 0x1800CC1D8 (--$-8UID3D11DepthStencilView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11DepthStencilView@@@01@$$T@.c)
 */

void __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::CreateDeviceIndependentResources(
        Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic *this)
{
  void **v1; // rbx
  __int64 *v2; // rcx
  HRESULT v3; // eax
  ULONG_PTR v4; // rbx
  D2D1_FACTORY_OPTIONS pFactoryOptions; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v1 = (void **)((char *)this + 512);
  if ( Microsoft::WRL::operator==<ID3D11DepthStencilView>((_QWORD *)this + 64) )
  {
    pFactoryOptions.debugLevel = D2D1_DEBUG_LEVEL_NONE;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    v3 = D2D1CreateFactory(
           D2D1_FACTORY_TYPE_SINGLE_THREADED,
           &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
           &pFactoryOptions,
           v1);
    v4 = v3;
    if ( v3 < 0 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v4;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}
