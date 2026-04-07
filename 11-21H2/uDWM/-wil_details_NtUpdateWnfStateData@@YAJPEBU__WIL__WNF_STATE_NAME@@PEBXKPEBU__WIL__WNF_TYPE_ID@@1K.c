/*
 * XREFs of ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180096CD4
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000F498 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180096D78 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18000F7D8 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_NtUpdateWnfStateData(
        const struct __WIL__WNF_STATE_NAME *a1,
        const void *a2,
        unsigned int a3,
        const struct __WIL__WNF_TYPE_ID *a4,
        const void *a5,
        unsigned int a6,
        unsigned int a7)
{
  int (*v7)(const struct __WIL__WNF_STATE_NAME *, const void *, unsigned int, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int, unsigned int); // r11
  HMODULE NtDllModuleHandle; // rax

  v7 = g_wil_details_pfnNtUpdateWnfStateData;
  if ( g_wil_details_pfnNtUpdateWnfStateData )
    return ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, const void *, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int))v7)(
             a1,
             a2,
             a3,
             0LL,
             0LL,
             a6,
             a7);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  g_wil_details_pfnNtUpdateWnfStateData = (int (*)(const struct __WIL__WNF_STATE_NAME *, const void *, unsigned int, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int, unsigned int))GetProcAddress(NtDllModuleHandle, "NtUpdateWnfStateData");
  v7 = g_wil_details_pfnNtUpdateWnfStateData;
  if ( g_wil_details_pfnNtUpdateWnfStateData )
    return ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, const void *, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int))v7)(
             a1,
             a2,
             a3,
             0LL,
             0LL,
             a6,
             a7);
  else
    return 3221225785LL;
}
