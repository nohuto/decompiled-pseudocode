/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1801BF0B0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$13 @ 0x1802B4AB4 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_1802B4AB4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
