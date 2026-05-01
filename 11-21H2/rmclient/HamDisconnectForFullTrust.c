/*
 * XREFs of HamDisconnectForFullTrust @ 0x180006970
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x180006630 (HampConnectionDestroy.c)
 */

__int64 __fastcall HamDisconnectForFullTrust(__int64 a1)
{
  HampConnectionDestroy(a1);
  return 0LL;
}
