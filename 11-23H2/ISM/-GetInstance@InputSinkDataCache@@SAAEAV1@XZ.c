/*
 * XREFs of ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180009920
 * Callers:
 *     NotifyInputSinkParented @ 0x180009620 (NotifyInputSinkParented.c)
 *     NotifyInputSinkTransformChanged @ 0x180009800 (NotifyInputSinkTransformChanged.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     NotifyInputSinkRemoved @ 0x1800982A0 (NotifyInputSinkRemoved.c)
 * Callees:
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x180051A0C (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     _Init_thread_footer @ 0x180056BA8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180056C10 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *InputSinkDataCache::GetInstance(void)
{
  if ( dword_180268C28 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180268C28);
    if ( dword_180268C28 == -1 )
    {
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180268A18);
      qword_180268A58 = 0LL;
      xmmword_180268A60 = 0LL;
      qword_180268A70 = 0LL;
      byte_180268A78 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180268C28);
    }
  }
  return &SRWLock;
}
