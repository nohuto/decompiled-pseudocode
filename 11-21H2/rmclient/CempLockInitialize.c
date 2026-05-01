/*
 * XREFs of CempLockInitialize @ 0x18001E678
 * Callers:
 *     ?RmpProcContextInitialize@@YAXP6A?AW4_RM_PROC_CALLBACK_RESULT@@PEAXW4_RM_PROC_REQUEST@@K@ZPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x1800134A4 (-RmpProcContextInitialize@@YAXP6A-AW4_RM_PROC_CALLBACK_RESULT@@PEAXW4_RM_PROC_REQUEST@@K@ZPEAU_R.c)
 *     ?RmpProcEntryInitialize@@YAXKPEAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_ENTRY@@@Z @ 0x1800143B4 (-RmpProcEntryInitialize@@YAXKPEAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockInitialize(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  result = RtlInitializeSRWLock(a1);
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
