/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_65d9d95dc8f5b1840d03fd77ef45dc28_@@@impl@winrt@@UEAAIXZ @ 0x1801BDB50
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>,_lambda_65d9d95dc8f5b1840d03fd77ef45dc28_>::Release(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(Block + 8);
  if ( !v2 && Block )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete((void *)Block);
  }
  return v2;
}
