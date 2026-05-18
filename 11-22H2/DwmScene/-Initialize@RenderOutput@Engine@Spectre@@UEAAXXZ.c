/*
 * XREFs of ?Initialize@RenderOutput@Engine@Spectre@@UEAAXXZ @ 0x18002C3E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::RenderOutput::Initialize(Spectre::Engine::ImageProcessingManager **this)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  int v4; // r8d
  _BYTE v5[8]; // [rsp+30h] [rbp-A8h] BYREF
  std::_Ref_count_base *v6; // [rsp+38h] [rbp-A0h]
  struct Spectre::Engine::RenderDevice *v7; // [rsp+40h] [rbp-98h] BYREF
  std::_Ref_count_base *v8; // [rsp+48h] [rbp-90h]
  _QWORD v9[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp-48h] BYREF

  v2 = (*((__int64 (__fastcall **)(Spectre::Engine::ImageProcessingManager **, _BYTE *))*this + 47))(this, v5);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v2, &v7);
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  if ( !v7 )
  {
    std::string::string(v10, (__int64)"RenderDevice was removed");
    v3 = (unsigned int)std::string::string(
                         v9,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\renderoutput.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v3, v4, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  Spectre::Engine::ImageProcessingManager::Create(this[26], v7);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
