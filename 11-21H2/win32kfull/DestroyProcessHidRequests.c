/*
 * XREFs of DestroyProcessHidRequests @ 0x1C011E360
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C011E378 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
