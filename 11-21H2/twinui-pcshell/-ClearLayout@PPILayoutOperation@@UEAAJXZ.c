/*
 * XREFs of ?ClearLayout@PPILayoutOperation@@UEAAJXZ @ 0x180513F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180615D0C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPILayoutOperation::ClearLayout(PPILayoutOperation *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebp
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (PPILayoutOperation *)176));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v4 = CAppLayoutOperation::_VerifyAndPrepareLayout((PPILayoutOperation *)((char *)this - 152), 0LL, 0);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 264LL))(*((_QWORD *)this - 14), 7LL);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this - 14) + 240LL))(
      *((_QWORD *)this - 14),
      1LL,
      0LL);
    *((_DWORD *)this - 18) = 1;
    v4 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, 2LL);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_6;
    v6 = 123LL;
  }
  else
  {
    v6 = 119LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
    (const char *)(unsigned int)v4);
LABEL_6:
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
