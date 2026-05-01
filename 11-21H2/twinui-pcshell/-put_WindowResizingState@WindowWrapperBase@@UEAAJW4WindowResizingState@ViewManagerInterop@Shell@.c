/*
 * XREFs of ?put_WindowResizingState@WindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180144880
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5___ @ 0x1801448C0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5.c)
 */

__int64 __fastcall WindowWrapperBase::put_WindowResizingState(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v5[0] = a1 - 8;
  v5[1] = &v6;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f64966f8cf2f955615770413beca1be5___(
           v3,
           CurrentThreadId,
           v5);
}
