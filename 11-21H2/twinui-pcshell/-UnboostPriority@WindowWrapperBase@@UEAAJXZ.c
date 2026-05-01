/*
 * XREFs of ?UnboostPriority@WindowWrapperBase@@UEAAJXZ @ 0x18013E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16fabc5b2bb972ab3fdf76682bec0a78___ @ 0x18013E538 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_16fabc5b2bb972ab3fdf76682bec0a78.c)
 */

__int64 __fastcall WindowWrapperBase::UnboostPriority(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)this - 32;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16fabc5b2bb972ab3fdf76682bec0a78___(
         v2,
         CurrentThreadId,
         &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x855,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return 0LL;
}
