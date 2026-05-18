/*
 * XREFs of sub_1800DB8E0 @ 0x1800DB8E0
 * Callers:
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180042D68 @ 0x180042D68 (sub_180042D68.c)
 *     sub_180042DB0 @ 0x180042DB0 (sub_180042DB0.c)
 */

HRESULT __fastcall sub_1800DB8E0(
        IDXGIAdapter *pAdapter,
        D3D_DRIVER_TYPE DriverType,
        ID3D11DeviceContext *a3,
        UINT a4,
        D3D_FEATURE_LEVEL *a5,
        UINT a6,
        int a7,
        ID3D11Device **a8,
        D3D_FEATURE_LEVEL *a9,
        ID3D11DeviceContext **a10)
{
  UINT v10; // ebx
  UINT FeatureLevels; // r12d
  const D3D_FEATURE_LEVEL *pFeatureLevels; // r13
  char v15; // di
  HRESULT v16; // esi
  ID3D11Device *v17; // rax
  ID3D11DeviceContext *v18; // rax
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
    v15 = sub_180042D68((__int64)&unk_1801D2B7C);
    if ( v15 )
      v10 |= 2u;
    else
      v10 &= ~2u;
    ppDevice[0] = 0LL;
    ppImmediateContext = 0LL;
    sub_18000E72C((__int64 *)&ppImmediateContext);
    sub_18000E72C((__int64 *)ppDevice);
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
    sub_180042DB0((__int64)&unk_1801D2B7C, 0);
    sub_18000E72C((__int64 *)&ppImmediateContext);
    sub_18000E72C((__int64 *)ppDevice);
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
  sub_18000E72C((__int64 *)&ppImmediateContext);
  sub_18000E72C((__int64 *)ppDevice);
  return v16;
}
