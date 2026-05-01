/*
 * XREFs of ?TerminateApp@UwpWindowEventDispatcher@@UEAAJ_K@Z @ 0x1803F2570
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c0f08dfecf23d4c97e456f7dc771f40c___ @ 0x1803E99E8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c0f08dfecf23d4c97e456f7dc771f40c.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::TerminateApp(UwpWindowEventDispatcher *this, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  *(_QWORD *)&v6 = (char *)this - 24;
  *((_QWORD *)&v6 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c0f08dfecf23d4c97e456f7dc771f40c___(
         v3,
         CurrentThreadId,
         &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x86F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
