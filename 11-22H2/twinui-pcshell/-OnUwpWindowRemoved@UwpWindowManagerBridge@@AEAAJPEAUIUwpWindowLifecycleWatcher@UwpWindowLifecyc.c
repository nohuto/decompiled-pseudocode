/*
 * XREFs of ?OnUwpWindowRemoved@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextRemovedEventArgs@3456@@Z @ 0x18018EA00
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fbd0919f36cc4b7416384f679bf84dc8___ @ 0x18018EA3C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_fbd0919f36cc4b7416384f679bf84dc8.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowRemoved(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v6[0] = a1;
  v6[1] = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_fbd0919f36cc4b7416384f679bf84dc8___(
           v4,
           CurrentThreadId,
           v6);
}
