/*
 * XREFs of ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0017550
 * Callers:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0016698 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     CitProcessCallout @ 0x1C0016FF0 (CitProcessCallout.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017428 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C009DF84 (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C023FCCC (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C023FE54 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpProcessInfoIsValid(struct _CIT_PROCESS *a1)
{
  return (unsigned __int64)a1 - 1 <= 0xCEEE || (unsigned __int64)a1 >= 0xCEF2;
}
