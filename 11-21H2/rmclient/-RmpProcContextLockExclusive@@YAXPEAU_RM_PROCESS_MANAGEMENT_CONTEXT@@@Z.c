/*
 * XREFs of ?RmpProcContextLockExclusive@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013518
 * Callers:
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpProcContextLockExclusive(struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1, __int64 a2, __int64 a3)
{
  CempLockAcquireExclusive((char *)a1 + 48, a2, a3);
}
