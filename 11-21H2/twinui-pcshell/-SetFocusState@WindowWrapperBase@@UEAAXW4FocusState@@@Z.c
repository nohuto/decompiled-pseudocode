/*
 * XREFs of ?SetFocusState@WindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1800207B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8979e37c58b8dc799945db356f5e6b48___ @ 0x180020820 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8979e37c58b8dc799945db356f5e6b48.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetFocusState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 216LL))(*(_QWORD *)(a1 + 264));
  *(_QWORD *)v6 = &v9;
  v7 = a1 - 16;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8979e37c58b8dc799945db356f5e6b48___(
         v4,
         CurrentThreadId,
         v6);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x78F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      v6[0]);
}
