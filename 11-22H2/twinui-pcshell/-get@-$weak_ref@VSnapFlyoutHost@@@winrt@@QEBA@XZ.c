/*
 * XREFs of ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180227620 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_057b330fc7f4aad09d5892332e220aec___::Invoke @ 0x180227A10 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180227A10.c)
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180228430 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180228800 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 *     _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x18067A258 (_lambda_1e80c37ddcde987ca8d07444e2bbbfce_--operator().c)
 *     _lambda_89d43c20f0f7bb0e860cd8602b20fbb7_::operator() @ 0x18067A394 (_lambda_89d43c20f0f7bb0e860cd8602b20fbb7_--operator().c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_b00624e5fb0e02667b9366ca0e3bf890_@@@impl@winrt@@UEAAHPEAX@Z @ 0x18067B460 (-Invoke@-$delegate@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@_ea_18067B460.c)
 *     ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_4f6f4ae6f6ef7d80e35ad6540d1880aa_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x18067B510 (-Invoke@-$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
