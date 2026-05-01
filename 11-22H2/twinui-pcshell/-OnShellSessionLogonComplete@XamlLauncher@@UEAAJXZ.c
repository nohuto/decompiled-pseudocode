/*
 * XREFs of ?OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ @ 0x180501690
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008EED8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800BBE4C (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x1800F4D94 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 */

__int64 __fastcall XamlLauncher::OnShellSessionLogonComplete(XamlLauncher *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = LauncherTelemetryLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v2,
      (int)&unk_18085AB7E,
      0);
  *((_BYTE *)XamlLauncher::s_pLauncher + 374) = 1;
  XamlLauncher::ConsiderShowStartAutomatically((XamlLauncher *)((char *)this - 88));
  return 0LL;
}
