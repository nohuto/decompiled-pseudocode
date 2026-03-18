/*
 * XREFs of KeQueryPrcbAddress @ 0x14056C780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryPrcbAddress(int a1)
{
  return KiProcessorBlock[a1];
}
