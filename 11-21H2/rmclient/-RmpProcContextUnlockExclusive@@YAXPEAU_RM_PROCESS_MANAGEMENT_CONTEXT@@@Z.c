/*
 * XREFs of ?RmpProcContextUnlockExclusive@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013D48
 * Callers:
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpProcContextUnlockExclusive(struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1)
{
  *((_DWORD *)a1 + 14) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 48);
}
