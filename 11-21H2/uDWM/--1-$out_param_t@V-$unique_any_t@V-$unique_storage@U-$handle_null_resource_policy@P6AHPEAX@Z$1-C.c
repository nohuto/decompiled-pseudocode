/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800AF6DC
 * Callers:
 *     _CDesktopManager::CreateMonitorRenderTargetsDDisplay_::_1_::dtor$3 @ 0x1800B0156 (_CDesktopManager--CreateMonitorRenderTargetsDDisplay_--_1_--dtor$3.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

void __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      *(void ***)a1,
      *(void **)(a1 + 8));
}
