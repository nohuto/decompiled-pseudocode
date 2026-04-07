/*
 * XREFs of ?Release@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAKXZ @ 0x180009E30
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800070A0 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  volatile __int64 *v2; // rdi
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (volatile __int64 *)(a1 + 32);
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v3 = winrt::impl::weak_ref<1,1>::decrement_strong(2 * v1);
LABEL_4:
  if ( !v3 )
  {
    _InterlockedExchange64(v2 + 1, 1LL);
    if ( v2 )
      (*(void (__fastcall **)(volatile __int64 *, __int64))(*v2 + 8))(v2, 1LL);
  }
  return v3;
}
