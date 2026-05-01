/*
 * XREFs of ?put_WindowResizingState@UwpWindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180065DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd11dfcdb88fd6b586045c63ee127ae3___ @ 0x1801F7170 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dd11dfcdb88fd6b586045c63ee127ae3.c)
 */

__int64 __fastcall UwpWindowWrapperBase::put_WindowResizingState(__int64 a1, int a2)
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
  *(_QWORD *)v8 = a1 - 8;
  v9 = &v12;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd11dfcdb88fd6b586045c63ee127ae3___(
         v3,
         CurrentThreadId,
         v8);
  if ( v4 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x46B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v8[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v7 + 64) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x46F,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v6);
      return v11;
    }
  }
  return 0LL;
}
