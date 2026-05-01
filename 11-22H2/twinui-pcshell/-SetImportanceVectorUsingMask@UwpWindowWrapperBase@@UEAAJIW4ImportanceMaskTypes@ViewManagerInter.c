/*
 * XREFs of ?SetImportanceVectorUsingMask@UwpWindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180186DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f4e7ecfc19990a45018f7857351c4cad___ @ 0x1801F74F0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f4e7ecfc19990a45018f7857351c4cad.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h]
  int v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v9[0] = &v12;
  v9[1] = a1 - 40;
  v9[2] = &v13;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f4e7ecfc19990a45018f7857351c4cad___(
         v4,
         CurrentThreadId,
         v9);
  if ( v5 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x97F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v9[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v8 + 80) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x983,
                               (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v7);
      return v11;
    }
  }
  return 0LL;
}
