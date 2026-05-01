/*
 * XREFs of ??$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositioner@@V?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@@wil@@YA?AV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositioner@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositioner@@@wistd@@@wistd@@$$QEAV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@2@@Z @ 0x18019A534
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?reset@?$unique_ptr@VISearchAppPositionerConfig@@U?$default_delete@VISearchAppPositionerConfig@@@wistd@@@wistd@@QEAAXPEAVISearchAppPositionerConfig@@@Z @ 0x180390324 (-reset@-$unique_ptr@VISearchAppPositionerConfig@@U-$default_delete@VISearchAppPositionerConfig@@.c)
 *     ??4?$unique_ptr@VISearchAppPositionerConfig@@U?$default_delete@VISearchAppPositionerConfig@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803A0444 (--4-$unique_ptr@VISearchAppPositionerConfig@@U-$default_delete@VISearchAppPositionerConfig@@@wis.c)
 */

_QWORD *__fastcall wil::make_unique_nothrow<SearchBoxOnTaskbarSearchAppPositioner,wistd::unique_ptr<SearchBoxOnTaskbarSearchAppPositionerConfig,wistd::default_delete<SearchBoxOnTaskbarSearchAppPositionerConfig>>>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // r8
  _QWORD *result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    *a2 = 0LL;
    v4[1] = 0LL;
    v7 = v5;
    *v4 = &SearchBoxOnTaskbarSearchAppPositioner::`vftable';
    wistd::unique_ptr<ISearchAppPositionerConfig,wistd::default_delete<ISearchAppPositionerConfig>>::operator=(
      v4 + 1,
      &v7);
    wistd::unique_ptr<ISearchAppPositionerConfig,wistd::default_delete<ISearchAppPositionerConfig>>::reset(&v7, 0LL);
  }
  else
  {
    v4 = 0LL;
  }
  result = a1;
  *a1 = v4;
  return result;
}
