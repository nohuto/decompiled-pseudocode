/*
 * XREFs of HalpIommuInitInterrupts @ 0x140A89DCC
 * Callers:
 *     HalpIommuInitSystem @ 0x140A89BC0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpInterruptSetIdtEntry @ 0x14037D410 (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpIommuInitInterrupts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !HalpHvIommu )
    HalpInterruptSetIdtEntry(0xCEu, (int)HalpIommuInterruptRoutine, 12, a4, -1LL);
  return 0LL;
}
