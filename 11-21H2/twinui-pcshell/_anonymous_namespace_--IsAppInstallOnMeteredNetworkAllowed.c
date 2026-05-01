/*
 * XREFs of _anonymous_namespace_::IsAppInstallOnMeteredNetworkAllowed @ 0x1801C8F68
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18017BD80 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _anonymous_namespace_::IsRegistryFlagSet @ 0x1801C8FF0 (_anonymous_namespace_--IsRegistryFlagSet.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180375CFC (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

char anonymous_namespace_::IsAppInstallOnMeteredNetworkAllowed()
{
  __int64 v0; // rcx
  char v1; // bl
  const struct _tlgProvider_t *v2; // rax
  int v3; // r9d
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( (unsigned __int8)anonymous_namespace_::IsRegistryFlagSet(
                          -2147483646LL,
                          L"SOFTWARE\\Microsoft\\WindowsUpdate\\UX\\Settings",
                          L"AllowAutoWindowsUpdateDownloadOverMeteredNetwork",
                          0LL)
    || (unsigned __int8)anonymous_namespace_::IsRegistryFlagSet(
                          -2147483646LL,
                          L"SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate",
                          L"AllowAutoWindowsUpdateDownloadOverMeteredNetwork",
                          0LL) )
  {
    v1 = 1;
  }
  v2 = DashboardManagerTelemetry::Provider(v0);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
      (_DWORD)v2,
      (unsigned int)&unk_1806CBEB8,
      0,
      v3,
      (__int64)&v5);
  }
  return v1;
}
