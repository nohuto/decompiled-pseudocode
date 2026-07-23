/*
 * XREFs of PopExecuteProcessorCallback @ 0x1402BFE90
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueTargetDpc @ 0x1402BFEE0 (PopQueueTargetDpc.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopExecuteProcessorCallback(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v4; // eax

  v4 = (*(__int64 (__fastcall **)(struct _KPRCB *, _QWORD, _QWORD))a2)(
         KeGetCurrentPrcb(),
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a2 + 16));
  if ( v4 < 0 )
    *(_DWORD *)(a2 + 40) = v4;
  return PopQueueTargetDpc(BugCheckParameter2);
}
