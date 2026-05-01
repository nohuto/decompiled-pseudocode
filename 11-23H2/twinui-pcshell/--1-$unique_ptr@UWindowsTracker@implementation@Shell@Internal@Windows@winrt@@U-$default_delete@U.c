/*
 * XREFs of ??1?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180725410
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release_::_3_::_parameters_::__parameters_ @ 0x18027C7B8 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release_--__ea_18027C7B8.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x18027D060 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 *     ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18027D230 (-final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AUfire_and_forget@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
