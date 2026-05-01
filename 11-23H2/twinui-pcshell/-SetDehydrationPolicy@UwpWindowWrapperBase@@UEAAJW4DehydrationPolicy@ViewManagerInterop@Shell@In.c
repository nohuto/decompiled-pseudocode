/*
 * XREFs of ?SetDehydrationPolicy@UwpWindowWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801AE160
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7324f344b2cabb269f7e3da98a9a310f___ @ 0x1801F67D0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7324f344b2cabb269f7e3da98a9a310f.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetDehydrationPolicy(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  const char *v6; // r9
  __int64 v7; // rdx
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  int *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+8h]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  *(_QWORD *)v8 = a1 - 40;
  v9 = &v12;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7324f344b2cabb269f7e3da98a9a310f___(
         v3,
         CurrentThreadId,
         v8);
  if ( v4 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9AC,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v8[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v7 + 64) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x9B0,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v6);
      return v11;
    }
  }
  return 0LL;
}
