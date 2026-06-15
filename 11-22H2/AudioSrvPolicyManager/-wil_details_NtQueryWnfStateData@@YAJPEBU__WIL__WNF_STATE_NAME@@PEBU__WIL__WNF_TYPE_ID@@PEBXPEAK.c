/*
 * XREFs of ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18003BB38
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18003702C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x18003BDC4 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18001AEB4 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_NtQueryWnfStateData(
        const struct __WIL__WNF_STATE_NAME *a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3,
        unsigned int *a4,
        void *a5,
        unsigned int *a6)
{
  int (*v6)(const struct __WIL__WNF_STATE_NAME *, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int *, void *, unsigned int *); // r11
  HMODULE NtDllModuleHandle; // rax

  v6 = g_wil_details_pfnNtQueryWnfStateData;
  if ( g_wil_details_pfnNtQueryWnfStateData )
    return ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, _QWORD, _QWORD, unsigned int *, void *, unsigned int *))v6)(
             a1,
             0LL,
             0LL,
             a4,
             a5,
             a6);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  g_wil_details_pfnNtQueryWnfStateData = (int (*)(const struct __WIL__WNF_STATE_NAME *, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int *, void *, unsigned int *))GetProcAddress(NtDllModuleHandle, "NtQueryWnfStateData");
  v6 = g_wil_details_pfnNtQueryWnfStateData;
  if ( g_wil_details_pfnNtQueryWnfStateData )
    return ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, _QWORD, _QWORD, unsigned int *, void *, unsigned int *))v6)(
             a1,
             0LL,
             0LL,
             a4,
             a5,
             a6);
  else
    return 3221225785LL;
}
