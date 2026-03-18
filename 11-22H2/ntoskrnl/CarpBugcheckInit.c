/*
 * XREFs of CarpBugcheckInit @ 0x1405D5964
 * Callers:
 *     CarInit @ 0x1405D3D94 (CarInit.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140354470 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN CarpBugcheckInit()
{
  dword_140C34F6C = CarTipTag;
  dword_140C34F70 = CarTriageContext;
  dword_140C34F68 = (unsigned __int16)NtBuildNumber;
  CarViolationSnapshot = 1;
  dword_140C34F44 = 128;
  qword_140C34F74 = CarRuleClasses;
  CarBugCheckCallback.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &CarBugCheckCallback,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)CarpSecondaryDataCallback,
           KbCallbackSecondaryDumpData,
           &CarComponentName);
}
