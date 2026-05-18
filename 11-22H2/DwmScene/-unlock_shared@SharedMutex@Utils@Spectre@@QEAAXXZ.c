/*
 * XREFs of ?unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0EB0
 * Callers:
 *     ??$doUnlock@$1?unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029CEC (--$doUnlock@$1-unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Utils::SharedMutex::unlock_shared(std::_Mutex_base **this)
{
  std::_Mutex_base *v1; // rdi
  int v2; // esi
  char v3; // bl

  v1 = *this;
  std::_Mutex_base::lock(*this);
  v2 = --*((_DWORD *)v1 + 56);
  v3 = *((_BYTE *)v1 + 228);
  _Mtx_unlock(v1);
  if ( v3 )
  {
    if ( !v2 )
      _Cnd_signal((std::_Mutex_base *)((char *)v1 + 80));
  }
  else if ( v2 == -2 )
  {
    _Cnd_broadcast((std::_Mutex_base *)((char *)v1 + 152));
  }
}
