/*
 * XREFs of ?UnboostPriority@UwpWindowWrapperBase@@UEAAJXZ @ 0x180198EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8fce8fe44b6886d54791b41aace8df6d___ @ 0x1801F6990 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8fce8fe44b6886d54791b41aace8df6d.c)
 */

__int64 __fastcall UwpWindowWrapperBase::UnboostPriority(UwpWindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (char *)this - 40;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8fce8fe44b6886d54791b41aace8df6d___(
         v2,
         CurrentThreadId,
         &v9);
  if ( v3 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x905,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v7);
    }
    catch ( ... )
    {
      *(_DWORD *)(v6 + 48) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x909,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v5);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
