/*
 * XREFs of ?PerformSnapOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@@Z @ 0x180515890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::PerformSnapOperation(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2)
{
  char *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  int v6; // r14d
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)this - 176;
  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176));
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  if ( (*(unsigned __int8 (__fastcall **)(char *, struct IApplicationView *))(*(_QWORD *)v4 + 168LL))(v4, a2)
    && (v7 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)this + 88LL))(this), v8 = v7, v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    v8 = 0;
  }
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v8;
}
