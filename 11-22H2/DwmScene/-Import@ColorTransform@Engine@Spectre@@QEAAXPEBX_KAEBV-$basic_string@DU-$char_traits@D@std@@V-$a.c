/*
 * XREFs of ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C
 * Callers:
 *     ?OnConfigurationLoaded@ViewerEngine@Engine@Spectre@@MEAAXH@Z @ 0x180066DA0 (-OnConfigurationLoaded@ViewerEngine@Engine@Spectre@@MEAAXH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@AEAAXXZ @ 0x18002A47C (-_Tidy@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@std@@V-$allocator@U-$pair@PEBVMutex@Engine@.c)
 *     ??$?0PEBD$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD0AEBV?$allocator@D@1@@Z @ 0x180050D44 (--$-0PEBD$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD0AEBV-$alloc.c)
 *     ??0?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180050FD4 (--0-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@D.c)
 *     ??_D?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180051544 (--_D-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ?CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ @ 0x18008F910 (-CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ.c)
 *     ?ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x18009023C (-ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char.c)
 *     ?ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090460 (-ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV-$basic_string@DU-$char_t.c)
 *     ?ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090664 (-ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 *     ?Resample@ColorTransform@Engine@Spectre@@QEAAX_K@Z @ 0x180090EDC (-Resample@ColorTransform@Engine@Spectre@@QEAAX_K@Z.c)
 *     ?SetVolumeData@ColorTransform@Engine@Spectre@@AEAAX_KAEBV?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@W4NormalizationMode@123@@Z @ 0x180090F94 (-SetVolumeData@ColorTransform@Engine@Spectre@@AEAAX_KAEBV-$vector@UColor@Math@Utils@Spectre@@V-$.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ColorTransform::Import(
        Spectre::Engine::ColorTransform *this,
        _BYTE *a2,
        __int64 a3,
        const void **a4)
{
  void **v6; // rdx
  size_t v7; // rdi
  const void **v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  void **v11; // rdx
  const void *v12; // rcx
  __int64 v13; // rcx
  void **v14; // rdx
  const void *v15; // rcx
  __int64 v16; // rcx
  void **v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v21; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  int v23; // [rsp+40h] [rbp-C0h]
  _QWORD v24[30]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[4]; // [rsp+140h] [rbp+40h] BYREF

  std::string::string((__int64)v25, a2, &a2[a3]);
  std::istringstream::istringstream(v24, v25);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v6 = &Spectre::Engine::ColorTransform::kFormatExtension_BinaryRGB_Base16;
  if ( (unsigned __int64)qword_1801D8840 >= 0x10 )
    v6 = (void **)Spectre::Engine::ColorTransform::kFormatExtension_BinaryRGB_Base16;
  v7 = (size_t)a4[2];
  v8 = a4;
  v9 = (unsigned __int64)a4[3];
  if ( v9 >= 0x10 )
    v8 = (const void **)*a4;
  if ( v7 == qword_1801D8838 && !memcmp_0(v8, v6, v7) )
  {
    Spectre::Engine::ColorTransform::ImportFormat_BinaryRGB_Base16(v10, v25, &v20);
    v7 = (size_t)a4[2];
    v9 = (unsigned __int64)a4[3];
  }
  v11 = &Spectre::Engine::ColorTransform::kFormatExtension_3DL;
  if ( (unsigned __int64)qword_1801D87E0 >= 0x10 )
    v11 = (void **)Spectre::Engine::ColorTransform::kFormatExtension_3DL;
  v12 = a4;
  if ( v9 >= 0x10 )
    v12 = *a4;
  if ( v7 == qword_1801D87D8 && !memcmp_0(v12, v11, v7) )
  {
    Spectre::Engine::ColorTransform::ImportFormat_Autodesk3DL(v13, v24, &v20);
    v7 = (size_t)a4[2];
    v9 = (unsigned __int64)a4[3];
  }
  v14 = &Spectre::Engine::ColorTransform::kFormatExtension_Cube;
  if ( (unsigned __int64)qword_1801D8800 >= 0x10 )
    v14 = (void **)Spectre::Engine::ColorTransform::kFormatExtension_Cube;
  v15 = a4;
  if ( v9 >= 0x10 )
    v15 = *a4;
  if ( v7 == qword_1801D87F8 && !memcmp_0(v15, v14, v7) )
  {
    Spectre::Engine::ColorTransform::ImportFormat_IridasCube(v16, v24, &v20);
    v7 = (size_t)a4[2];
    v9 = (unsigned __int64)a4[3];
  }
  v17 = &Spectre::Engine::ColorTransform::kFormatExtension_Look;
  if ( (unsigned __int64)qword_1801D8820 >= 0x10 )
    v17 = (void **)Spectre::Engine::ColorTransform::kFormatExtension_Look;
  if ( v9 >= 0x10 )
    a4 = (const void **)*a4;
  if ( v7 == qword_1801D8818 && !memcmp_0(a4, v17, v7) )
    Spectre::Engine::ColorTransform::ImportFormat_IridasLook(v18, v24, &v20);
  Spectre::Engine::ColorTransform::SetVolumeData(this, v20, &v21);
  Spectre::Engine::ColorTransform::Resample(this, v19);
  Spectre::Engine::ColorTransform::CreateTexture(this);
  std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy((__int64)&v21);
  std::istringstream::`vbase destructor'((__int64)v24);
  std::string::_Tidy_deallocate((__int64)v25);
}
