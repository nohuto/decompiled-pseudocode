/*
 * XREFs of IopInitializeBugCheckDriverData @ 0x140866170
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140354470 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN IopInitializeBugCheckDriverData()
{
  IopBugCheckDriverDataCallbackRecord.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &IopBugCheckDriverDataCallbackRecord,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckDriverDataCallback,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"IoBugCheckDriverData");
}
