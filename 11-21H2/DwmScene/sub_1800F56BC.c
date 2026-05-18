/*
 * XREFs of sub_1800F56BC @ 0x1800F56BC
 * Callers:
 *     sub_1800F424C @ 0x1800F424C (sub_1800F424C.c)
 * Callees:
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall sub_1800F56BC(
        IDXGIAdapter *pAdapter,
        D3D_DRIVER_TYPE DriverType,
        ID3D11DeviceContext *a3,
        UINT a4,
        D3D_FEATURE_LEVEL *pFeatureLevels,
        UINT a6,
        D3D_FEATURE_LEVEL pFeatureLevel,
        ID3D11Device **a8,
        D3D_FEATURE_LEVEL *a9,
        ID3D11DeviceContext **a10)
{
  UINT v10; // ebx
  char *v13; // r12
  UINT FeatureLevels; // r13d
  char v15; // di
  HRESULT v16; // esi
  char v17; // al
  char *v18; // rdx
  ID3D11DeviceContext *v19; // rcx
  ID3D11Device *v20; // rcx
  ID3D11DeviceContext *v21; // rcx
  ID3D11Device *v22; // rcx
  ID3D11Device *v23; // rax
  ID3D11DeviceContext *v24; // rax
  ID3D11DeviceContext *v25; // rcx
  ID3D11Device *ppDevice; // [rsp+50h] [rbp-10h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+B0h] [rbp+50h] BYREF
  char v29; // [rsp+B8h] [rbp+58h] BYREF

  ppImmediateContext = a3;
  v10 = a4;
  if ( (a4 & 2) == 0 )
    return D3D11CreateDevice(pAdapter, DriverType, 0LL, a4, pFeatureLevels, a6, 7u, a8, a9, a10);
  v13 = (char *)sub_1800441D8((__int64)&unk_1801F4B5C);
  FeatureLevels = a6;
  while ( 1 )
  {
    v15 = *v13;
    if ( *v13 )
      v10 |= 2u;
    else
      v10 &= ~2u;
    ppDevice = 0LL;
    ppImmediateContext = 0LL;
    v16 = D3D11CreateDevice(
            pAdapter,
            DriverType,
            0LL,
            v10,
            pFeatureLevels,
            FeatureLevels,
            7u,
            &ppDevice,
            &pFeatureLevel,
            &ppImmediateContext);
    if ( v16 >= 0 )
    {
      if ( a8 )
      {
        v23 = ppDevice;
        ppDevice = 0LL;
        *a8 = v23;
      }
      if ( a9 )
        *a9 = pFeatureLevel;
      if ( a10 )
      {
        v24 = ppImmediateContext;
        v25 = 0LL;
        ppImmediateContext = 0LL;
        *a10 = v24;
      }
      else
      {
        v25 = ppImmediateContext;
      }
      if ( v25 )
      {
        ppImmediateContext = 0LL;
        ((void (__fastcall *)(ID3D11DeviceContext *))v25->lpVtbl->Release)(v25);
      }
      v22 = ppDevice;
      if ( ppDevice )
        goto LABEL_27;
      return v16;
    }
    if ( !v15 )
      break;
    v29 = 0;
    sub_1800441CC((__int64)&unk_1801F4B5C);
    v17 = sub_1800441E4((__int64)&v29);
    *v18 = v17;
    v19 = ppImmediateContext;
    if ( ppImmediateContext )
    {
      ppImmediateContext = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v19->lpVtbl->Release)(v19);
    }
    v20 = ppDevice;
    if ( ppDevice )
    {
      ppDevice = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v20->lpVtbl->Release)(v20);
    }
  }
  v21 = ppImmediateContext;
  if ( ppImmediateContext )
  {
    ppImmediateContext = 0LL;
    ((void (__fastcall *)(ID3D11DeviceContext *))v21->lpVtbl->Release)(v21);
  }
  v22 = ppDevice;
  if ( ppDevice )
  {
LABEL_27:
    ppDevice = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v22->lpVtbl->Release)(v22);
  }
  return v16;
}
