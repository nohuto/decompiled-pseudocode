/*
 * XREFs of ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES@@@Z @ 0x10003F52
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z @ 0x10003513 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YGJXZ @ 0x10002B6A (-GetLastErrorFailHr@details@wil@@YGJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@QAEXPAX@Z @ 0x10003F96 (-reset@-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@wil@@YGX0@ZU-$int.c)
 */

int __stdcall _create___semaphore_t_V__unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QAEJJJPB_WKPAU_SECURITY_ATTRIBUTES___Z(
        LONG lInitialCount,
        LONG lMaximumCount,
        const WCHAR *lpName,
        int a4,
        int a5)
{
  int v5; // esi
  HANDLE Semaphore; // eax
  wil::details *v8; // [esp+0h] [ebp-8h]

  v5 = 0;
  Semaphore = CreateSemaphoreExW(0, lInitialCount, lMaximumCount, lpName, 0, 0x1F0003u);
  if ( !Semaphore )
    return wil::details::GetLastErrorFailHr(v8);
  _reset___unique_storage_U__resource_policy_PAXP6GXPAX__E_1_CloseHandle_details_wil__YGX0_ZU__integral_constant_I_0A__wistd__PAXPAX_0A___T_details_wil___details_wil__QAEXPAX_Z(Semaphore);
  return v5;
}
