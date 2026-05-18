/*
 * XREFs of ?FromARGB@Color@Math@Utils@Spectre@@SA?AU1234@I@Z @ 0x18008FCD8
 * Callers:
 *     ?ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090460 (-ImportFormat_BinaryRGB_Base16@ColorTransform@Engine@Spectre@@AEBAXAEBV-$basic_string@DU-$char_t.c)
 *     ?SampleArray@ColorTransform@Engine@Spectre@@AEBA?AUColor@Math@Utils@3@_K@Z @ 0x180090F6C (-SampleArray@ColorTransform@Engine@Spectre@@AEBA-AUColor@Math@Utils@3@_K@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Spectre::Utils::Math::Color::FromARGB(float *a1, unsigned int a2)
{
  float *result; // rax

  *a1 = (float)BYTE2(a2) / 255.0;
  a1[1] = (float)BYTE1(a2) / 255.0;
  a1[2] = (float)(unsigned __int8)a2 / 255.0;
  result = a1;
  a1[3] = (float)HIBYTE(a2) / 255.0;
  return result;
}
