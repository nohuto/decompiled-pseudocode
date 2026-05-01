/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback_::_1_::catch$15 @ 0x1806F2733
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$Callback_Error@AEAY0CO@$$CBGUhresult@winrt@@AEAPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CO@$$CBG$$QEAUhresult@winrt@@AEAPEBG@Z @ 0x1806EE85C (--$Callback_Error@AEAY0CO@$$CBGUhresult@winrt@@AEAPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CO@$.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback_::_1_::catch_15(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx

  v3 = winrt::to_hresult((_DWORD *)(a2 + 48));
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const * &>(
    v4,
    v3,
    (__int64 *)(a2 + 56));
  return 0LL;
}
