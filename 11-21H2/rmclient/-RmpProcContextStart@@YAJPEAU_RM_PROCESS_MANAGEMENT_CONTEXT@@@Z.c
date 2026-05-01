/*
 * XREFs of ?RmpProcContextStart@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013CF8
 * Callers:
 *     RmConnectProcessManager @ 0x18001B590 (RmConnectProcessManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpProcContextStart(struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1)
{
  __int64 result; // rax
  int v2; // [rsp+40h] [rbp-8h]

  result = RtlSubscribeWnfStateChangeNotification(
             (char *)a1 + 72,
             WNF_RM_MEMORY_MONITOR_USAGE_METRICS,
             0LL,
             RmpProcContextMemoryStateChangedCallback,
             a1,
             0LL,
             0,
             0,
             v2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
