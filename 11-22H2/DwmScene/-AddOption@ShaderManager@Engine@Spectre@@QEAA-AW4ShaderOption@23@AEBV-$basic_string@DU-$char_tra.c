/*
 * XREFs of ?AddOption@ShaderManager@Engine@Spectre@@QEAA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F1A8
 * Callers:
 *     ?AddOption@ShaderFamily@Engine@Spectre@@QEAA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005FE4C (-AddOption@ShaderFamily@Engine@Spectre@@QEAA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_trai.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@PEAX@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004DCB0 (--$_Try_emplace@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$$_ea_18004DCB0.c)
 *     ?FindOption@ShaderManager@Engine@Spectre@@QEBA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004F988 (-FindOption@ShaderManager@Engine@Spectre@@QEBA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_tr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::ShaderManager::AddOption(__int64 a1, void **a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _BYTE v11[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( std::string::empty((__int64)a2) )
  {
    std::string::string(v13, (__int64)"ShaderManager::AddOption() -- shader option name cannot be empty");
    v5 = std::string::string(
           v12,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v5,
      v6,
      (__int64)v13,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LODWORD(v7) = Spectre::Engine::ShaderManager::FindOption(a1, v4);
  if ( (_DWORD)v7 == -1 )
  {
    v7 = *(int *)(a1 + 2080);
    if ( (int)v7 >= 64 )
    {
      std::string::string(
        v12,
        (__int64)"ShaderManager::AddOption() -- option could not be added because the maximum number of options has been reached");
      v9 = std::string::string(
             v13,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\shadermanager.cpp");
      Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
        pExceptionObject,
        (__int64)v9,
        v10,
        (__int64)v12,
        0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 2080) = v7 + 1;
    *(_DWORD *)(*(_QWORD *)std::map<std::string,enum Spectre::Engine::ShaderOption>::_Try_emplace<std::string const &,>(
                             (__int64 *)(a1 + 16),
                             (__int64)v11,
                             a2)
              + 64LL) = v7;
    std::string::operator=((void **)(a1 + 32 * (v7 + 1)), a2);
  }
  return (unsigned int)v7;
}
