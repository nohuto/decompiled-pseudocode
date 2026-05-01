/*
 * XREFs of ?TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1804CAE50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_69bbfac175da7369ff64947ef3e1264d___ @ 0x1801F2E94 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_69bbfac175da7369ff64947ef3e1264d.c)
 */

__int64 __fastcall WindowEventDispatcher::TerminateApp(WindowEventDispatcher *this, __int64 a2)
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
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_69bbfac175da7369ff64947ef3e1264d___(
         v3,
         CurrentThreadId,
         &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x797,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
