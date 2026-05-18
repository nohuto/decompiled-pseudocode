/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::StringBegins @ 0x180091158
 * Callers:
 *     ?ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090664 (-ImportFormat_IridasCube@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?find@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_KAEBV12@_K@Z @ 0x18001F850 (-find@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_KAEBV12@_K@Z.c)
 */

bool __fastcall Spectre::Engine::_anonymous_namespace_::StringBegins(char *a1, char *a2)
{
  bool v4; // bl

  v4 = std::string::find(a1, a2) == 0;
  std::string::_Tidy_deallocate((__int64)a1);
  std::string::_Tidy_deallocate((__int64)a2);
  return v4;
}
