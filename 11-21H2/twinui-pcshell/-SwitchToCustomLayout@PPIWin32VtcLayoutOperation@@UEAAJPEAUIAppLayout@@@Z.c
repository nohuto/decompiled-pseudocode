/*
 * XREFs of ?SwitchToCustomLayout@PPIWin32VtcLayoutOperation@@UEAAJPEAUIAppLayout@@@Z @ 0x180515E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1805163DC (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::SwitchToCustomLayout(
        PPIWin32VtcLayoutOperation *this,
        struct IAppLayout *a2)
{
  char *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // r14d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)this - 176;
  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176));
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  v7 = (*(__int64 (__fastcall **)(char *, struct IAppLayout *))(*(_QWORD *)v4 + 48LL))(v4, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 218LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  *((_DWORD *)this - 18) = 1;
  v7 = PPIWin32VtcLayoutOperation::_FinalizeLayout(v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 220LL;
    goto LABEL_5;
  }
  v8 = 0;
LABEL_7:
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v8;
}
