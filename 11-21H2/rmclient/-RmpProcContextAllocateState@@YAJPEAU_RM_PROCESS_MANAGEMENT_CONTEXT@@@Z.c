/*
 * XREFs of ?RmpProcContextAllocateState@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180012CF0
 * Callers:
 *     RmConnectProcessManager @ 0x18001B590 (RmConnectProcessManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpProcContextAllocateState(struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1)
{
  __int64 result; // rax

  result = TpAllocWork((char *)a1 + 64, RmpProcContextEmptyWorker, a1, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
