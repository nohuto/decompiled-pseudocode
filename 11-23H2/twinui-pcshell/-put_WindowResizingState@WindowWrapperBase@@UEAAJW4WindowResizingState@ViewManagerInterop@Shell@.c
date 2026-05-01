/*
 * XREFs of ?put_WindowResizingState@WindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804EF2A0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5___ @ 0x1802D8E84 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5.c)
 */

__int64 __fastcall WindowWrapperBase::put_WindowResizingState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)&v5 = a1 - 8;
  *((_QWORD *)&v5 + 1) = &v6;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5___(
           v3,
           CurrentThreadId,
           &v5);
}
