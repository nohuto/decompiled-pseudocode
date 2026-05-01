/*
 * XREFs of ?OnUwpWindowAdded@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@3456@@Z @ 0x180402580
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e93f027ec168950fe55b7b43d7510c8a___ @ 0x1803FF2B0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e93f027ec168950fe55b7b43d7510c8a.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowAdded(__int64 a1, __int64 a2, int a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = a1;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e93f027ec168950fe55b7b43d7510c8a___(
           v4,
           CurrentThreadId,
           &v6);
}
