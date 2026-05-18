/*
 * XREFs of ?SetActiveSize@DeviceFrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028A34
 * Callers:
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@V?$ComPtr@UID3D11Texture2D@@@67@1II@Z @ 0x1800CB6EC (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11RenderTargetView@@@WRL@Mic.c)
 *     ?Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800CB930 (-Create@RenderTargetD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x1800568B8 (-SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Spectre::Engine::DeviceFrameBuffer::SetActiveSize(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  char result; // al
  _QWORD *v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v9[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    std::string::string(v10, (__int64)"Attempted to set an active size with a negative component");
    v7 = (unsigned int)std::string::string(
                         v9,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\rendertarget.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v7, v8, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(a1 + 96)) )
    Spectre::Engine::DeviceTexture::SetActiveSize(*v4, a2);
  result = std::operator!=<Spectre::Engine::Scene>((_QWORD *)(a1 + 112));
  if ( result )
    return Spectre::Engine::DeviceTexture::SetActiveSize(*v6, a2);
  return result;
}
