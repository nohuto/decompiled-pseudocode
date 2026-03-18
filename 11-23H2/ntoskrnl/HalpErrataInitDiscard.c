/*
 * XREFs of HalpErrataInitDiscard @ 0x140B35040
 * Callers:
 *     HalpErrataInitSystem @ 0x140A8A850 (HalpErrataInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpErrataInitDiscard())(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = HalpStopLegacyUsbInterrupts;
  off_140C01AD0[0] = (__int64 (__fastcall *)())HalpStopLegacyUsbInterrupts;
  return result;
}
