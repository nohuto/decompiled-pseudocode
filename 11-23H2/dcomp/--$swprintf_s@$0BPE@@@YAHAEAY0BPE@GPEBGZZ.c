/*
 * XREFs of ??$swprintf_s@$0BPE@@@YAHAEAY0BPE@GPEBGZZ @ 0x18001E4E0
 * Callers:
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 * Callees:
 *     vswprintf_s @ 0x180096A70 (vswprintf_s.c)
 */

int swprintf_s<500>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x1F4uLL, a2, va);
}
