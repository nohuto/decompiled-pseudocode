/*
 * XREFs of ?get@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA?AUITransitionState@Transitions@Udwm@2@XZ @ 0x1800F85F4
 * Callers:
 *     _lambda_c60948a4075e9d25cd4406f3dd63722d_::operator() @ 0x1800F7A14 (_lambda_c60948a4075e9d25cd4406f3dd63722d_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionState>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
