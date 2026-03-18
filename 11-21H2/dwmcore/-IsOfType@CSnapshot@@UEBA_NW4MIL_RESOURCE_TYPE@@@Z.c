/*
 * XREFs of ?IsOfType@CSnapshot@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801A1670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSnapshot::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 45) & 0xFFFFFF7F) == 0;
}
