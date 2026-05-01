/*
 * XREFs of ??0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AF994
 * Callers:
 *     ??$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B2388 (--$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 * Callees:
 *     ??0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AF4D8 (--0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker *__fastcall winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::WindowsTracker(
        winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker *this)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // [rsp+38h] [rbp+10h]

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::`vftable';
  v2 = (_QWORD *)((char *)this + 32);
  v4 = operator new(0x80uLL);
  memset_0(v4, 0, 0x80uLL);
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::WindowsTracker((winrt::Windows::Internal::Shell::implementation::WindowsTracker *)v4);
  *v4 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::`vftable';
  *v2 = v4 + 2;
  return this;
}
