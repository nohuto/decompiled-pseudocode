/*
 * XREFs of ?Consolidate@UwpWindowWrapperBase@@UEAAJW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180068850
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ccd2ac028e59279914bb403dae032d43___ @ 0x1800688A4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ccd2ac028e59279914bb403dae032d43.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::Consolidate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)v6 = a1 - 8;
  v7 = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ccd2ac028e59279914bb403dae032d43___(
         v3,
         CurrentThreadId,
         v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2CD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  return 0LL;
}
