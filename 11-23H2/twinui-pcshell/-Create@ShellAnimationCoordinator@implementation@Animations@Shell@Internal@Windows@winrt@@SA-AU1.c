/*
 * XREFs of ?Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@XZ @ 0x1801819F8
 * Callers:
 *     ??0TouchEdgeGestureManager@@QEAA@XZ @ 0x180092CDC (--0TouchEdgeGestureManager@@QEAA@XZ.c)
 * Callees:
 *     ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180181A8C (-InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Int.c)
 *     ??$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUShellAnimationCoordinator@Animations@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x180181B34 (--$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456.c)
 *     ?unconditional_release_ref@?$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180181CD0 (-unconditional_release_ref@-$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::Create(
        _OWORD *a1)
{
  _OWORD *v2; // rbx
  _OWORD *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v2 = operator new(0x20uLL);
  *v2 = 0LL;
  v2[1] = 0LL;
  *((_QWORD *)v2 + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)v2 + 1) = 1LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *(_QWORD *)v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::`vftable';
  v4 = v2;
  winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::InitializeEdgyRelationshipManager((winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *)v2);
  winrt::impl::as<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,0>(
    a1,
    v2);
  winrt::com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::unconditional_release_ref(&v4);
  return a1;
}
