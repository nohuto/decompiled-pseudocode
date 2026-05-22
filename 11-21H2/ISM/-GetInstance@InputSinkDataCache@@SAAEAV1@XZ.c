/*
 * XREFs of ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180003F34
 * Callers:
 *     NotifyInputSinkParented @ 0x1800038A0 (NotifyInputSinkParented.c)
 *     NotifyInputSinkTransformChanged @ 0x180003A70 (NotifyInputSinkTransformChanged.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18002792C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     NotifyInputSinkRemoved @ 0x180080F20 (NotifyInputSinkRemoved.c)
 * Callees:
 *     ??0InputSinkDataCache@@QEAA@XZ @ 0x18003BCE4 (--0InputSinkDataCache@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *InputSinkDataCache::GetInstance(void)
{
  InputSinkDataCache *v1; // rcx

  if ( dword_180242B70 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180242B70);
    if ( dword_180242B70 == -1 )
    {
      InputSinkDataCache::InputSinkDataCache(v1);
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180242B70);
    }
  }
  return &stru_180242950;
}
