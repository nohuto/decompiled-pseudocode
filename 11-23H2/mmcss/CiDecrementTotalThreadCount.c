/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C000212C
 * Callers:
 *     CiThreadCleanup @ 0x1C000B8E0 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000C1B0 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
