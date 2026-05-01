/*
 * XREFs of ?SetActivationTimeoutPolicy@UwpWindowWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180416D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a72ebfcf7099f0b43c2e0b8ea9c919f5___ @ 0x1804102D8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a72ebfcf7099f0b43c2e0b8ea9c919f5.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetActivationTimeoutPolicy(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)v7 = a1 - 32;
  *(_QWORD *)&v7[2] = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a72ebfcf7099f0b43c2e0b8ea9c919f5___(
         v3,
         CurrentThreadId,
         v7);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9B3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v7[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9B7,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
