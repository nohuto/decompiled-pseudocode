/*
 * XREFs of ?Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ @ 0x18016C57C
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 * Callees:
 *     atexit @ 0x1800961FC (atexit.c)
 *     _Init_thread_footer @ 0x180096330 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180096398 (_Init_thread_header.c)
 *     ??0DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAA@XZ @ 0x18016A61C (--0DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAA@XZ.c)
 */

struct Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread::Get(
        void)
{
  Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *v0; // rcx

  if ( dword_180220FE8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180220FE8);
    if ( dword_180220FE8 == -1 )
    {
      Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread::DiagnosticsDqThread(v0);
      atexit(Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread::Get_::_2_::_dynamic_atexit_destructor_for____dqThread__);
      Init_thread_footer(&dword_180220FE8);
    }
  }
  return (struct Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *)&xmmword_180220B20;
}
