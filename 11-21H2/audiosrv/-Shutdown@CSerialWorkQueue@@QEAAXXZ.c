/*
 * XREFs of ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800C50C0
 * Callers:
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800C31A0 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800C5C24 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::Shutdown(CSerialWorkQueue *this)
{
  int v2; // eax

  v2 = _Mtx_lock((CSerialWorkQueue *)((char *)this + 88));
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  *((_BYTE *)this + 80) = 1;
  _Mtx_unlock((CSerialWorkQueue *)((char *)this + 88));
}
