/*
 * XREFs of ?SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x1800568B8
 * Callers:
 *     ?SetActiveSize@DeviceFrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028A34 (-SetActiveSize@DeviceFrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?SetActiveSize@Texture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x18005696C (-SetActiveSize@Texture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD130 (-Create@TextureD3D11@D3D11@Engine@Spectre@@UEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z.c)
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::DeviceTexture::SetActiveSize(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    std::string::string(v5, (__int64)"Attempted to set an active size with a negative component");
    v2 = (unsigned int)std::string::string(
                         v4,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\texture.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v2, v3, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 152) = a2;
}
