/*
 * XREFs of ?UnboostPriority@WindowWrapperBase@@UEAAJXZ @ 0x1804ED700
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d95836077fc497a3191a50b6c6baa704___ @ 0x1804E5274 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d95836077fc497a3191a50b6c6baa704.c)
 */

__int64 __fastcall WindowWrapperBase::UnboostPriority(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v2; // ecx
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (char *)this - 32;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d95836077fc497a3191a50b6c6baa704___(
         v2,
         CurrentThreadId,
         &v8);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x85E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x862,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
