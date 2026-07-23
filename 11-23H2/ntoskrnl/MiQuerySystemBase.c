/*
 * XREFs of MiQuerySystemBase @ 0x14036F264
 * Callers:
 *     MiInitializeSystemCache @ 0x14085C5C8 (MiInitializeSystemCache.c)
 *     MmMarkHiberPhase @ 0x140AACB50 (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQuerySystemBase(int a1)
{
  return qword_140C6A4D8[2 * a1];
}
