/*
 * XREFs of ?AttachDevice@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005FFF0
 * Callers:
 *     ?AddExtension@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@@Z @ 0x18004EF08 (-AddExtension@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?AttachDevice@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18004F618 (-AttachDevice@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@st.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ShaderFamily::AttachDevice(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(*a2 + 24LL));
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    std::string::string(
      v8,
      (__int64)"ShaderFamily::AttachDevice() -- The family must have finished declaration before attaching a device");
    v4 = std::string::string(
           v7,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v4,
      v5,
      (__int64)v8,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
