/*
 * XREFs of ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68
 * Callers:
 *     ??0EngineAccessDeniedException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180029E4C (--0EngineAccessDeniedException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180047AD4 (--0EngineInvalidPointerException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??0EngineNotImplException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18004AC7C (--0EngineNotImplException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?AttachDevice@Shader@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008AC60 (-AttachDevice@Shader@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT_DESC@@IAEBVShaderProgram@34@@Z @ 0x1800D3A4C (-Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT.c)
 *     ?CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@PEBDAEAVRenderDeviceD3D11@234@AEAUArrayBufferDesc@34@PEBXW4D3D11_BIND_FLAG@@@Z @ 0x1800D8568 (-CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA-AV-$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@JAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C3DC (--0SpectreException@Utils@Spectre@@QEAA@JAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::EngineException::EngineException(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const char *a5,
        char a6)
{
  Spectre::Utils::SpectreException::SpectreException((__int64)a1, a4, a5, a6);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  std::string::_Tidy_deallocate(a2);
  return a1;
}
