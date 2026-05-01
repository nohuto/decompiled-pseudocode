/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@@impl@winrt@@UEAAIXZ @ 0x1801A1FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801A2000 (-unconditional_release_ref@-$com_ptr@UPenMenuSystemTrayManager@implementation@Shell@Internal@Win.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>,_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 4);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::unconditional_release_ref(a1 + 2);
    operator delete((void *)a1, 0x18uLL);
  }
  return v2;
}
