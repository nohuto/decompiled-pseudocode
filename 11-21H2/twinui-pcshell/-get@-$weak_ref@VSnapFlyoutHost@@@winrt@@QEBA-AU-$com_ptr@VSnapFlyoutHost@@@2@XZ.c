/*
 * XREFs of ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1805B1DE4
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::InternalHideAsync$_ResumeCoro$1 @ 0x1801C06A0 (SnapFlyoutHost--InternalHideAsync$_ResumeCoro$1.c)
 *     _lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_::operator() @ 0x1805AEEDC (_lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_--operator().c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_b00624e5fb0e02667b9366ca0e3bf890_@@@impl@winrt@@UEAAHPEAX@Z @ 0x1805AF8C0 (-Invoke@-$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@_ea_1805AF8C0.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1bc1847c493029b672944d3b25fbdd02___::Invoke @ 0x1805AF970 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_1bc1847c493.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<SnapFlyoutHost>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( v2 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<IInspectable>,
      &v6);
    if ( v6 )
      v3 = v6 - 16;
    *a2 = v3;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
