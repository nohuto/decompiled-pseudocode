/*
 * XREFs of ??$assign@V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1803D3E10
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::wstring::assign<std::basic_string_view<unsigned short>,0>(char *a1, void **a2)
{
  return std::wstring::assign(a1, *a2, _mm_srli_si128(*(__m128i *)a2, 8).m128i_u64[0]);
}
