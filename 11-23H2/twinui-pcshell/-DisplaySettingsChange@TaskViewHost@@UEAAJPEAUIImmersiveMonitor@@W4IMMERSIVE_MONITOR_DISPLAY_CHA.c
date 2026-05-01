/*
 * XREFs of ?DisplaySettingsChange@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180767880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801BF780 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a1 - 8;
  *(_QWORD *)v10 = (a1 + 16) & -(__int64)(a1 != 8);
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v10, 1);
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL);
  if ( (a3 & 1) != 0 )
  {
    v6 = v5(v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 460LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  else
  {
    v6 = v5(v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 463LL;
      goto LABEL_6;
    }
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v10);
  return v7;
}
