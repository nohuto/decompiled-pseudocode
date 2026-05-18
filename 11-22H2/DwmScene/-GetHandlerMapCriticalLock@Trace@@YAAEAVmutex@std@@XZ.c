/*
 * XREFs of ?GetHandlerMapCriticalLock@Trace@@YAAEAVmutex@std@@XZ @ 0x18001D594
 * Callers:
 *     ?NotifyHandlers@Trace@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Level@1@0@Z @ 0x18001D7C0 (-NotifyHandlers@Trace@@YAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Lev.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 */

struct std::mutex *__fastcall Trace::GetHandlerMapCriticalLock(Trace *this)
{
  if ( dword_1801D3E38 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D3E38);
    if ( dword_1801D3E38 == -1 )
    {
      _Mtx_init_in_situ((_Mtx_t)&unk_1801D3E40, 2);
      atexit(Trace::GetHandlerMapCriticalLock_::_2_::_dynamic_atexit_destructor_for__mutex__);
      Init_thread_footer(&dword_1801D3E38);
    }
  }
  return (struct std::mutex *)&unk_1801D3E40;
}
