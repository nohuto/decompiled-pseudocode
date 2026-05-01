/*
 * XREFs of ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180512840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_HandleLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@0W4FinalizeLayoutFlags@@@Z @ 0x1806155A8 (-_HandleLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@0W4FinalizeLay.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180615D0C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositionerOperation::ChangeLayoutEnvironment(
        TabletModePositionerOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _BYTE v10[40]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = CAppLayoutOperation::_VerifyAndPrepareLayout((TabletModePositionerOperation *)((char *)this - 152), 0LL, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 246LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this - 15) + 24LL))(*((_QWORD *)this - 15), v10);
  v6 = CAppLayoutOperation::_HandleLayoutEnvChange((char *)this - 152, v10, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 251LL;
    goto LABEL_5;
  }
  *((_DWORD *)this - 18) = 33;
  v7 = 0;
LABEL_7:
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v7;
}
