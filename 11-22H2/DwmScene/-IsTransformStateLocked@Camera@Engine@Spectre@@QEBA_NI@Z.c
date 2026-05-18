/*
 * XREFs of ?IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z @ 0x18005BD74
 * Callers:
 *     ?UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DC38 (-UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DE70 (-UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??B?$atomic@I@std@@QEBAIXZ @ 0x180059D10 (--B-$atomic@I@std@@QEBAIXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Spectre::Engine::Camera::IsTransformStateLocked(Spectre::Engine::Camera *this, int a2)
{
  unsigned int i; // ecx
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= 3 )
    {
      std::string::string(v7, (__int64)"Invalid matrix stage");
      v4 = (unsigned int)std::string::string(
                           v6,
                           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp"
                                    "\\source\\engine\\camera.cpp");
      Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    if ( 1 << i == a2 )
      break;
  }
  return (unsigned int)std::atomic<unsigned int>::operator unsigned int() != 0;
}
