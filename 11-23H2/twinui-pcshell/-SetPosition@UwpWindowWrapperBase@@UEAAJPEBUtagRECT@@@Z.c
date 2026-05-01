/*
 * XREFs of ?SetPosition@UwpWindowWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x180175C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d40afe67ebe042e5405d793f77283674___ @ 0x180175CE0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d40afe67ebe042e5405d793f77283674.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetPosition(UwpWindowWrapperBase *this, const struct tagRECT *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const struct tagRECT *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6[0] = &v8;
  v6[1] = this;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d40afe67ebe042e5405d793f77283674___(
         v3,
         CurrentThreadId,
         v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE4,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  return 0LL;
}
