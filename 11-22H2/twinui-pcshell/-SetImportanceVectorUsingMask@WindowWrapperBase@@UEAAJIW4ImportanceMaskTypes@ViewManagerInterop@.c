/*
 * XREFs of ?SetImportanceVectorUsingMask@WindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804EC760
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5047f3dcb5456b18a6d7c92307eccb63___ @ 0x1804E3F54 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5047f3dcb5456b18a6d7c92307eccb63.c)
 */

__int64 __fastcall WindowWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  v8[0] = &v10;
  v8[1] = a1 - 32;
  v8[2] = &v11;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5047f3dcb5456b18a6d7c92307eccb63___(
         v4,
         CurrentThreadId,
         (__int64)v8);
  try
  {
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8D8,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v8[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8DC,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
