/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_dfc53eb855280adfc513fa31c55f1c7f_@@@impl@winrt@@QEAA@XZ @ 0x1801A3CDC
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_ea1c8442aa00b161fccf4dbbf1910f23_@@@impl@winrt@@UEAAIXZ @ 0x1801A4090 (-Release@-$implements_delegate@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UI.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>,_lambda_dfc53eb855280adfc513fa31c55f1c7f_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>,_lambda_dfc53eb855280adfc513fa31c55f1c7f_>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  result = winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 8) )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)(a1 + 8));
  return result;
}
