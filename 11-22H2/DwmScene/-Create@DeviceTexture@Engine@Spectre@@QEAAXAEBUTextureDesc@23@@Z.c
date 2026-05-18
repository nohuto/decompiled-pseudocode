/*
 * XREFs of ?Create@DeviceTexture@Engine@Spectre@@QEAAXAEBUTextureDesc@23@@Z @ 0x180055CFC
 * Callers:
 *     ?CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z @ 0x1800CBF28 (-CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXXZ @ 0x180051E80 (-_Tidy@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@A.c)
 *     ?CreateDefaultImageSetView@Engine@Spectre@@YA?AUTextureImageSetView@12@AEBUTextureDesc@12@PEBX_K@Z @ 0x180056318 (-CreateDefaultImageSetView@Engine@Spectre@@YA-AUTextureImageSetView@12@AEBUTextureDesc@12@PEBX_K.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::DeviceTexture::Create(
        Spectre::Engine::DeviceTexture *this,
        const struct Spectre::Engine::TextureDesc *a2)
{
  void (__fastcall *v4)(Spectre::Engine::DeviceTexture *, const struct Spectre::Engine::TextureDesc *, __int64); // rbx
  __int64 DefaultImageSetView; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(void (__fastcall **)(Spectre::Engine::DeviceTexture *, const struct Spectre::Engine::TextureDesc *, __int64))(*(_QWORD *)this + 40LL);
  DefaultImageSetView = Spectre::Engine::CreateDefaultImageSetView(v6, a2, 0LL, 0LL);
  v4(this, a2, DefaultImageSetView);
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy((__int64)v7);
}
