/*
 * XREFs of ?unlock@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0E68
 * Callers:
 *     ??$doUnlock@$1?unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029C1C (--$doUnlock@$1-unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Utils::SharedMutex::unlock(std::_Mutex_base **this)
{
  std::_Mutex_base *v1; // rbx

  v1 = *this;
  std::_Mutex_base::lock(*this);
  *((_BYTE *)v1 + 228) = 0;
  _Mtx_unlock(v1);
  _Cnd_broadcast((std::_Mutex_base *)((char *)v1 + 152));
}
