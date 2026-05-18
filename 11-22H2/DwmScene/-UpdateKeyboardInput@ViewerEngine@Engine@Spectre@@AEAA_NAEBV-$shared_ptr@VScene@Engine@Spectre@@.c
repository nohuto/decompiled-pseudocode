/*
 * XREFs of ?UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBVInput@23@@Z @ 0x18006AF64
 * Callers:
 *     ?PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180067850 (-PreUpdateScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ??$GetEnum@W4EGeometryNormalDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAA?AW4EGeometryNormalDisplayMode@Engine@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4342@@Z @ 0x180062AFC (--$GetEnum@W4EGeometryNormalDisplayMode@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QE.c)
 *     ??$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VCamera@23@@std@@YA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@0@AEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@@Z @ 0x180063140 (--$dynamic_pointer_cast@VViewerCamera@Engine@Spectre@@VCamera@23@@std@@YA-AV-$shared_ptr@VViewer.c)
 *     ?GetKeyboardKeyCode@Input@Engine@Spectre@@QEBA?AW4EKeyboard@23@XZ @ 0x180074614 (-GetKeyboardKeyCode@Input@Engine@Spectre@@QEBA-AW4EKeyboard@23@XZ.c)
 *     ?IsKeyboardButtonPressed@Input@Engine@Spectre@@QEBA_NXZ @ 0x180074680 (-IsKeyboardButtonPressed@Input@Engine@Spectre@@QEBA_NXZ.c)
 *     ?GetDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092CC0 (-GetDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ.c)
 *     ?SetDistance@ViewerCamera@Engine@Spectre@@QEAAXM@Z @ 0x180092F80 (-SetDistance@ViewerCamera@Engine@Spectre@@QEAAXM@Z.c)
 *     ?ToggleBool@IConfigurationManager@Utils@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DBED0 (-ToggleBool@IConfigurationManager@Utils@Spectre@@QEAAXAEBV-$basic_string@_WU-$char_traits@_W@std.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Engine::ViewerEngine::UpdateKeyboardInput(
        Spectre::Engine::Engine *a1,
        _QWORD *a2,
        Spectre::Engine::Input *a3)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rbx
  int KeyboardKeyCode; // edi
  void *v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  void *v11; // rdx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // r8
  Spectre::Engine::ViewerCamera *v15; // rcx
  float v16; // xmm0_4
  float Distance; // xmm0_4
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v20; // [rsp+38h] [rbp-18h]
  Spectre::Engine::ViewerCamera *v21; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v22; // [rsp+48h] [rbp-8h]

  Configuration = Spectre::Engine::Engine::GetConfiguration(a1, *(_DWORD *)(*a2 + 112LL));
  if ( !(*(unsigned __int8 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 64LL))(
          Configuration,
          &Spectre::Engine::ConfigurationProperties::kApplication_KeyboardDeveloperMode,
          0LL)
    || !Spectre::Engine::Input::IsKeyboardButtonPressed(a3) )
  {
    return 0;
  }
  KeyboardKeyCode = Spectre::Engine::Input::GetKeyboardKeyCode(a3);
  if ( KeyboardKeyCode == 4 )
  {
    v8 = &Spectre::Engine::ConfigurationProperties::kLighting_DirectEnabled;
  }
  else
  {
    if ( KeyboardKeyCode != 5 )
      goto LABEL_8;
    v8 = &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentEnabled;
  }
  Spectre::Utils::IConfigurationManager::ToggleBool(Configuration, v8);
LABEL_8:
  v9 = Spectre::Utils::IConfigurationManager::GetEnum<enum Spectre::Engine::EGeometryNormalDisplayMode>((__int64)Configuration);
  if ( KeyboardKeyCode == 6 )
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration + 152LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kRenderer_GeometryNormalMode,
      (unsigned int)((v9 + 1) % 11),
      1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ExposureValue);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ExposureValue,
    v10,
    1LL);
  switch ( KeyboardKeyCode )
  {
    case 9:
      v11 = &Spectre::Engine::ConfigurationProperties::kRenderer_Textures;
LABEL_14:
      Spectre::Utils::IConfigurationManager::ToggleBool(Configuration, v11);
      break;
    case 11:
      v11 = &Spectre::Engine::ConfigurationProperties::kRenderer_Grid;
      goto LABEL_14;
    case 13:
      v12 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)Configuration + 72LL))(
              Configuration,
              &Spectre::Engine::ConfigurationProperties::kRenderer_GeometryDisplayMode,
              0LL);
      (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration + 152LL))(
        Configuration,
        &Spectre::Engine::ConfigurationProperties::kRenderer_GeometryDisplayMode,
        (unsigned int)((v12 + 1) % 22),
        1LL);
      break;
  }
  v13 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          &v21,
          a2);
  Spectre::Engine::Engine::GetCamera((__int64)a1, &v19, v14, v13);
  if ( KeyboardKeyCode == 14 )
  {
    std::dynamic_pointer_cast<Spectre::Engine::ViewerCamera,Spectre::Engine::Camera>((__int64 *)&v21, &v19);
    v16 = Spectre::Engine::ViewerCamera::GetDistance(v21) * 0.5;
    goto LABEL_21;
  }
  if ( KeyboardKeyCode == 15 )
  {
    std::dynamic_pointer_cast<Spectre::Engine::ViewerCamera,Spectre::Engine::Camera>((__int64 *)&v21, &v19);
    Distance = Spectre::Engine::ViewerCamera::GetDistance(v21);
    v16 = Distance + Distance;
LABEL_21:
    Spectre::Engine::ViewerCamera::SetDistance(v15, v16);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
  }
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  return 1;
}
