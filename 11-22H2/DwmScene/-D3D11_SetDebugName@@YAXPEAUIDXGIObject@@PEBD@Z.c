/*
 * XREFs of ?D3D11_SetDebugName@@YAXPEAUIDXGIObject@@PEBD@Z @ 0x1800C9CF4
 * Callers:
 *     ?CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9560 (-CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall D3D11_SetDebugName(struct IDXGIObject *a1, const char *a2)
{
  HRESULT (__stdcall *SetPrivateData)(IDXGIObject *, const GUID *const, UINT, const void *); // rsi
  unsigned int v5; // eax

  if ( a1 )
  {
    SetPrivateData = a1->lpVtbl->SetPrivateData;
    if ( a2 )
      v5 = strnlen(a2, 0xFFuLL);
    else
      v5 = 0;
    ((void (__fastcall *)(struct IDXGIObject *, const GUID *, _QWORD, const char *))SetPrivateData)(
      a1,
      &WKPDID_D3DDebugObjectName,
      v5,
      a2);
  }
}
