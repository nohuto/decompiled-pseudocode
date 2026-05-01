/*
 * XREFs of _lambda_f5bad7708cd3d32b6b139f2523e4a8ac_::__lambda_f5bad7708cd3d32b6b139f2523e4a8ac_ @ 0x18049A200
 * Callers:
 *     __lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator()_::_1_::dtor$9 @ 0x18021DDFA (__lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator()_--_1_--dtor$9.c)
 *     __lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator()_::_1_::dtor$19 @ 0x18021DE1E (__lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator()_--_1_--dtor$19.c)
 *     __lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator()_::_1_::dtor$25 @ 0x18021DE30 (__lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator()_--_1_--dtor$25.c)
 *     __lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator()_::_1_::dtor$38 @ 0x18021DE42 (__lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator()_--_1_--dtor$38.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_d03982031c7d1918ed499d10f1f03d21____::_1_::dtor$0 @ 0x18022371A (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_18022371A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180147344 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_f5bad7708cd3d32b6b139f2523e4a8ac_::__lambda_f5bad7708cd3d32b6b139f2523e4a8ac_(__int64 a1)
{
  volatile signed __int32 **v1; // rcx
  __int64 result; // rax

  v1 = (volatile signed __int32 **)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v1);
  return result;
}
