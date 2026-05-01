/*
 * XREFs of CempListEntryIsNull @ 0x18001E5BC
 * Callers:
 *     ?RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013E7C (-RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z @ 0x180013F44 (-RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempListEntryIsNull(_QWORD *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !*a1 || !a1[1] )
    return 1;
  return v1;
}
