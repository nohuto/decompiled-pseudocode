/*
 * XREFs of ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_K0V?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040230
 * Callers:
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z @ 0x18004033C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 *     ?FindNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@_K@Z @ 0x180040DF4 (-FindNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_p.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::Scene::AddNode(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  unsigned int v11; // eax
  std::_Ref_count_base *v12; // rcx
  _QWORD v14[4]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v15; // [rsp+50h] [rbp-71h] BYREF
  std::_Ref_count_base *v16; // [rsp+58h] [rbp-69h]
  __int64 v17; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-51h] BYREF
  _QWORD v19[4]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-11h] BYREF

  v14[3] = a5;
  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v17,
         a5);
  Spectre::Engine::Scene::FindNode(a1, &v15, v8);
  if ( std::operator==<Spectre::Engine::Scene>(&v15) )
  {
    std::string::string(v19, (__int64)"Scene::AddNode() - Parent node could not be found.");
    v9 = std::string::string(
           v18,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v9,
      v10,
      (__int64)v19,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v11 = (unsigned int)std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
                        v14,
                        &v15);
  Spectre::Engine::Scene::AddNodeInternal(a1, a2, a3, v11, (__int64)a5);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v12 = (std::_Ref_count_base *)a5[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return a2;
}
