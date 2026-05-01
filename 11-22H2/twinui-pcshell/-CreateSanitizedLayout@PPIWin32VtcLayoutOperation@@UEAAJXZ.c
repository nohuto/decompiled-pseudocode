/*
 * XREFs of ?CreateSanitizedLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CD5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::CreateSanitizedLayout(PPIWin32VtcLayoutOperation *this)
{
  char *v2; // r14
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this - 176;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, 0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 264LL))(*((_QWORD *)this - 14), 7LL);
    *((_DWORD *)this - 18) = 9;
    v5 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v2 + 192LL))(v2, 0LL);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_6;
    v7 = 144LL;
  }
  else
  {
    v7 = 137LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)v5);
LABEL_6:
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return v6;
}
