/*
 * XREFs of ?Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C40 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     Spectre::Engine::GetFormatRowPitch @ 0x1800566E4 (Spectre--Engine--GetFormatRowPitch.c)
 *     ?GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x1800567C8 (-GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056898 (-GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x1800568B8 (-SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?to_string@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z @ 0x18008C81C (-to_string@Engine@Spectre@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4F.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 */

void __fastcall Spectre::Engine::D3D11::TextureD3D11::Create(
        Spectre::Engine::D3D11::TextureD3D11 *this,
        const struct Spectre::Engine::TextureDesc *a2,
        const struct Spectre::Engine::TextureImageSetView *a3)
{
  unsigned int FormatRowPitch; // eax
  int v7; // r11d
  _QWORD *v8; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  _QWORD v11[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( *((_DWORD *)a2 + 3) == 1 )
  {
    Spectre::Engine::D3D11::TextureD3D11::CreateRendererResources2D(this, a2, a3);
  }
  else
  {
    FormatRowPitch = Spectre::Engine::GetFormatRowPitch(*((_DWORD *)a2 + 4));
    Spectre::Engine::D3D11::TextureD3D11::CreateRendererResources3D(
      this,
      FormatRowPitch,
      *(unsigned int *)a2,
      *((unsigned int *)a2 + 1),
      *((_DWORD *)a2 + 2),
      v7,
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 5),
      *((_QWORD *)a3 + 1));
  }
  v8 = Spectre::Engine::to_string(v11, *((_DWORD *)a2 + 4));
  std::string::operator=((Spectre::Engine::D3D11::TextureD3D11 *)((char *)this + 120), (__int64)v8);
  std::string::_Tidy_deallocate((__int64)v11);
  v9 = 0LL;
  v9.m128_f32[0] = (float)(int)Spectre::Engine::DeviceTexture::GetWidth(this);
  v10 = 0LL;
  v10.m128_f32[0] = (float)(int)Spectre::Engine::DeviceTexture::GetHeight(this);
  Spectre::Engine::DeviceTexture::SetActiveSize((__int64)this, _mm_unpacklo_ps(v9, v10).m128_i64[0]);
}
