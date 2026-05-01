/*
 * XREFs of ?WindowAdded@UwpWindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@UWindowId@3456@W4WindowCreatedType@@@Z @ 0x18019D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e1e333736bfc613a027e396b29f06629___ @ 0x1801F7250 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e1e333736bfc613a027e396b29f06629.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::WindowAdded(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-20h]
  int *v13; // [rsp+30h] [rbp-18h]
  int *v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v5 = *(_QWORD *)(a1 + 264);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 224LL))(v5);
    *(_QWORD *)v11 = a1 - 16;
    v12 = &v16;
    v13 = &v17;
    v14 = &v18;
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e1e333736bfc613a027e396b29f06629___(
           v7,
           CurrentThreadId,
           v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x661,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        v11[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x665,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v9);
  }
  return result;
}
