/*
 * XREFs of CarpBugcheckInit @ 0x1405D5E44
 * Callers:
 *     CarInit @ 0x1405D4274 (CarInit.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140354C10 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN CarpBugcheckInit()
{
  dword_140C34F2C = CarTipTag;
  dword_140C34F30 = CarTriageContext;
  dword_140C34F28 = (unsigned __int16)NtBuildNumber;
  CarViolationSnapshot = 1;
  dword_140C34F04 = 128;
  qword_140C34F34 = CarRuleClasses;
  CarBugCheckCallback.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &CarBugCheckCallback,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)CarpSecondaryDataCallback,
           KbCallbackSecondaryDumpData,
           &CarComponentName);
}
