/*
 * XREFs of ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180009D90
 * Callers:
 *     NotifyInputSinkParented @ 0x180009A90 (NotifyInputSinkParented.c)
 *     NotifyInputSinkTransformChanged @ 0x180009C70 (NotifyInputSinkTransformChanged.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     NotifyInputSinkRemoved @ 0x1800AA880 (NotifyInputSinkRemoved.c)
 * Callees:
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800522EC (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     _Init_thread_footer @ 0x180057938 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800579A0 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *InputSinkDataCache::GetInstance(void)
{
  if ( dword_180277FB8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180277FB8);
    if ( dword_180277FB8 == -1 )
    {
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180277A58);
      qword_180277A98 = 0LL;
      xmmword_180277AA0 = 0LL;
      qword_180277AB0 = 0LL;
      byte_180277AB8 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180277FB8);
    }
  }
  return &SRWLock;
}
