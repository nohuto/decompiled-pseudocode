/*
 * XREFs of _lambda_f991981efcc52a1e7ce38201fb3a674d_::operator() @ 0x18016E0F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f991981efcc52a1e7ce38201fb3a674d___::Run @ 0x18016E0D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f991981efcc52a1e7ce38201fb3a674d___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWindowWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18016E188 (-StartWindowWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f991981efcc52a1e7ce38201fb3a674d_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1 + 32;
  AcquireSRWLockExclusive(v2);
  UwpWindowManagerBridge::StartWindowWatcherHelper(*a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)(*a1)[22].Ptr + 168LL))((*a1)[22].Ptr);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2BD,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return 0LL;
}
