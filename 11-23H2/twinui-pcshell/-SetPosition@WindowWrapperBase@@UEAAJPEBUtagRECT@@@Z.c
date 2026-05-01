/*
 * XREFs of ?SetPosition@WindowWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x1804EC9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_532033d5f85a25734111ea1682d58830___ @ 0x1804E4034 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_532033d5f85a25734111ea1682d58830.c)
 */

__int64 __fastcall WindowWrapperBase::SetPosition(WindowWrapperBase *this, const struct tagRECT *a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const struct tagRECT *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)&v7 = &v9;
  *((_QWORD *)&v7 + 1) = this;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_532033d5f85a25734111ea1682d58830___(
         v3,
         CurrentThreadId,
         &v7);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEB,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
