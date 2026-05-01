/*
 * XREFs of ?await_resume@?$notify_awaiter@AEAUDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180657480
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x18021EBA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall winrt::impl::notify_awaiter<winrt::Windows::System::DispatcherQueue &>::await_resume(__int64 a1)
{
  if ( winrt_resume_handler )
    winrt_resume_handler();
  return *(_BYTE *)(a1 + 12);
}
