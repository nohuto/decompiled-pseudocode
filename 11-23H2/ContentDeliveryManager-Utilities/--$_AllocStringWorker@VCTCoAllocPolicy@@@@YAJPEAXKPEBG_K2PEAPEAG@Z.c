/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18004F4CC
 * Callers:
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18005B374 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 *     ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800796E8 (-GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ??$_AllocArray@GVCTCoAllocPolicy@@@@YAJPEAXK_KPEAPEAG@Z @ 0x18004F490 (--$_AllocArray@GVCTCoAllocPolicy@@@@YAJPEAXK_KPEAPEAG@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18005F544 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        unsigned __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int16 **a6)
{
  unsigned __int64 v6; // rbp
  int v9; // ebx
  unsigned __int16 **v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v12; // [rsp+28h] [rbp-20h]
  unsigned int v13; // [rsp+30h] [rbp-18h]

  v6 = a4 + 1;
  *a6 = 0LL;
  if ( a4 + 1 < a4 )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    v9 = _AllocArray<unsigned short,CTCoAllocPolicy>(a1, a2, v6, a6);
    if ( v9 >= 0 )
      StringCchCopyNExW(*a6, v6, a3, a4, v11, v12, v13);
  }
  return (unsigned int)v9;
}
