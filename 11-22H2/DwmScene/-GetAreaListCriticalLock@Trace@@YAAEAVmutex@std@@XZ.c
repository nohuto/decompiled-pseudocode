/*
 * XREFs of ?GetAreaListCriticalLock@Trace@@YAAEAVmutex@std@@XZ @ 0x18001D470
 * Callers:
 *     ??0LevelSettings@Trace@@QEAA@PEBDI@Z @ 0x18001D114 (--0LevelSettings@Trace@@QEAA@PEBDI@Z.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 */

struct std::mutex *__fastcall Trace::GetAreaListCriticalLock(Trace *this)
{
  if ( dword_1801D3DC8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D3DC8);
    if ( dword_1801D3DC8 == -1 )
    {
      _Mtx_init_in_situ((_Mtx_t)&unk_1801D3DD0, 2);
      atexit(Trace::GetAreaListCriticalLock_::_2_::_dynamic_atexit_destructor_for__mut__);
      Init_thread_footer(&dword_1801D3DC8);
    }
  }
  return (struct std::mutex *)&unk_1801D3DD0;
}
