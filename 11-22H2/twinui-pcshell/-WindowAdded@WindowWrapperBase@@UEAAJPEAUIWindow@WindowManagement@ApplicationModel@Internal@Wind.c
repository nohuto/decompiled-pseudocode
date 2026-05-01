/*
 * XREFs of ?WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@UWindowId@3456@W4WindowCreatedType@@@Z @ 0x1804ED940
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1be1e40747901402039ac9a9af83119a___ @ 0x1804E3BB0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1be1e40747901402039ac9a9af83119a.c)
 */

__int64 __fastcall WindowWrapperBase::WindowAdded(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  int *v12; // [rsp+30h] [rbp-18h]
  int *v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF
  int v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v5 = *(_QWORD *)(a1 + 264);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5);
    *(_QWORD *)&v11 = a1 - 16;
    *((_QWORD *)&v11 + 1) = &v15;
    v12 = &v16;
    v13 = &v17;
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1be1e40747901402039ac9a9af83119a___(
           v7,
           CurrentThreadId,
           &v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x648,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x64C,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v9);
  }
  return result;
}
