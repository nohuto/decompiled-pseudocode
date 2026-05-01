/*
 * XREFs of ??0CorrelationVector@@QEAA@XZ @ 0x1801BE93C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x180254A90 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_180254A90.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800BB9D8 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

CorrelationVector *__fastcall CorrelationVector::CorrelationVector(CorrelationVector *this)
{
  void *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x90uLL);
  *(_QWORD *)this = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v3);
  return this;
}
