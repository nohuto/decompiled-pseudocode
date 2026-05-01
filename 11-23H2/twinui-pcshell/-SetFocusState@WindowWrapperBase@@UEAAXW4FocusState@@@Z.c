/*
 * XREFs of ?SetFocusState@WindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1804EC5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b9e0741b857ac1aa6444f90fae860622___ @ 0x1804E4B38 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_b9e0741b857ac1aa6444f90fae860622.c)
 */

void __fastcall WindowWrapperBase::SetFocusState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 216LL))(*(_QWORD *)(a1 + 264));
  *(_QWORD *)v6 = &v8;
  *(_QWORD *)&v6[2] = a1 - 16;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b9e0741b857ac1aa6444f90fae860622___(
         v4,
         CurrentThreadId,
         v6);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x798,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5);
}
