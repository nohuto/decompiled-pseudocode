/*
 * XREFs of ?Release@?$produce_base@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAIXZ @ 0x18004F590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18006ED68 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler,void>::Release(
        __int64 a1)
{
  volatile signed __int64 *v1; // rdi
  signed __int64 v2; // rax
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  if ( a1 )
    v1 = (volatile signed __int64 *)(a1 - 16);
  else
    v1 = 0LL;
  v2 = *((_QWORD *)v1 + 1);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64(v1 + 1, v2 - 1, v2);
    if ( v4 == v2 )
      goto LABEL_6;
  }
  v3 = winrt::impl::weak_ref<1,1>::decrement_strong(2 * v2);
LABEL_6:
  if ( !v3 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v3;
}
