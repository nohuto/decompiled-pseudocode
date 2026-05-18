/*
 * XREFs of floorf @ 0x18000C02C
 * Callers:
 *     ?FromHSB@Color@Math@Utils@Spectre@@SA?AU1234@MMM@Z @ 0x18001C1C0 (-FromHSB@Color@Math@Utils@Spectre@@SA-AU1234@MMM@Z.c)
 *     ?Evaluate@ColorTransform@Engine@Spectre@@QEBA?AUColor@Math@Utils@3@U4563@@Z @ 0x18008FADC (-Evaluate@ColorTransform@Engine@Spectre@@QEBA-AUColor@Math@Utils@3@U4563@@Z.c)
 *     ?ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090460 (-ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV-$basic_string@DU-$char_t.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
