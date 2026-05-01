/*
 * XREFs of ?TerminateApp@UwpWindowEventDispatcher@@UEAAJ_K@Z @ 0x18006D290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_827f14b05dc17363801a5942fbc6a7e9___ @ 0x1801F46A4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_827f14b05dc17363801a5942fbc6a7e9.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::TerminateApp(UwpWindowEventDispatcher *this, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6[0] = (char *)this - 24;
  v6[1] = &v8;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_827f14b05dc17363801a5942fbc6a7e9___(
         v3,
         CurrentThreadId,
         v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8A8,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  return 0LL;
}
