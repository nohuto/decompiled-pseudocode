/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18063DED0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1_::_1_::dtor$11 @ 0x18025B16B (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_R_ea_18025B16B.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$3 @ 0x1806406FD (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$3.c)
 *     _StartupAppMonitor::UpdateNotificationMap_::_1_::dtor$1 @ 0x180640902 (_StartupAppMonitor--UpdateNotificationMap_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$5 @ 0x1806F2B6B (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasD_ea_1806F2B6B.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor$9 @ 0x1806F3340 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasU_ea_1806F3340.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners_::_1_::dtor$11 @ 0x1806F5748 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegisterUTMLis_ea_1806F5748.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
