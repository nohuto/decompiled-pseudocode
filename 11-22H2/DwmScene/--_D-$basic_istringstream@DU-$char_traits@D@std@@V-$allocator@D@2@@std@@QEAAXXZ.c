/*
 * XREFs of ??_D?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180051544
 * Callers:
 *     ??_E?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1800515D4 (--_E-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x18009023C (-ImportFormat_Autodesk3DL@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char.c)
 *     ?ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090664 (-ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 *     _Spectre::Engine::ColorTransform::Import_::_1_::dtor$1 @ 0x1800EA8D2 (_Spectre--Engine--ColorTransform--Import_--_1_--dtor$1.c)
 *     _Spectre::Engine::ColorTransform::ImportFormat_Autodesk3DL_::_1_::dtor$1 @ 0x1800EA8F6 (_Spectre--Engine--ColorTransform--ImportFormat_Autodesk3DL_--_1_--dtor$1.c)
 *     _Spectre::Engine::ColorTransform::ImportFormat_IridasCube_::_1_::dtor$12 @ 0x1800EA91A (_Spectre--Engine--ColorTransform--ImportFormat_IridasCube_--_1_--dtor$12.c)
 * Callees:
 *     ??1?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18005124C (--1-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::istringstream::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  std::istringstream::~istringstream(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
