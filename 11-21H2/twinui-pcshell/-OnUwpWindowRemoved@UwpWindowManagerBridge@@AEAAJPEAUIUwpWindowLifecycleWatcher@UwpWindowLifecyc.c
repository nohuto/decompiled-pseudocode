/*
 * XREFs of ?OnUwpWindowRemoved@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextRemovedEventArgs@3456@@Z @ 0x1804026B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d9f0de23305937fc777dff3b473229a8___ @ 0x1803FEF00 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d9f0de23305937fc777dff3b473229a8.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowRemoved(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)&v6 = a1;
  *((_QWORD *)&v6 + 1) = &v7;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d9f0de23305937fc777dff3b473229a8___(
           v4,
           CurrentThreadId,
           &v6);
}
