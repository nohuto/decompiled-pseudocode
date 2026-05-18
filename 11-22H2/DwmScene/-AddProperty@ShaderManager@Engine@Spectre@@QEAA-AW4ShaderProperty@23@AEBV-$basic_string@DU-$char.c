/*
 * XREFs of ?AddProperty@ShaderManager@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F2E0
 * Callers:
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@Engine@Spectre@@@std@@PEAX@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004DDA4 (--$_Try_emplace@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$$_ea_18004DDA4.c)
 *     ?FindProperty@ShaderManager@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F9DC (-FindProperty@ShaderManager@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@DU-$cha.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::ShaderManager::AddProperty(__int64 a1, void **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _BYTE v10[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( std::string::empty((__int64)a2) )
  {
    std::string::string(v12, (__int64)"ShaderManager::RegisterShaderProperty() -- shader property name cannot be empty");
    v4 = std::string::string(
           v11,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v4,
      v5,
      (__int64)v12,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOWORD(v6) = Spectre::Engine::ShaderManager::FindProperty(a1);
  if ( (_WORD)v6 == 511 )
  {
    v6 = *(int *)(a1 + 18488);
    if ( (int)v6 >= 512 )
    {
      std::string::string(
        v11,
        (__int64)"ShaderManager::RegisterProperty() -- property could not be registered because the maximum number of pro"
                 "perties has been reached");
      v8 = std::string::string(
             v12,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\shadermanager.cpp");
      Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
        pExceptionObject,
        (__int64)v8,
        v9,
        (__int64)v11,
        0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 18488) = v6 + 1;
    *(_WORD *)(*(_QWORD *)std::map<std::string,enum Spectre::Engine::ShaderProperty>::_Try_emplace<std::string const &,>(
                            (__int64 *)(a1 + 2088),
                            (__int64)v10,
                            a2)
             + 64LL) = v6;
    std::string::operator=((void **)(32 * v6 + a1 + 2104), a2);
  }
  return (unsigned __int16)v6;
}
