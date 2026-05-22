/*
 * XREFs of ?HasEndpoint@DWMCursorBroker@@UEAAHXZ @ 0x180046BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::HasEndpoint(DWMCursorBroker *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  _QWORD *v5; // rax

  v2 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  v3 = 0;
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
    JUMPOUT(0x18007887DLL);
  }
  v4 = 0;
  v5 = (_QWORD *)((char *)this + 216);
  while ( !*v5 )
  {
    ++v4;
    v5 += 3;
    if ( v4 >= 0xA )
      goto LABEL_5;
  }
  v3 = 1;
LABEL_5:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v3;
}
