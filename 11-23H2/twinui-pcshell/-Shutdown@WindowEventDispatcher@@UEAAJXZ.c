/*
 * XREFs of ?Shutdown@WindowEventDispatcher@@UEAAJXZ @ 0x1804C9FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7206e95aa8b06e05a5361a090cf4be35___ @ 0x1801F2F74 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7206e95aa8b06e05a5361a090cf4be35.c)
 */

__int64 __fastcall WindowEventDispatcher::Shutdown(WindowEventDispatcher *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v2; // ecx
  int v3; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (char *)this - 72;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7206e95aa8b06e05a5361a090cf4be35___(
         v2,
         CurrentThreadId,
         &v9);
  if ( v3 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x844,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v3,
        v7);
    }
    catch ( ... )
    {
      *(_DWORD *)(v6 + 48) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x847,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                               v5);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
