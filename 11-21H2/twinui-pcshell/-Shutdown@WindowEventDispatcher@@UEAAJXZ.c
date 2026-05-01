/*
 * XREFs of ?Shutdown@WindowEventDispatcher@@UEAAJXZ @ 0x1801715D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7206e95aa8b06e05a5361a090cf4be35___ @ 0x180171618 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7206e95aa8b06e05a5361a090cf4be35.c)
 */

__int64 __fastcall WindowEventDispatcher::Shutdown(WindowEventDispatcher *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)this - 72;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7206e95aa8b06e05a5361a090cf4be35___(
         v2,
         CurrentThreadId,
         &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x844,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return 0LL;
}
