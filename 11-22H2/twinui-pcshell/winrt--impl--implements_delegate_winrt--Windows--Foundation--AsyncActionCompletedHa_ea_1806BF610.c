/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::Release @ 0x1806BF610
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806B0920 (--1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::Release(
        char *a1)
{
  unsigned int v2; // esi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)a1 + 84);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    MeetAndChatTelemetry::ShowFlyout::~ShowFlyout((MeetAndChatTelemetry::ShowFlyout *)(a1 + 16));
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)a1 + 1);
    operator delete(a1);
  }
  return v2;
}
