/*
 * XREFs of ?InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z @ 0x180034A30
 * Callers:
 *     ?OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z @ 0x1800352A0 (-OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C (--0SpectreException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@PEAX@2@PEAU32@@Z @ 0x18001DD04 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@std.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18002E824 (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18002E824.c)
 *     ??$make_shared@VBackgroundUnlitShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VBackgroundUnlitShaderExtension@Engine@Spectre@@@0@XZ @ 0x180030084 (--$make_shared@VBackgroundUnlitShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VBackg.c)
 *     ??$make_shared@VFontShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VFontShaderExtension@Engine@Spectre@@@0@XZ @ 0x1800302E8 (--$make_shared@VFontShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VFontShaderExtens.c)
 *     ??$make_shared@VImageProcessingShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VImageProcessingShaderExtension@Engine@Spectre@@@0@XZ @ 0x1800303B4 (--$make_shared@VImageProcessingShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VImage.c)
 *     ??$make_shared@VStandardShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VStandardShaderExtension@Engine@Spectre@@@0@XZ @ 0x180030648 (--$make_shared@VStandardShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VStandardShad.c)
 *     ??$make_shared@VSymbolShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VSymbolShaderExtension@Engine@Spectre@@@0@XZ @ 0x180030714 (--$make_shared@VSymbolShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VSymbolShaderEx.c)
 *     ??$make_shared@VUnlitShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VUnlitShaderExtension@Engine@Spectre@@@0@XZ @ 0x1800307E0 (--$make_shared@VUnlitShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VUnlitShaderExte.c)
 *     ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0 (-GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ.c)
 *     ?AddExtension@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@@Z @ 0x18004EF08 (-AddExtension@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EShaderType@23@VShaderProgram@23@@Z @ 0x18004F42C (-AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?SetShaderModels@ShaderManager@Engine@Spectre@@QEAAXAEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x1800507F0 (-SetShaderModels@ShaderManager@Engine@Spectre@@QEAAXAEBV-$vector@W4EShaderModel@Engine@Spectre@@.c)
 *     ?CopyProgram@ShaderProgramBufferRef@ShaderRegistration@Engine@Spectre@@QEBA?AVShaderProgram@34@XZ @ 0x18007C12C (-CopyProgram@ShaderProgramBufferRef@ShaderRegistration@Engine@Spectre@@QEBA-AVShaderProgram@34@X.c)
 *     ?GetEmbeddedShaderDatabase@ShaderRegistration@Engine@Spectre@@YA?AV?$shared_ptr@VShaderDatabase@Engine@Spectre@@@std@@W4EShaderPlatform@23@@Z @ 0x18007C14C (-GetEmbeddedShaderDatabase@ShaderRegistration@Engine@Spectre@@YA-AV-$shared_ptr@VShaderDatabase@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall Spectre::Engine::Engine::InitializeShaderManager(Spectre::Engine::Engine *a1, unsigned int a2)
{
  struct Spectre::Engine::ShaderManager *ShaderManager; // rax
  struct Spectre::Engine::ShaderManager *v5; // r15
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  __int64 EmbeddedShaderDatabase; // rax
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rax
  _QWORD *i; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *j; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  std::_Ref_count_base *v20; // rcx
  struct Spectre::Engine::ShaderManager *v21; // r8
  __int64 v22; // rcx
  struct Spectre::Engine::ShaderManager *v23; // rax
  struct Spectre::Engine::ShaderManager *v24; // rax
  struct Spectre::Engine::ShaderManager *v25; // rax
  std::_Ref_count_base *v26; // rbx
  struct Spectre::Engine::ShaderManager *v27; // rax
  std::_Ref_count_base *v28; // rdi
  struct Spectre::Engine::ShaderManager *v29; // rax
  std::_Ref_count_base *v30; // rsi
  std::_Ref_count_base *v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v32; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v33; // [rsp+48h] [rbp-B8h]
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-80h] BYREF
  __int128 v38; // [rsp+90h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-60h] BYREF
  std::_Ref_count_base *v40[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-40h] BYREF
  std::_Ref_count_base *v42[2]; // [rsp+D0h] [rbp-30h] BYREF
  std::_Ref_count_base *v43[2]; // [rsp+E0h] [rbp-20h] BYREF
  void *v44[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v45[8]; // [rsp+100h] [rbp+0h] BYREF
  std::_Ref_count_base *v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h] BYREF
  std::_Ref_count_base *v48; // [rsp+118h] [rbp+18h]
  _QWORD v49[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v50[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+160h] [rbp+60h] BYREF

  ShaderManager = Spectre::Engine::Engine::GetShaderManager(a1);
  v5 = ShaderManager;
  if ( *(_QWORD *)(v6 + 624) - *(_QWORD *)(v6 + 616) >= 4uLL )
    Spectre::Engine::ShaderManager::SetShaderModels(ShaderManager);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v32,
    (_QWORD *)a1 + 80);
  v7 = v32;
  if ( !v32 )
  {
    EmbeddedShaderDatabase = Spectre::Engine::ShaderRegistration::GetEmbeddedShaderDatabase(v45, a2);
    v7 = *(_DWORD **)EmbeddedShaderDatabase;
    v9 = *(std::_Ref_count_base **)(EmbeddedShaderDatabase + 8);
    *(_QWORD *)EmbeddedShaderDatabase = 0LL;
    *(_QWORD *)(EmbeddedShaderDatabase + 8) = 0LL;
    v32 = v7;
    v10 = v33;
    v33 = v9;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    if ( v46 )
      std::_Ref_count_base::_Decref(v46);
  }
  if ( v7[2] != a2 )
  {
    std::string::string(v50, (__int64)"Shader database platform is incompatible with engine shader platform");
    Spectre::Utils::SpectreException::SpectreException((__int64)pExceptionObject, (const char *)v50, 0);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  (*(void (__fastcall **)(_DWORD *, void **))(*(_QWORD *)v7 + 8LL))(v7, v44);
  for ( i = *(_QWORD **)v44[0]; !*((_BYTE *)i + 25); i = j )
  {
    std::string::string(v50, (__int64)(i + 4));
    v12 = *((_DWORD *)i + 20);
    v31[0] = (std::_Ref_count_base *)pExceptionObject;
    v13 = Spectre::Engine::ShaderRegistration::ShaderProgramBufferRef::CopyProgram(i + 8, pExceptionObject);
    v14 = std::string::string(v49, (__int64)v50);
    Spectre::Engine::ShaderManager::AddShaderProgram(v5, v14, v12, v13);
    std::string::_Tidy_deallocate((__int64)v50);
    v15 = i[2];
    if ( *(_BYTE *)(v15 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>>>::_Min((_QWORD *)v15);
    }
  }
  v17 = std::make_shared<Spectre::Engine::StandardShaderExtension,>(&v47);
  v18 = *v17;
  v19 = v17[1];
  *v17 = 0LL;
  v17[1] = 0LL;
  *((_QWORD *)a1 + 8) = v18;
  v20 = (std::_Ref_count_base *)*((_QWORD *)a1 + 9);
  *((_QWORD *)a1 + 9) = v19;
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( v48 )
    std::_Ref_count_base::_Decref(v48);
  v21 = Spectre::Engine::Engine::GetShaderManager(a1);
  v34 = 0LL;
  v22 = *((_QWORD *)a1 + 9);
  if ( v22 )
    _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
  v34 = *((_OWORD *)a1 + 4);
  Spectre::Engine::ShaderManager::AddExtension(v21, &v34);
  std::make_shared<Spectre::Engine::ImageProcessingShaderExtension,>(v43);
  v23 = Spectre::Engine::Engine::GetShaderManager(a1);
  v36 = 0LL;
  if ( v43[1] )
    _InterlockedAdd((volatile signed __int32 *)v43[1] + 2, 1u);
  v36 = *(_OWORD *)v43;
  Spectre::Engine::ShaderManager::AddExtension(v23, &v36);
  std::make_shared<Spectre::Engine::SymbolShaderExtension,>(v42);
  v24 = Spectre::Engine::Engine::GetShaderManager(a1);
  v37 = 0LL;
  if ( v42[1] )
    _InterlockedAdd((volatile signed __int32 *)v42[1] + 2, 1u);
  v37 = *(_OWORD *)v42;
  Spectre::Engine::ShaderManager::AddExtension(v24, &v37);
  std::make_shared<Spectre::Engine::FontShaderExtension,>(v31);
  v25 = Spectre::Engine::Engine::GetShaderManager(a1);
  v38 = 0LL;
  v26 = v31[1];
  if ( v31[1] )
  {
    _InterlockedAdd((volatile signed __int32 *)v31[1] + 2, 1u);
    v26 = v31[1];
  }
  v38 = *(_OWORD *)v31;
  Spectre::Engine::ShaderManager::AddExtension(v25, &v38);
  std::make_shared<Spectre::Engine::UnlitShaderExtension,>(v35);
  v27 = Spectre::Engine::Engine::GetShaderManager(a1);
  v39 = 0LL;
  v28 = v35[1];
  if ( v35[1] )
  {
    _InterlockedAdd((volatile signed __int32 *)v35[1] + 2, 1u);
    v26 = v31[1];
    v28 = v35[1];
  }
  v39 = *(_OWORD *)v35;
  Spectre::Engine::ShaderManager::AddExtension(v27, &v39);
  std::make_shared<Spectre::Engine::BackgroundUnlitShaderExtension,>(v40);
  v29 = Spectre::Engine::Engine::GetShaderManager(a1);
  v41 = 0LL;
  v30 = v40[1];
  if ( v40[1] )
  {
    _InterlockedAdd((volatile signed __int32 *)v40[1] + 2, 1u);
    v26 = v31[1];
    v28 = v35[1];
    v30 = v40[1];
  }
  v41 = *(_OWORD *)v40;
  Spectre::Engine::ShaderManager::AddExtension(v29, &v41);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  if ( v42[1] )
    std::_Ref_count_base::_Decref(v42[1]);
  if ( v43[1] )
    std::_Ref_count_base::_Decref(v43[1]);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::ShaderRegistration::ProgramRegistration>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderRegistration::ProgramRegistration>,void *>>>(
    v44,
    (__int64)v44);
  if ( v33 )
    std::_Ref_count_base::_Decref(v33);
}
