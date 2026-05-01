/*
 * XREFs of ?SetFocusState@UwpWindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180417230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_57d92ceadcfe0a87844f58d6472010c3___ @ 0x18040FB94 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_57d92ceadcfe0a87844f58d6472010c3.c)
 */

void __fastcall UwpWindowWrapperBase::SetFocusState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 224LL))(*(_QWORD *)(a1 + 256));
  *(_QWORD *)v6 = &v8;
  *(_QWORD *)&v6[2] = a1 - 16;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_57d92ceadcfe0a87844f58d6472010c3___(
         v4,
         CurrentThreadId,
         v6);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x81B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v5);
}
