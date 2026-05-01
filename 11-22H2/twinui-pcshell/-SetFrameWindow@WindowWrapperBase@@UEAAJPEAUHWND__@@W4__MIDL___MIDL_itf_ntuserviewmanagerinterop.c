/*
 * XREFs of ?SetFrameWindow@WindowWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x1804EC640
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d1defa04705501fb10e3f00eb63c4368___ @ 0x1804E50B4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d1defa04705501fb10e3f00eb63c4368.c)
 */

__int64 __fastcall WindowWrapperBase::SetFrameWindow(__int64 a1, __int64 a2, int a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  v8[0] = a1 - 56;
  v8[1] = &v10;
  v8[2] = &v11;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d1defa04705501fb10e3f00eb63c4368___(
         v4,
         CurrentThreadId,
         (__int64)v8);
  try
  {
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9FA,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v8[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9FE,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
