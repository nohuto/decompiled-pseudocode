/*
 * XREFs of ?FlushImportedProperties@ShaderPropertyBlock@Engine@Spectre@@AEAAXXZ @ 0x180084EB0
 * Callers:
 *     ?FlushState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ @ 0x180085068 (-FlushState@ShaderPropertyBlock@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetImportBlock@ShaderPropertyBlock@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@@Z @ 0x18008541C (-SetImportBlock@ShaderPropertyBlock@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyBlock@Engi.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?GetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x180082F14 (-GetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyLayout@.c)
 *     ?GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x1800850B0 (-GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ShaderPropertyBlock::FlushImportedProperties(
        Spectre::Engine::ShaderPropertyBlock *this)
{
  __int64 v2; // rbp
  _QWORD *Layout; // rax
  bool v4; // bl
  _QWORD *v5; // rax
  __int64 v6; // r8
  char v7; // r15
  __int64 v8; // rax
  unsigned int *v9; // rdx
  unsigned int *i; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rax
  unsigned int *v16; // r12
  unsigned int *j; // r14
  _QWORD *v18; // rdi
  __int64 *v19; // rbx
  _BYTE v20[8]; // [rsp+30h] [rbp-C8h] BYREF
  std::_Ref_count_base *v21; // [rsp+38h] [rbp-C0h]
  __int64 v22; // [rsp+40h] [rbp-B8h] BYREF
  std::_Ref_count_base *v23; // [rsp+48h] [rbp-B0h]
  _QWORD v24[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-68h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( *((_DWORD *)this + 26) != *(_DWORD *)(v2 + 80) )
  {
    Spectre::Engine::ShaderPropertyLayout::GetImportLayout(*((_QWORD *)this + 2), &v22);
    Layout = (_QWORD *)Spectre::Engine::ShaderPropertyBlock::GetLayout(v2, v20);
    v4 = std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(&v22, Layout);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    if ( v4 )
    {
      std::string::string(
        v25,
        (__int64)"ShaderPropertyBlock::FlushPropertiesFromMaster() -- cannot flush block properties unless the master lay"
                 "out has been previously attached via SetMasterLayout().");
      v5 = std::string::string(
             v24,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\shaderpropertyblock.cpp");
      Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
        pExceptionObject,
        (__int64)v5,
        v6,
        (__int64)v25,
        0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v7 = 0;
    v8 = *((_QWORD *)this + 2);
    v9 = *(unsigned int **)(v8 + 1200);
    for ( i = *(unsigned int **)(v8 + 1192); i != v9; i += 2 )
    {
      v11 = i[1];
      v12 = *((_QWORD *)this + 4);
      v13 = *i;
      v14 = *(_QWORD *)(v2 + 32);
      if ( *(_DWORD *)(v12 + 4 * v11) != *(_DWORD *)(v14 + 4 * v13) )
      {
        *(_DWORD *)(v12 + 4 * v11) = *(_DWORD *)(v14 + 4 * v13);
        v7 = 1;
      }
    }
    v15 = *((_QWORD *)this + 2);
    v16 = *(unsigned int **)(v15 + 1224);
    for ( j = *(unsigned int **)(v15 + 1216); j != v16; j += 2 )
    {
      v18 = (_QWORD *)(*(_QWORD *)(v2 + 56) + 40LL * *j);
      v19 = (__int64 *)(*((_QWORD *)this + 7) + 40LL * j[1]);
      std::shared_ptr<Spectre::Engine::Light>::operator=(v19, v18);
      std::shared_ptr<Spectre::Engine::Light>::operator=(v19 + 2, v18 + 2);
    }
    *((_DWORD *)this + 26) = *(_DWORD *)(v2 + 80);
    if ( v7 )
      ++*((_DWORD *)this + 20);
    if ( v23 )
      std::_Ref_count_base::_Decref(v23);
  }
}
