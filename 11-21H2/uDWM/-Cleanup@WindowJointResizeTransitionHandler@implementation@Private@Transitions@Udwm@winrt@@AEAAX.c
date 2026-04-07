/*
 * XREFs of ?Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7C48
 * Callers:
 *     ??1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F79BC (--1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Cancel@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F7BF0 (-Cancel@-$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@wi.c)
 *     ?PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F8044 (-PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x180013F74 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Clear@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBAXXZ @ 0x1800F7CA0 (-Clear@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::Cleanup(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Clear();
    *((_DWORD *)this + 10) = 0;
  }
  v2 = (winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)((char *)this + 24);
  if ( *(_QWORD *)v2 )
  {
    winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(v2);
    if ( v2 != (winrt::Windows::Foundation::IUnknown *)&v3 )
    {
      if ( *(_QWORD *)v2 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
      *(_QWORD *)v2 = 0LL;
    }
  }
}
