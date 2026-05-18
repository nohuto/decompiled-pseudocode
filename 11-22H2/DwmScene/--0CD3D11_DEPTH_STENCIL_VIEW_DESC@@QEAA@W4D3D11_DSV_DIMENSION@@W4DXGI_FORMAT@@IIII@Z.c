/*
 * XREFs of ??0CD3D11_DEPTH_STENCIL_VIEW_DESC@@QEAA@W4D3D11_DSV_DIMENSION@@W4DXGI_FORMAT@@IIII@Z @ 0x1800D5820
 * Callers:
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     <none>
 */

CD3D11_DEPTH_STENCIL_VIEW_DESC *__fastcall CD3D11_DEPTH_STENCIL_VIEW_DESC::CD3D11_DEPTH_STENCIL_VIEW_DESC(
        CD3D11_DEPTH_STENCIL_VIEW_DESC *this,
        enum D3D11_DSV_DIMENSION a2,
        enum DXGI_FORMAT a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = a2 - 1;
  if ( !v3 )
    goto LABEL_7;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_9;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_7:
    *((_DWORD *)this + 3) = 0;
    return this;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_9:
    *((_DWORD *)this + 5) = -1;
    *(_QWORD *)((char *)this + 12) = 0LL;
    return this;
  }
  if ( v6 == 2 )
  {
    *((_DWORD *)this + 4) = -1;
    goto LABEL_7;
  }
  return this;
}
