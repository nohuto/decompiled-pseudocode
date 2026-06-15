/*
 * XREFs of ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800F0488
 * Callers:
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800EF650 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800F0CC4 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A6C (--1CPowerReferenceManager@@QEAA@XZ.c)
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
