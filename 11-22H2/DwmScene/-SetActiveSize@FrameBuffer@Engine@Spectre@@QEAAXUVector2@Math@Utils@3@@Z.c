/*
 * XREFs of ?SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028B1C
 * Callers:
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?UpdateImageProcessingActiveSize@RenderOutput@Engine@Spectre@@IEAAXXZ @ 0x18002D008 (-UpdateImageProcessingActiveSize@RenderOutput@Engine@Spectre@@IEAAXXZ.c)
 *     ?SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z @ 0x1800C7260 (-SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?SetActiveSize@Texture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x18005696C (-SetActiveSize@Texture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Spectre::Engine::FrameBuffer::SetActiveSize(__int64 a1, __int64 a2)
{
  char result; // al
  _QWORD *v3; // rcx
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    std::string::string(v7, (__int64)"Attempted to set an active size with a negative component");
    v4 = (unsigned int)std::string::string(
                         v6,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\rendertarget.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = std::operator!=<Spectre::Engine::Scene>((_QWORD *)(a1 + 136));
  if ( result )
    return Spectre::Engine::Texture::SetActiveSize(*v3);
  return result;
}
