/*
 * XREFs of ?get_ProcessId@UwpWindowWrapperBase@@UEAAJPEAI@Z @ 0x180419930
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_64e43acfcaac90edb13840faf2b625e2___ @ 0x18040FD5C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_64e43acfcaac90edb13840faf2b625e2.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ProcessId(UwpWindowWrapperBase *this, unsigned int *a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)&v7 = &v9;
  *((_QWORD *)&v7 + 1) = (char *)this - 8;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_64e43acfcaac90edb13840faf2b625e2___(
         v3,
         CurrentThreadId,
         &v7);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x422,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x426,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
