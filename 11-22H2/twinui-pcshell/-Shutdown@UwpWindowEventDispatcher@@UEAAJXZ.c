/*
 * XREFs of ?Shutdown@UwpWindowEventDispatcher@@UEAAJXZ @ 0x1801BC7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_15d81d164d20c83d190fd5088d95adb9___ @ 0x1801F44D8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_15d81d164d20c83d190fd5088d95adb9.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::Shutdown(UwpWindowEventDispatcher *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (char *)this - 72;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_15d81d164d20c83d190fd5088d95adb9___(
         v2,
         CurrentThreadId,
         &v9);
  if ( v3 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x961,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v3,
        v7);
    }
    catch ( ... )
    {
      *(_DWORD *)(v6 + 48) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x964,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                               v5);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
