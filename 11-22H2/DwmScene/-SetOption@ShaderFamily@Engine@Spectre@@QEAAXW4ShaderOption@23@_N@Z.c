/*
 * XREFs of ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z @ 0x180061260
 * Callers:
 *     ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180061184 (-SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?SetOptions@ShaderFamily@Engine@Spectre@@QEAAX_K_N@Z @ 0x180061300 (-SetOptions@ShaderFamily@Engine@Spectre@@QEAAX_K_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::ShaderFamily::SetOption(Spectre::Engine::ShaderFamily *a1, int a2, bool a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD v5[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 == -1 )
  {
    std::string::string(v6, (__int64)"ShaderFamily::SetOption() -- The invalid option cannot be set.");
    v3 = std::string::string(
           v5,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v3,
      v4,
      (__int64)v6,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  Spectre::Engine::ShaderFamily::SetOptions(a1, 1LL << a2, a3);
}
