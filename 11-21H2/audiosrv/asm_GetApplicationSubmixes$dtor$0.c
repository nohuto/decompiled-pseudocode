/*
 * XREFs of asm_GetApplicationSubmixes$dtor$0 @ 0x1801093B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall asm_GetApplicationSubmixes_dtor_0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return CWatchdogTimer<1>::~CWatchdogTimer<1>(a2 + 56, a2, a3, a4);
}
