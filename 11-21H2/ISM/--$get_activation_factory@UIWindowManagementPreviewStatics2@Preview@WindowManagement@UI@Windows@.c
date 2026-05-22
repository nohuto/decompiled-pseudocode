/*
 * XREFs of ??$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@winrt@@YA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1800EF2EC
 * Callers:
 *     ??$call@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@?$factory_cache_entry@UWindowManagementPreview@Preview@WindowManagement@UI@Windows@winrt@@UIWindowManagementPreviewStatics2@23456@@impl@winrt@@QEAA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@2@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@Z @ 0x1800EEFF8 (--$call@AEAV_lambda_0f39583cb48dd27cb0d6a0869c546935_@@@-$factory_cache_entry@UWindowManagementP.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800EF330 (--$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
