/*
 * XREFs of ?CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18004B500
 * Callers:
 *     ?Clone@MeshInstance@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18004B470 (-Clone@MeshInstance@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$dynamic_pointer_cast@VMeshInstance@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18001402C (--$dynamic_pointer_cast@VMeshInstance@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VMes.c)
 *     ??$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18004A5A0 (--$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@-$vector@UMaterialInfo@MeshInsta.c)
 *     ??0EngineNotImplException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18004AC7C (--0EngineNotImplException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ??4?$weak_ptr@VMorphController@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18004AF10 (--4-$weak_ptr@VMorphController@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CloneInternal@Component@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800812C0 (-CloneInternal@Component@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEB.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::MeshInstance::CloneInternal(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  std::_Ref_count_base *v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-59h]
  _QWORD *v19; // [rsp+48h] [rbp-51h]
  _QWORD v20[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v21[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v19 = a2;
  v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v17,
         a2);
  Spectre::Engine::Component::CloneInternal(a1, v6);
  std::dynamic_pointer_cast<Spectre::Engine::MeshInstance,Spectre::Engine::Component>(&v17, a2);
  if ( (*a3 & 8) != 0 )
  {
    std::string::string(
      v21,
      (__int64)"MeshInstance::CloneInternal() -- material cloning not yet supported (reserved for future use)");
    v7 = std::string::string(
           v20,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\meshinstance.cpp");
    Spectre::Engine::EngineNotImplException::EngineNotImplException(pExceptionObject, (__int64)v7, v8, (__int64)v21);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  v9 = v17;
  if ( v17 + 104 != a1 + 104 )
    std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Assign_range<Spectre::Engine::MeshInstance::MaterialInfo *>(
      (_QWORD *)(v17 + 104),
      *(_QWORD *)(a1 + 104),
      *(_QWORD *)(a1 + 112));
  if ( (*a3 & 4) != 0 )
  {
    std::string::string(
      v20,
      (__int64)"MeshInstance::CloneInternal() -- mesh cloning not yet supported (reserved for future use)");
    v10 = std::string::string(
            v21,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\meshinstance.cpp");
    Spectre::Engine::EngineNotImplException::EngineNotImplException(pExceptionObject, (__int64)v10, v11, (__int64)v20);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(v9 + 88), (_QWORD *)(a1 + 88));
  if ( (*a3 & 0x10) != 0 )
  {
    std::string::string(
      v20,
      (__int64)"MeshInstance::CloneInternal() -- skinning controller cloning not yet supported (reserved for future use)");
    v12 = std::string::string(
            v21,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\meshinstance.cpp");
    Spectre::Engine::EngineNotImplException::EngineNotImplException(pExceptionObject, (__int64)v12, v13, (__int64)v20);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  std::weak_ptr<Spectre::Engine::MorphController>::operator=((__int64 *)(v9 + 136), (_QWORD *)(a1 + 136));
  if ( (*a3 & 0x20) != 0 )
  {
    std::string::string(
      v20,
      (__int64)"MeshInstance::CloneInternal() -- morph controller cloning not yet supported (reserved for future use)");
    v14 = std::string::string(
            v21,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\meshinstance.cpp");
    Spectre::Engine::EngineNotImplException::EngineNotImplException(pExceptionObject, (__int64)v14, v15, (__int64)v20);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  std::weak_ptr<Spectre::Engine::MorphController>::operator=((__int64 *)(v9 + 152), (_QWORD *)(a1 + 152));
  *(_BYTE *)(v9 + 168) = *(_BYTE *)(a1 + 168);
  *(_DWORD *)(v9 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v9 + 176) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(v9 + 180) = *(_DWORD *)(a1 + 180);
  *(_DWORD *)(v9 + 184) = *(_DWORD *)(a1 + 184);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  v16 = (std::_Ref_count_base *)a2[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
