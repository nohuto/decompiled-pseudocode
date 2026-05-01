/*
 * XREFs of ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180181A8C
 * Callers:
 *     ?Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@XZ @ 0x1801819F8 (-Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA-AU1.c)
 * Callees:
 *     ?Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@AEBUShellAnimationCoordinator@34567@@Z @ 0x180093F24 (-Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUShellAnimationCoordinator@Animations@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x180181B34 (--$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456.c)
 *     ?unconditional_release_ref@?$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180181CD0 (-unconditional_release_ref@-$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::InitializeEdgyRelationshipManager(
        winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *this)
{
  winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *v2; // rbx
  signed __int64 v3; // rdx
  bool v4; // zf
  signed __int64 v5; // rax
  winrt::Windows::Foundation::IUnknown *v6; // rax
  winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *v7; // [rsp+40h] [rbp+20h] BYREF
  __int64 v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  if ( this )
  {
    v7 = this;
    v3 = *((_QWORD *)this + 1);
    while ( v3 >= 0 )
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 1, v3 + 1, v3);
      v4 = v3 == v5;
      v3 = v5;
      if ( v4 )
        goto LABEL_5;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v3 + 24), 1u);
LABEL_5:
    v2 = v7;
  }
  winrt::impl::as<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,0>(
    &v8,
    v2);
  v6 = (winrt::Windows::Foundation::IUnknown *)winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::Create(
                                                 (__int64)&v9,
                                                 (__int64)&v8);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *)((char *)this + 24),
    v6);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  if ( v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::unconditional_release_ref(&v7);
}
