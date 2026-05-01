/*
 * XREFs of ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800BB7BC
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x180012F60 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x180254A90 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_180254A90.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x180255C40 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1806BFC40 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1806C2684 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1806C526C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800BB844 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ @ 0x1800BBBC8 (-IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800BBD2C (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

TraceLoggingCorrelationVector **__fastcall CorrelationVector::Increment(TraceLoggingCorrelationVector **this)
{
  TraceLoggingCorrelationVector *v1; // rbx
  unsigned __int64 v3; // rax
  bool v4; // dl
  struct TraceLoggingCorrelationVector *v5; // rax
  TraceLoggingCorrelationVector *v6; // rcx
  char Str[144]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = *this;
  v3 = TraceLoggingCorrelationVector::IncrementImpl(*this);
  TraceLoggingCorrelationVector::ToStringImpl(v1, v3, Str);
  v5 = TraceLoggingCorrelationVector::Set(Str, v4);
  v6 = *this;
  *this = v5;
  if ( v6 )
    operator delete(v6, 0x90uLL);
  return this;
}
