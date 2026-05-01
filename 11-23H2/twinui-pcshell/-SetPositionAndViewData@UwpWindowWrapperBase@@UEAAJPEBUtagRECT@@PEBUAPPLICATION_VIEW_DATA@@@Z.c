/*
 * XREFs of ?SetPositionAndViewData@UwpWindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004FFC0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c0ad35e7ede92f1b2476312fe194a0a6___ @ 0x18005001C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c0ad35e7ede92f1b2476312fe194a0a6.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetPositionAndViewData(
        UwpWindowWrapperBase *this,
        const struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const struct tagRECT *v9; // [rsp+58h] [rbp+10h] BYREF
  const struct APPLICATION_VIEW_DATA *v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v7[0] = &v9;
  v7[1] = this;
  v7[2] = &v10;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c0ad35e7ede92f1b2476312fe194a0a6___(
         v4,
         CurrentThreadId,
         v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      v7[0]);
  return 0LL;
}
