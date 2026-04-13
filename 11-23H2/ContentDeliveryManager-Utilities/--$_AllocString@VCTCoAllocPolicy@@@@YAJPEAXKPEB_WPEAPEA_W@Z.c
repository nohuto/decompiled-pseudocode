/*
 * XREFs of ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEB_WPEAPEA_W@Z @ 0x1800BAB6C
 * Callers:
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x1800BB334 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180041AE4 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180054EF4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18005F544 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall _AllocString<CTCoAllocPolicy>(unsigned __int64 a1, __int64 a2, wchar_t *a3, char **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rdx
  void *v8; // rcx
  int v9; // edi
  void **v10; // r9
  unsigned __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = a1;
  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  *a4 = 0LL;
  if ( v4 + 1 < v4 )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    *a4 = 0LL;
    v9 = ULongLongMult(v4 + 1, 2uLL, &v12);
    if ( v9 >= 0 )
      v9 = CTCoAllocPolicy::Alloc(v8, v7, v12, v10);
    if ( v9 >= 0 )
      StringCchCopyNExW(*a4, v4 + 1, a3, v4);
  }
  return (unsigned int)v9;
}
