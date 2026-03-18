/*
 * XREFs of HalpPowerSetRebootHandler @ 0x1403728C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPowerSetRebootHandler(__int64 a1)
{
  return _InterlockedExchange64(&HalpRebootHandler, a1);
}
