/*
 * XREFs of ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180640F50
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x18025AD50 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Mutex_base::lock(std::_Mutex_base *this)
{
  int v1; // eax

  v1 = _Mtx_lock(this);
  if ( v1 )
  {
    std::_Throw_C_error(v1);
    __debugbreak();
  }
}
