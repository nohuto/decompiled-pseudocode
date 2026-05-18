/*
 * XREFs of ?OnConfigurationLoaded@ViewerEngine@Engine@Spectre@@MEAAXH@Z @ 0x180066DA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ??$LexicalCast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z @ 0x18002E028 (--$LexicalCast@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_string@_WU.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetScene@Engine@1Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@H@Z @ 0x18003477C (-GetScene@Engine@1Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@H@Z.c)
 *     ?GetSceneCount@Engine@1Spectre@@QEBAHXZ @ 0x1800347D4 (-GetSceneCount@Engine@1Spectre@@QEBAHXZ.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Spectre::Engine::ViewerEngine::OnConfigurationLoaded(Spectre::Engine::ViewerEngine *this, int a2)
{
  struct Spectre::Utils::IConfigurationManager *Configuration; // rsi
  void (__fastcall *v5)(struct Spectre::Utils::IConfigurationManager *, _QWORD *, void *, _QWORD *); // rbx
  _QWORD *v6; // rax
  void **v7; // rdx
  void **v8; // rcx
  int i; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdi
  void (__fastcall *v12)(struct Spectre::Utils::IConfigurationManager *, _QWORD *, void *, _QWORD *); // rbx
  _QWORD *v13; // rax
  __int64 v14; // [rsp+30h] [rbp-79h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-71h]
  _QWORD v16[4]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+60h] [rbp-49h] BYREF
  std::_Ref_count_base *v18; // [rsp+68h] [rbp-41h]
  void *Buf1[2]; // [rsp+80h] [rbp-29h] BYREF
  size_t Size; // [rsp+90h] [rbp-19h]
  unsigned __int64 v21; // [rsp+98h] [rbp-11h]
  _QWORD v22[4]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v23[4]; // [rsp+C0h] [rbp+17h] BYREF

  Configuration = Spectre::Engine::Engine::GetConfiguration(this, a2);
  v5 = *(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, _QWORD *, void *, _QWORD *))(*(_QWORD *)Configuration + 96LL);
  v6 = std::wstring::wstring(v22, (__int64)&unk_180106A04);
  v5(Configuration, v23, &Spectre::Engine::ConfigurationProperties::kColorGrading_TransformDataFormat, v6);
  Spectre::Utils::LexicalCast<std::string,std::wstring>(Buf1, v23);
  v7 = &Spectre::Engine::ColorTransform::kFormatExtension_BinaryRGB_Base16;
  if ( (unsigned __int64)qword_1801D8840 >= 0x10 )
    v7 = (void **)Spectre::Engine::ColorTransform::kFormatExtension_BinaryRGB_Base16;
  v8 = Buf1;
  if ( v21 >= 0x10 )
    v8 = (void **)Buf1[0];
  if ( Size == qword_1801D8838 && !memcmp_0(v8, v7, Size) )
  {
    Spectre::Engine::Engine::GetScene((__int64)this, &v14, 0);
    for ( i = 0; i < (int)Spectre::Engine::Engine::GetSceneCount(this); ++i )
    {
      Spectre::Engine::Engine::GetScene(v10, &v17, i);
      if ( *(_DWORD *)(v17 + 112) == a2 )
      {
        std::shared_ptr<Spectre::Engine::Light>::operator=(&v14, &v17);
        if ( v18 )
          std::_Ref_count_base::_Decref(v18);
        break;
      }
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
    v11 = Spectre::Engine::Scene::GetCustomData<Spectre::Engine::ViewerEngine::ViewerSceneData>(v14);
    v12 = *(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, _QWORD *, void *, _QWORD *))(*(_QWORD *)Configuration + 96LL);
    v13 = std::wstring::wstring(v16, (__int64)&unk_180106A04);
    v12(Configuration, v22, &Spectre::Engine::ConfigurationProperties::kColorGrading_TransformData, v13);
    if ( !std::string::empty((__int64)v22) )
    {
      Spectre::Utils::LexicalCast<std::string,std::wstring>(&v17, v22);
      Spectre::Engine::ColorTransform::Import(*(Spectre::Engine::ColorTransform **)(v11 + 120));
      std::string::_Tidy_deallocate((__int64)&v17);
    }
    std::wstring::_Tidy_deallocate((__int64)v22);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
  }
  std::string::_Tidy_deallocate((__int64)Buf1);
  std::wstring::_Tidy_deallocate((__int64)v23);
}
