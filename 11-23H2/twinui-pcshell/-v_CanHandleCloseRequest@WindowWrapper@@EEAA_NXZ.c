/*
 * XREFs of ?v_CanHandleCloseRequest@WindowWrapper@@EEAA_NXZ @ 0x1804DDDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_623346ff11720fb1df0604e48f92c4da___ @ 0x1804DC63C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_623346ff11720fb1df0604e48f92c4da.c)
 */

char __fastcall WindowWrapper::v_CanHandleCloseRequest(WindowWrapper *this)
{
  char v2; // di
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  v2 = 0;
  v9 = 0;
  *(_QWORD *)v7 = (char *)this - 8;
  *(_QWORD *)&v7[2] = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_623346ff11720fb1df0604e48f92c4da___(
         v4,
         CurrentThreadId,
         v7);
  if ( v5 >= 0 )
    return v9 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x77,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
    (const char *)(unsigned int)v5);
  return v2;
}
