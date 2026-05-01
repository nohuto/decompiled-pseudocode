/*
 * XREFs of ?BoostPriority@WindowWrapperBase@@UEAAJXZ @ 0x18013D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3f29781fb943bbf342d9b9e3defd4b9c___ @ 0x18013D528 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_3f29781fb943bbf342d9b9e3defd4b9c.c)
 */

__int64 __fastcall WindowWrapperBase::BoostPriority(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)this - 32;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3f29781fb943bbf342d9b9e3defd4b9c___(
         v2,
         CurrentThreadId,
         &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x826,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return 0LL;
}
