/*
 * XREFs of ?SetActiveSize@Texture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x18005696C
 * Callers:
 *     ?SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x180028B1C (-SetActiveSize@FrameBuffer@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z @ 0x1800568B8 (-SetActiveSize@DeviceTexture@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::Texture::SetActiveSize(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  int v4; // xmm0_4
  __int64 *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  __int64 v9; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v9 = a2;
  if ( *(float *)&a2 < 0.0 || (v4 = HIDWORD(v9), *((float *)&v9 + 1) < 0.0) )
  {
    std::string::string(v11, (__int64)"Attempted to set an active size with a negative component");
    v7 = (unsigned int)std::string::string(
                         v10,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\texture.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v7, v8, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = v4;
  v5 = *(__int64 **)(a1 + 112);
  v6 = *v5;
  v9 = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    Spectre::Engine::DeviceTexture::SetActiveSize(*(_QWORD *)(v6 + 40), a2);
    result = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v9);
    v6 = v9;
  }
  return result;
}
