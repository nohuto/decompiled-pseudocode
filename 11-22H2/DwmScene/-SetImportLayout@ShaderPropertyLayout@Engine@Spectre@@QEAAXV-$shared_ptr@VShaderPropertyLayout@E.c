/*
 * XREFs of ?SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x1800831BC
 * Callers:
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBDAEBV10@@Z @ 0x18001C6CC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C6CC.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??$emplace_back@U?$pair@II@std@@@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@II@1@@Z @ 0x180081CB4 (--$emplace_back@U-$pair@II@std@@@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@.c)
 *     ?GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@23@@Z @ 0x180082F6C (-GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@.c)
 *     ?GetTypeSizeInElements@ShaderPropertyLayout@Engine@Spectre@@SAIW4ShaderPropertyType@23@@Z @ 0x180083060 (-GetTypeSizeInElements@ShaderPropertyLayout@Engine@Spectre@@SAIW4ShaderPropertyType@23@@Z.c)
 *     ?HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x1800830EC (-HasProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::ShaderPropertyLayout::SetImportLayout(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  char **v6; // r12
  char **v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 PropertyInfo; // rax
  __int64 v12; // r14
  int v13; // ecx
  int TypeSizeInElements; // r13d
  int i; // edi
  char *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r8
  char *v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r8
  std::_Ref_count_base *v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h]
  _QWORD v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v28[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v29[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v31[7]; // [rsp+C8h] [rbp-38h] BYREF

  v27[1] = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    std::string::string(
      v28,
      (__int64)"ShaderPropertyLayout::SetMasterLayout() -- layout declaration must be complete before another layout can "
               "be connected as a master.");
    v4 = std::string::string(
           v29,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v4,
      v5,
      (__int64)v28,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 1176), a2);
  v6 = (char **)(a1 + 1192);
  *(_QWORD *)(a1 + 1200) = *(_QWORD *)(a1 + 1192);
  v7 = (char **)(a1 + 1216);
  *(_QWORD *)(a1 + 1224) = *(_QWORD *)(a1 + 1216);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(a1 + 64);
  v26 = v9;
  while ( v8 != v9 )
  {
    if ( *(_DWORD *)(v8 + 48) )
    {
      if ( !Spectre::Engine::ShaderPropertyLayout::HasProperty(*a2, *(_WORD *)(v8 + 32)) )
      {
        v20 = std::operator+<char>(
                (char *)pExceptionObject,
                "ShaderPropertyLayout::SetMasterLayout() -- master layout does not have the property '",
                (_QWORD *)v8);
        v21 = std::operator+<char>(v29, v20, (__int64)"' required for import by this layout");
        v22 = std::string::string(
                v28,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\shaderpropertylayout.cpp");
        Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(v31, (__int64)v22, v23, (__int64)v21, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v31;
      }
      PropertyInfo = Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(v10, *(_WORD *)(v8 + 32));
      v12 = PropertyInfo;
      v13 = *(_DWORD *)(v8 + 36);
      if ( v13 != *(_DWORD *)(PropertyInfo + 36) )
      {
        v16 = std::operator+<char>(
                (char *)v29,
                "ShaderPropertyLayout::SetMasterLayout() -- master layout has different type for property '",
                (_QWORD *)v8);
        v17 = std::operator+<char>(pExceptionObject, v16, (__int64)"' imported by this layout");
        v18 = std::string::string(
                v28,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\shaderpropertylayout.cpp");
        Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(v31, (__int64)v18, v19, (__int64)v17, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v31;
      }
      if ( v13 == 8 )
      {
        LODWORD(v27[0]) = *(_DWORD *)(PropertyInfo + 40);
        HIDWORD(v27[0]) = *(_DWORD *)(v8 + 40);
        std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(v7, v27);
      }
      else
      {
        TypeSizeInElements = Spectre::Engine::ShaderPropertyLayout::GetTypeSizeInElements(v13);
        for ( i = 0; i < TypeSizeInElements; ++i )
        {
          LODWORD(v25) = i + *(_DWORD *)(v12 + 40);
          HIDWORD(v25) = i + *(_DWORD *)(v8 + 40);
          std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(
            v6,
            &v25);
        }
      }
      v9 = v26;
    }
    v8 += 56LL;
  }
  v24 = (std::_Ref_count_base *)a2[1];
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
}
