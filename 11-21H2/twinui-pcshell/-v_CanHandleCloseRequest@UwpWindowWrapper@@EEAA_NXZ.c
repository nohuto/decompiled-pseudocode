/*
 * XREFs of ?v_CanHandleCloseRequest@UwpWindowWrapper@@EEAA_NXZ @ 0x180406530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c3da97c916334404fe04f41838399863___ @ 0x180404EB4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c3da97c916334404fe04f41838399863.c)
 */

char __fastcall UwpWindowWrapper::v_CanHandleCloseRequest(UwpWindowWrapper *this)
{
  char v2; // di
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 232LL))(*((_QWORD *)this + 34));
  v2 = 0;
  v9 = 0;
  *(_QWORD *)v7 = (char *)this - 8;
  *(_QWORD *)&v7[2] = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c3da97c916334404fe04f41838399863___(
         v4,
         CurrentThreadId,
         v7);
  if ( v5 >= 0 )
    return v9 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x79,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
    (const char *)(unsigned int)v5);
  return v2;
}
