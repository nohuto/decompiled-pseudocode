/*
 * XREFs of ??0CorrelationVector@@QEAA@XZ @ 0x1800C8100
 * Callers:
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1801D17B8 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x1801D26E0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_1801D26E0.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800C7A94 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

CorrelationVector *__fastcall CorrelationVector::CorrelationVector(CorrelationVector *this)
{
  void *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x90uLL);
  *(_QWORD *)this = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v3);
  return this;
}
