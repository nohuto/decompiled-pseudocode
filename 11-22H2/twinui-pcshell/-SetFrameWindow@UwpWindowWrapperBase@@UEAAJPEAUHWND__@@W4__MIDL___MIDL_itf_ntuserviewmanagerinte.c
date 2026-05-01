/*
 * XREFs of ?SetFrameWindow@UwpWindowWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x180052A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f2c26bad65fa2b8f49fea49bca5a1348___ @ 0x1801F7410 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f2c26bad65fa2b8f49fea49bca5a1348.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetFrameWindow(__int64 a1, __int64 a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v9[0] = a1 - 64;
  v9[1] = &v12;
  v9[2] = &v13;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f2c26bad65fa2b8f49fea49bca5a1348___(
         v4,
         CurrentThreadId,
         v9);
  if ( v5 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA9C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v9[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v8 + 80) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0xAA0,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v7);
      return v11;
    }
  }
  return 0LL;
}
