/*
 * XREFs of ?HasEndpoint@DWMCursorBroker@@UEAAHXZ @ 0x1800511D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::HasEndpoint(DWMCursorBroker *this)
{
  int v2; // eax
  int v3; // edx
  _QWORD *i; // rax

  v2 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  else
  {
    v3 = 0;
    for ( i = (_QWORD *)((char *)this + 216); !*i; i += 3 )
    {
      if ( (unsigned int)++v3 >= 0xA )
      {
        _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
        return 0LL;
      }
    }
  }
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 1LL;
}
