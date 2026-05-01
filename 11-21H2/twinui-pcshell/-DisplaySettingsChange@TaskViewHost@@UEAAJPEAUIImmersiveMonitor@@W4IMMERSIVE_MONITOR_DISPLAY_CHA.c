/*
 * XREFs of ?DisplaySettingsChange@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1805FE480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::DisplaySettingsChange(__int64 a1)
{
  __int64 v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // esi
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1 - 8;
  v2 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 8));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17F,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
      (const char *)(unsigned int)v4);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
