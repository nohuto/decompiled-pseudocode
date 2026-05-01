/*
 * XREFs of ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1800294D0
 * Callers:
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x180029070 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 *     ?MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ @ 0x18049AB40 (-MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ForegroundStaging::SetActive(ForegroundStaging *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)this;
  if ( !v1 )
  {
    v2 = -2147019873;
    v4 = 26LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"pcshell\\TwinUI\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
      (const char *)v2,
      v5);
    return v2;
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  if ( (v2 & 0x80000000) != 0 )
  {
    v4 = 27LL;
    goto LABEL_6;
  }
  return v2;
}
