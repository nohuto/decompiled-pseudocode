/*
 * XREFs of ?FinalizeLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CD950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805CEA6C (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::FinalizeLayout(PPIWin32VtcLayoutOperation *this)
{
  char *v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebp
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (char *)this - 176;
  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v1 + 48LL))(v1, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 208LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_7;
  }
  v4 = PPIWin32VtcLayoutOperation::_FinalizeLayout(v1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 210LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
