/*
 * XREFs of ?Shutdown@CDuckingManager@@UEAAXXZ @ 0x180022AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDuckingManager::Shutdown(CDuckingManager *this)
{
  struct _Mtx_internal_imp_t *v1; // rsi
  int v3; // eax

  v1 = (CDuckingManager *)((char *)this + 320);
  *((_BYTE *)this + 448) = 1;
  v3 = _Mtx_lock((CDuckingManager *)((char *)this + 320));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  *((_BYTE *)this + 312) = 1;
  _Mtx_unlock(v1);
}
