/*
 * XREFs of MiEmptyWorkingSet @ 0x14061C088
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140A43514 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x14036DBF4 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
