/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_24f9a2f893cdb50a379e319867e5c1aa_@@@impl@winrt@@UEAAIXZ @ 0x18006FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>,_lambda_24f9a2f893cdb50a379e319867e5c1aa_>::Release(
        char *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(Block + 32);
  if ( !v2 && Block )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete(Block);
  }
  return v2;
}
