/*
 * XREFs of ?OnMonitorFrameDismissAnimationCompleted@TaskViewHost@@UEAAJXZ @ 0x180070180
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::OnMonitorFrameDismissAnimationCompleted(TaskViewHost *this)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this - 120;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v3, 1LL);
  if ( ++*((_QWORD *)this + 29) == (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
  {
    v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))(v2);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x216,
        (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
        (const char *)(unsigned int)v5,
        (int)v3);
  }
  else
  {
    v6 = 0;
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return v6;
}
