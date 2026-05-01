/*
 * XREFs of ??0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027DD28
 * Callers:
 *     ??$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18027DB8C (--$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??0ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027DDF8 (--0ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *__fastcall winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker::ProcessTracker(
        winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *this)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // [rsp+38h] [rbp+10h]

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>::`vftable';
  v2 = (_QWORD *)((char *)this + 32);
  v4 = operator new(0x78uLL);
  memset_0(v4, 0, 0x78uLL);
  winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessTracker((winrt::Windows::Internal::Shell::implementation::ProcessTracker *)v4);
  *v4 = &winrt::Windows::Internal::Shell::implementation::ProcessTracker::`vftable';
  *v2 = v4 + 2;
  return this;
}
