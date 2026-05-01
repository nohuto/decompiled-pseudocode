/*
 * XREFs of ?BoostPriority@WindowWrapperBase@@UEAAJXZ @ 0x1804E9320
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3b41c4f33ad0fdc6aff0256cda85c716___ @ 0x1804E3D7C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_3b41c4f33ad0fdc6aff0256cda85c716.c)
 */

__int64 __fastcall WindowWrapperBase::BoostPriority(WindowWrapperBase *this)
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
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_3b41c4f33ad0fdc6aff0256cda85c716___(
         v2,
         CurrentThreadId,
         &v8);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x82F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x833,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
