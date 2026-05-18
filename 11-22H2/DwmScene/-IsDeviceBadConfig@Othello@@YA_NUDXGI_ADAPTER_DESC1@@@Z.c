/*
 * XREFs of ?IsDeviceBadConfig@Othello@@YA_NUDXGI_ADAPTER_DESC1@@@Z @ 0x1800DBA5C
 * Callers:
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     <none>
 */

bool __fastcall Othello::IsDeviceBadConfig(Othello *this, struct DXGI_ADAPTER_DESC1 *a2)
{
  int v2; // edx

  v2 = *((_DWORD *)this + 64);
  return v2 == 4318
      && (*((_DWORD *)this + 65) == 1028
       || *((_DWORD *)this + 65) == 1058
       || *((_DWORD *)this + 65) == 1060
       || *((_DWORD *)this + 65) == 1764)
      || v2 == 32902 && (*((_DWORD *)this + 65) == 66 || *((_DWORD *)this + 65) == 70);
}
