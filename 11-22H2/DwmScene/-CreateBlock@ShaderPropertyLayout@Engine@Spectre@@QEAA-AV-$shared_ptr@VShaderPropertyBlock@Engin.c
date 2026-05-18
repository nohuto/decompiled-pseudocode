/*
 * XREFs of ?CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180082964
 * Callers:
 *     ?AttachShaderFamily@Material@Engine@Spectre@@AEAAXV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180044188 (-AttachShaderFamily@Material@Engine@Spectre@@AEAAXV-$shared_ptr@VShaderFamily@Engine@Spectre@@@s.c)
 *     ?AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x18004B250 (-AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 *     ?Startup@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800509E8 (-Startup@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060780 (-EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ?GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x18004FA88 (-GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engi.c)
 *     ??0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180084404 (--0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VShaderPropertyLayout@Engine@Spectr.c)
 *     ?SetImportBlock@ShaderPropertyBlock@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@@Z @ 0x18008541C (-SetImportBlock@ShaderPropertyBlock@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyBlock@Engi.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Spectre::Engine::ShaderPropertyLayout::CreateBlock(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // r14
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  Spectre::Engine::ShaderPropertyBlock *v9; // r9
  __int64 v11; // [rsp+40h] [rbp-59h] BYREF
  std::_Ref_count_base *v12; // [rsp+48h] [rbp-51h]
  _QWORD *v13; // [rsp+50h] [rbp-49h]
  _QWORD v14[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v15[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v13 = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    std::string::string(
      v15,
      (__int64)"ShaderPropertyLayout::CreateBlock() -- layout declaration must be complete before a property block can be created.");
    v4 = std::string::string(
           v14,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v4,
      v5,
      (__int64)v15,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this(a1, &v11);
  v7 = operator new(0xA8uLL);
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPropertyBlock>::`vftable';
    Spectre::Engine::ShaderPropertyBlock::ShaderPropertyBlock(v7 + 4, v6);
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = v8 + 4;
  a2[1] = v8;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( *(_BYTE *)(a1 + 1241) )
  {
    Spectre::Engine::ShaderManager::GetGlobalProperties(*(_QWORD *)(a1 + 1152), &v11);
    Spectre::Engine::ShaderPropertyBlock::SetImportBlock(v9);
  }
  return a2;
}
