/*
 * XREFs of ?RmpProcEntryDereference@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x18001407C
 * Callers:
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RmpProcEntryDereference(struct _RM_PROC_ENTRY *a1)
{
  CemRcObjectDereference(a1);
}
