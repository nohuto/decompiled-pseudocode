/*
 * XREFs of sub_140658604 @ 0x140658604
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN sub_140658604()
{
  stru_140C4E8E0.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &stru_140C4E8E0,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_1404177C0,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"IoBugCheckDriverData");
}
