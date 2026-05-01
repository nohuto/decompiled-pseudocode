/*
 * XREFs of ?TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1800301F0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_69bbfac175da7369ff64947ef3e1264d___ @ 0x180030244 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_69bbfac175da7369ff64947ef3e1264d.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::TerminateApp(WindowEventDispatcher *this, __int64 a2)
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
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_69bbfac175da7369ff64947ef3e1264d___(
         v3,
         CurrentThreadId,
         v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x797,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  return 0LL;
}
