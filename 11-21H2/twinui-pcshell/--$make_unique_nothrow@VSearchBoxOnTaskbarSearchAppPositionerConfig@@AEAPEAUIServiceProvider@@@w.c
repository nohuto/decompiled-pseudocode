/*
 * XREFs of ??$make_unique_nothrow@VSearchBoxOnTaskbarSearchAppPositionerConfig@@AEAPEAUIServiceProvider@@@wil@@YA?AV?$unique_ptr@VSearchBoxOnTaskbarSearchAppPositionerConfig@@U?$default_delete@VSearchBoxOnTaskbarSearchAppPositionerConfig@@@wistd@@@wistd@@AEAPEAUIServiceProvider@@@Z @ 0x18019A5B8
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::make_unique_nothrow<SearchBoxOnTaskbarSearchAppPositionerConfig,IServiceProvider * &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *result; // rax

  v4 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = &SearchBoxOnTaskbarSearchAppPositionerConfig::`vftable';
    v4[1] = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4 + 1);
  }
  else
  {
    v4 = 0LL;
  }
  result = a1;
  *a1 = v4;
  return result;
}
