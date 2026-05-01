/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800ECCDC
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18004E7EC (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800EA908 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180622E64 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x18073C998 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180746B78 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800ECDD4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1800ECEC4 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(wchar_t *a1, LPVOID *a2, unsigned __int16 **a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // r9
  wchar_t v12[72]; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int16 v13[72]; // [rsp+C0h] [rbp-B8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v5 = ParseAppUserModelId(a1, v12, (unsigned __int64)a3, v13, 0x41uLL);
  v8 = -1LL;
  v9 = v5;
  if ( a2 && v5 >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v12[v10] );
    v9 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, v12, v10);
  }
  if ( a3 && v9 >= 0 )
  {
    do
      ++v8;
    while ( v13[v8] );
    v9 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, v13, v8);
    if ( v9 < 0 && a2 )
    {
      CoTaskMemFree(*a2);
      *a2 = 0LL;
    }
  }
  return (unsigned int)v9;
}
