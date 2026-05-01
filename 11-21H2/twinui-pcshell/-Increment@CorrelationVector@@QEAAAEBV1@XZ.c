/*
 * XREFs of ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800C7878
 * Callers:
 *     ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x18003D410 (-OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x1801D26E0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_1801D26E0.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1801D4E00 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1801D56C0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805CE3A0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800C7900 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800C7D14 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ @ 0x1800C7DD4 (-IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
