/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e5041e3efe5dfcfff3a6fe9f3f91f36f___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e5041e3efe5dfcfff3a6fe9f3f91f36f___ @ 0x1801EA600
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e5041e3efe5dfcfff3a6fe9f3f91f36f___::Release @ 0x1801EAA80 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1801EAA80.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e5041e3efe5dfcfff3a6fe9f3f91f36f___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e5041e3efe5dfcfff3a6fe9f3f91f36f___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, a2, a3, a4);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
