/*
 * XREFs of ?GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z @ 0x1800C9E48
 * Callers:
 *     ?GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AW4DXGI_FORMAT@@XZ @ 0x1800C9DDC (-GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA-AW4DXGI_FORMAT@@XZ.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800CB930 (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHAEBV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800CBB7C (-CreateRenderTarget@RenderTargetD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceFrameBuffer.c)
 *     Spectre::Engine::D3D11::GetFormat @ 0x1800CE990 (Spectre--Engine--D3D11--GetFormat.c)
 *     ?SubmitIndexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800D0FC0 (-SubmitIndexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VIndexBuffer@Eng.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA?AV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@6@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z @ 0x1800D62DC (-CreateDepthBuffer@DepthBufferD3D11@D3D11@Engine@Spectre@@SA-AV-$shared_ptr@VDeviceDepthBuffer@E.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?ConvertTosRGB@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W45@@Z @ 0x1800C926C (-ConvertTosRGB@D3DUtils@D3D11@Engine@Spectre@@SA-AW4DXGI_FORMAT@@W45@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::D3D11::D3DUtils::GetFormat(int a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v8[5]; // [rsp+58h] [rbp-51h] BYREF
  _OWORD pExceptionObject[6]; // [rsp+80h] [rbp-29h] BYREF
  int v10; // [rsp+E0h] [rbp+37h]

  pExceptionObject[0] = _mm_load_si128((const __m128i *)&_xmm);
  pExceptionObject[1] = _mm_load_si128((const __m128i *)&_xmm);
  pExceptionObject[2] = _mm_load_si128((const __m128i *)&_xmm);
  pExceptionObject[3] = _mm_load_si128((const __m128i *)&_xmm);
  pExceptionObject[4] = _mm_load_si128((const __m128i *)&_xmm);
  pExceptionObject[5] = _mm_load_si128((const __m128i *)&_xmm);
  v10 = 107;
  v2 = *((_DWORD *)pExceptionObject + a1);
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( !v3 )
      return Spectre::Engine::D3D11::D3DUtils::ConvertTosRGB(v2);
    if ( v3 != 1 )
    {
      std::string::string(v8, (__int64)"Unsupported color space");
      v4 = std::string::string(
             v7,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\Inc\\NativeRendererD3D11\\D3DUtils.h");
      Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
        pExceptionObject,
        (__int64)v4,
        v5,
        (__int64)v8,
        0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  return v2;
}
