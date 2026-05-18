/*
 * XREFs of ?DeviceFactoryD3D11CreateDeviceWrapper@@YAJPEAUIDXGIAdapter@@W4D3D_DRIVER_TYPE@@PEAUHINSTANCE__@@IPEBW4D3D_FEATURE_LEVEL@@IIPEAPEAUID3D11Device@@PEAW44@PEAPEAUID3D11DeviceContext@@@Z @ 0x1800DB860
 * Callers:
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NXZ @ 0x180042CE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NXZ.c)
 *     ?store@?$_Atomic_storage@_N$00@std@@QEAAX_N@Z @ 0x180042D30 (-store@-$_Atomic_storage@_N$00@std@@QEAAX_N@Z.c)
 */

HRESULT __fastcall DeviceFactoryD3D11CreateDeviceWrapper(
        IDXGIAdapter *pAdapter,
        D3D_DRIVER_TYPE DriverType,
        ID3D11DeviceContext *a3,
        UINT a4,
        D3D_FEATURE_LEVEL *a5,
        UINT a6,
        unsigned int a7,
        ID3D11Device **a8,
        enum D3D_FEATURE_LEVEL *a9,
        struct ID3D11DeviceContext **a10)
{
  UINT v10; // ebx
  UINT FeatureLevels; // r12d
  const D3D_FEATURE_LEVEL *pFeatureLevels; // r13
  char v15; // di
  HRESULT v16; // esi
  ID3D11Device *v17; // rax
  struct ID3D11DeviceContext *v18; // rax
  ID3D11Device *ppDevice[2]; // [rsp+50h] [rbp-10h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+B0h] [rbp+50h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+B8h] [rbp+58h] BYREF

  ppImmediateContext = a3;
  v10 = a4;
  if ( (a4 & 2) == 0 )
    return D3D11CreateDevice(pAdapter, DriverType, 0LL, a4, a5, a6, 7u, a8, a9, a10);
  FeatureLevels = a6;
  pFeatureLevels = a5;
  while ( 1 )
  {
    v15 = std::_Atomic_storage<bool,1>::load((__int64)&`DeviceFactoryD3D11CreateDeviceWrapper'::`5'::tryDebugDevice);
    if ( v15 )
      v10 |= 2u;
    else
      v10 &= ~2u;
    ppDevice[0] = 0LL;
    ppImmediateContext = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppImmediateContext);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppDevice);
    v16 = D3D11CreateDevice(
            pAdapter,
            DriverType,
            0LL,
            v10,
            pFeatureLevels,
            FeatureLevels,
            7u,
            ppDevice,
            &pFeatureLevel,
            &ppImmediateContext);
    if ( v16 >= 0 )
      break;
    if ( !v15 )
      goto LABEL_15;
    std::_Atomic_storage<bool,1>::store((__int64)&`DeviceFactoryD3D11CreateDeviceWrapper'::`5'::tryDebugDevice, 0);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppImmediateContext);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppDevice);
  }
  if ( a8 )
  {
    v17 = ppDevice[0];
    ppDevice[0] = 0LL;
    *a8 = v17;
  }
  if ( a9 )
    *a9 = pFeatureLevel;
  if ( a10 )
  {
    v18 = ppImmediateContext;
    ppImmediateContext = 0LL;
    *a10 = v18;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppImmediateContext);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppDevice);
  return v16;
}
